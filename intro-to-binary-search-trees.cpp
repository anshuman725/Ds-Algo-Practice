#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left,*right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* insertBST(Node* root,int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }

    if(val<root->data)
    {
        root->left=insertBST(root->left,val);
    }
    else{
        root->right=insertBST(root->right,val);
    }
    return root;
}

void inorderPrint(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}



int main()
{
    Node* root=NULL;
    root=insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    
    // the inorder print of bst will always give sorted value sorted 
    // thus the putput for these values will be 1 2 3 4 5 7

    inorderPrint(root);



}