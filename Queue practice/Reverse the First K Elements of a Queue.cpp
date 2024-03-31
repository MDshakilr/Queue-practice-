/*Task 7: Reverse the First K Elements of a Queue
Implement a function to reverse the first K elements of a queue, leaving the other
elements in their original order.
● Sample Input:
Reverse the first 3 elements of the queue [1, 2, 3, 4, 5].
● Sample Output:
Modified Queue: [3, 2, 1, 4, 5]
*/
#include<bits/stdc++.h>
#include <queue>
#include <stack>
using namespace std;

void reverseFirstK(queue<int> &q, int k) {
    if (k < 0 || k > q.size()) {
        cout << "Invalid value of k\n";
        return;
    }

    stack<int> s;
    for (int i = 0; i < k; ++i) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    for (int i = 0; i < q.size() - k; ++i) {
        q.push(q.front());
        q.pop();
    }
}

void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;

    cout << "Original queue: ";
    printQueue(q);

    reverseFirstK(q, k);

    cout << "Queue after reversing first " << k << " elements: ";
    printQueue(q);

    return 0;
}
