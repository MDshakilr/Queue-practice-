/*Task 5: Implement a Priority Queue
Extend your queue to support priority enqueueing, where each element has a priority
associated with it, and elements are dequeued based on their priority.
● Sample Input:
Enqueue (3, High Priority), Enqueue (5, Low Priority), Enqueue (2, Medium Priority),
Dequeue.
● Sample Output:
Dequeued Element: (3, High Priority)
*/
#include <bits/stdc++.h>

#include <queue>

using namespace std;
struct QueueElement
{
    int value;
    string priority;
    QueueElement(int v, string p) : value(v), priority(p) {}

    bool operator<(const QueueElement& other) const
    {

        return priority < other.priority;
    }
};

int main()
{

    priority_queue<QueueElement> pq;


    pq.push(QueueElement(3, "High Priority"));
    pq.push(QueueElement(5, "Low Priority"));
    pq.push(QueueElement(2, "Medium Priority"));

    if (!pq.empty())
    {
        QueueElement highestPriorityElement = pq.top();
        while (!pq.empty())
        {
            QueueElement currentElement = pq.top();
            pq.pop();
            if (currentElement.priority < highestPriorityElement.priority)
            {
                highestPriorityElement = currentElement;
            }
        }
        cout << "Dequeued Element: (" << highestPriorityElement.value << ", " << highestPriorityElement.priority << ")" << endl;
    }
    else
    {
        cout << "Queue is empty!" << endl;
    }

    return 0;
}

