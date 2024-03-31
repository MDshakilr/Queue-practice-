/*Task 4: Reverse a Queue Using a Stack
Implement a function that uses a stack to reverse a given queue.

● Sample Input:
Reverse the queue [1, 2, 3, 4].
● Sample Output:
Reversed Queue: [4, 3, 2, 1]
*/
#include <bits/stdc++.h>
using namespace std;


void Print(queue<int>& Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}
void reverseQueue(queue<int>& Queue)
{
    stack<int> Stack;
    while (!Queue.empty()) {
        Stack.push(Queue.front());
        Queue.pop();
    }
    while (!Stack.empty()) {
        Queue.push(Stack.top());
        Stack.pop();
    }
}

// Driver code
int main()
{
    queue<int> Queue;
    Queue.push(1);
    Queue.push(2);
    Queue.push(3);
    Queue.push(4);
cout<<"Reversed Queue:";

reverseQueue(Queue);
    Print(Queue);
}
