#include <iostream>
#include <stack>
using namespace std;

class queue
{
    stack<int> st1;
    stack<int> st2;

public:
    void push(int x)
    {
        st1.push(x);
    }

    int pop()
    {
        if (st1.empty() and st2.empty())
        {
            cout << "Queue is empty";
            return -1;
        }
        if (st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }

        int topval = st2.top();
        st2.pop();
        return topval;
    }
};

int main()
{
    queue a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    cout << a.pop() << endl;
    cout << a.pop() << endl;
    cout << a.pop() << endl;
}