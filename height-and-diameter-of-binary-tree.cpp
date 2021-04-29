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
int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int lnode=height(root->left);
    int rnode=height(root->right);
    return max(lnode,rnode)+1;
}

// int calHeight(Node* root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     return max(calHeight(root->left),calHeight(root->right))+1;
// }

// int calDiameter(Node* root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     int lHeight=calHeight(root->left);
//     int rHeight=calHeight(root->right);

//     int curr=lHeight+rHeight+1;
//     int lDia=calDiameter(root->left);
//     int rDia=calDiameter(root->right);
//     return max(curr,max(lDia,rDia));

// }

// Optimized o(n)
int calDiameter(Node* root,int* height)
{
    if(root==NULL)
    {
        *height=0;
        return 0;
    }

    int lh=0,rh=0;

    int lDia=calDiameter(root->left,&lh);
    int rDia=calDiameter(root->right,&rh);

    int curr=lh+rh+1;
    *height=max(lh,rh)+1;

    return max(curr,max(lDia,rDia));
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
    cout<<"height "<<height(root)<<endl;
    cout<<"diameter "<<calDiameter(root,&h)<<endl;
}