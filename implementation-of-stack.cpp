#include<iostream>
using namespace std;
#define n 100

class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1; 
    }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"Stack overflow";
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(int x)
    {
        if(top==-1)
        {
            cout<<"No element to pop";
            return ;
        }
        top--;
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"No element at top"<<endl;
            return -1;
           
        }
        return arr[top];
    }
    bool empty()
    {
        return top==-1;
    }
};

int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    s.pop(4);
    cout<<s.Top()<<endl;;
    if(s.empty())
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"stack not empty";
    }
    


}