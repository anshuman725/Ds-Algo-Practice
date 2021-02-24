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
node* recursiveReverseApproach(node* &head)
{

    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    node* newHead=recursiveReverseApproach(head->next);

    head->next->next=head;
    head->next=NULL;

    return newHead;
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
void makeCycle(node* &head,int pos)
{
    node* temp=head;
    node* startNode;
    int count =1;

    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

bool detectCycle(node* &head)
{
    node* slowPtr=head;
    node* fastPtr=head;

    while(fastPtr!=NULL && fastPtr->next!=NULL)
    {
        slowPtr=slowPtr->next;
        fastPtr=fastPtr->next->next;

        if(fastPtr==slowPtr)
        {
            return true;
        }
        
    }
    return false;
}

void removeCycle(node* head)
{
    node* slowPtr=head;
    node* fastPtr=head;

    do
    {
        slowPtr=slowPtr->next;
        fastPtr=fastPtr->next->next;

    } while (slowPtr!=fastPtr);
    
    fastPtr=head;
    while(slowPtr->next!=fastPtr->next)
    {
        slowPtr=slowPtr->next;
        fastPtr=fastPtr->next;
    }
    slowPtr->next=NULL;
}

int main()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);


    display(head);
    //insertAtHead(head,4);
    //display(head);
   // cout<<search(head,3)<<endl;
   //deletetion(head,1);
   //int k=2;
   //node* newhead=reverseKnodes(head,k);
   //reverse(head);
   //display(newhead);
  makeCycle(head,3);
   cout<<detectCycle(head)<<endl;

   removeCycle(head);
   display(head);
   cout<<detectCycle(head)<<endl;

}