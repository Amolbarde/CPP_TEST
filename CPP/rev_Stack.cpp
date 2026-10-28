#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& st, int element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }

    int topelem = st.top();
    st.pop();

    insertAtBottom(st, element);

    st.push(topelem);
}

void reverseStack(stack<int>& st)
{
    if (st.empty())
    {
        return;
    }

    int topelem = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, topelem);
}

void printStack(stack<int>& st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << "Original stack: ";
    printStack(st);

    // Stack was emptied by printStack(), so push again
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverseStack(st);

    cout << "Reverse stack: ";
    printStack(st);

    return 0;
}
