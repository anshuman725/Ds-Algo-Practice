// (a) Inorder (Left, Root, Right) : 4 2 5 1 3 
// (b) Preorder (Root, Left, Right) : 1 2 4 5 3 
// (c) Postorder (Left, Right, Root) : 4 5 2 3 1

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

void inorder(struct Node* root)
{
  if(root==NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);  
}

void postorder(struct Node* root)
{
    if(root==NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}


int main()
{
    struct Node* root=new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);

    // preoder(root);
    // inorder(root);
    postorder(root);

    

}