#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    node* n = new node(val);
    
    n->next=head;
    head=n;

}
void insertAtTail(node* &head,int val)
{
    node* n = new node(val);

    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }

    node* temp = head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = n;

}

node* reverse(node* &head)
{
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
return prevptr;
}
node* recursiveReverse(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    node* newhead=recursiveReverse(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;

}



void display(node* head)
{
     node* temp = head;
     while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    cout << "NULL" << endl;
}

int main()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    node* newhead = recursiveReverse(head);
    display(newhead);


}
