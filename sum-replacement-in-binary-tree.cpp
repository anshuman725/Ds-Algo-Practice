#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }

};

void sum(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    sum(root->left);
    sum(root->right);
    
    if(root->left!=NULL)
    {
        root->data+=root->left->data;
    }
    if(root->right!=NULL)
    {
        root->data+=root->right->data;
    }

}
void preoder(struct Node* root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preoder(root->left);
    preoder(root->right);
}


int main()
{
    Node* root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

   preoder(root);
   cout<<endl;
   sum(root);
   preoder(root);







}