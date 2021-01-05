#include <bits/stdc++.h>
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

void deleteAtHead(node* &head)
{
    node* toDelete=head;
    head=head->next;
    
    delete toDelete;
}

void deletetion(node* &head,int val)
{
    if(head==NULL)
    {
        return;
    }

    if(head->next==NULL)
    {
        deleteAtHead(head);
        return;
    }    
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* toDelete=temp->next;
    temp->next=temp->next->next;

    delete toDelete;
}

void insertAtHead(node* &head,int val)
{
    node* n = new node(val);
    n->next=head;
    head=n;

}

void insertAtTail(node* &head, int val)
{
    node* n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node* temp = head;

    while (temp -> next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

bool search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return 1;
        }
        temp=temp->next;
    }
    return 0;
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
node* reverse(node* &head)
{
    node* prevptr=NULL;
    node* currptr=head;
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

node* reverseKnodes(node* &head,int k)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;

    }
    if(nextptr!=NULL)
    {
        head->next =reverseKnodes(nextptr,k);
    }
    return prevptr;

}

int main()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    display(head);
    //insertAtHead(head,4);
    //display(head);
   // cout<<search(head,3)<<endl;
   //deletetion(head,1);
   int k=2;
   node* newhead=reverseKnodes(head,k);
   //reverse(head);
   display(newhead);

}