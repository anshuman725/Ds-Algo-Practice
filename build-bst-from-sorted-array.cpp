#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* sortedArrayToBst(int arr[],int start,int end)
{
    if(start>end)
    {
        return NULL;
    }
    int mid=(start+end)/2;
    Node* root=new Node(arr[mid]);
    root->left=sortedArrayToBst(arr,start,mid-1);
    root->right=sortedArrayToBst(arr,mid+1,end);

    return root;
}
void preorderPrint(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);

}

int main()
{
    int arr[]={10,20,30,40,50};
    int start=0;
    int end=4;

    Node* root=sortedArrayToBst(arr,start,end);
    preorderPrint(root);
    cout<<endl;

}