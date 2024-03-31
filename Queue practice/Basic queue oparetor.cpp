/*Task 1: Basic Queue Operations
Define a queue structure that can hold integer values. Implement functions to perform
basic operations:
● enqueue(int): Add an element to the back of the queue.
dequeue(): Remove and return the front element from the queue. If the queue is empty,
return a special value or handle the condition gracefully.
● Sample Input:
● Enqueue 5.
● Enqueue 10.
Dequeue.
● Sample Output:
● Front element dequeued: 5
Current Queue: 10
*/
#include <bits/stdc++.h>
using namespace std;
#define SIZE 5
class Queue
{
public:
    int *array;
    int front;
    int rear;

    Queue()
    {
        array = new int[SIZE];
        front = -1;
        rear = -1;
    }

    bool isempty()
    {
        return (front == -1 && rear == -1);
    }
    void enqueue(int value)
    {
        if (rear == SIZE - 1)
            cout << "queue is full\n";
        else
        {
            if (front == -1)
                front = 0;
            rear++;
            array[rear] = value;
        }
    }
    void  dequeue()
    {
        if (isempty())
        {
            cout << "Queue is empty\n";

        }
        int dequeue = array[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {

            front++;
        }
        cout << "Front element dequeued: " << dequeue<< endl;


    }


    void displayQueue()
    {
        if (isempty())
            cout << "Queue is empty\n";
        else
        {
            for (int i = front; i <= rear; i++)
                cout << array[i] << " ";
            cout << endl;
        }
    }
};

int main()
{
    Queue q1;
    q1.enqueue(5);
    q1.enqueue(10);

    q1.dequeue();

    cout<<"Current Queue:";
    q1.displayQueue();

    return 0;
}

