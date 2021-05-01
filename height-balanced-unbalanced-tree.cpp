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

// int findHeight(Node* root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }

//     int lh=findHeight(root->left);
//     int rh=findHeight(root->right);

//     return max(lh,rh)+1;
// }

// bool isBalanced(Node* root)
// {
//     if(root==NULL)
//     {
//         return true;
//     }

//     if(isBalanced(root->left)==false)
//     {
//         return false;
//     }
//     if(isBalanced(root->right)==false)
//     {
//         return false;
//     }

//     int lh=findHeight(root->left);
//     int rh=findHeight(root->right);

//     if(abs(lh-rh)<=1)
//     {
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// optimized sol

bool isBalanced(Node* root,int* height)
{
  if(root==NULL)
  {
      return true;
  }

    int lh=0;
    int rh=0;

  if(isBalanced(root->left,&lh)==false)
  {
      return false;
  }

  if(isBalanced(root->right,&rh)==false)
  {
      return false;
  }

  *height=max(lh,rh)+1;
    if(abs(lh-rh)<=1)
        {
            return true;
        }
    else{
        return false;
      }
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

    int h=0;
    if(isBalanced(root,&h))
    {
        cout<<"balanced"<<endl;
    }
    else{
        cout<<"Unbalanced"<<endl;
    }

}