#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
public:
    int front, rear,size;
    int *array;


    CircularQueue(int nsize) {
        size = nsize;
        front = rear = -1;
        array = new int[size];
    }

    ~CircularQueue() {
        delete[] array;
    }

    void enqueue(int item) {
        if ((front == 0 && rear == size- 1) || (rear == (front - 1) % (size - 1))) {
            cout << "Queue is full" << endl;
            return;
        }
        else if (front == -1) {
            front = rear = 0;
            array[rear] = item;
        }
        else if (rear == size- 1 && front != 0) {
            rear = 0;
            array[rear] = item;
        }
        else {
            rear++;
            array[rear] = item;
        }
    }

    int dequeue() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        int item = array[front];
        array[front] = -1;
        if (front == rear) {
            front = rear = -1;
        }
        else if (front == size- 1) {
            front = 0;
        }
        else {
            front++;
        }

        return item;
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Current Circular Queue: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++) {
                cout << array[i] << " ";
            }
        }
        else {
            for (int i = front; i < size; i++) {
                cout << array[i] << " ";
            }
            for (int i = 0; i <= rear; i++) {
                cout << array[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    CircularQueue cq(3);

    cq.enqueue(1);
    cq.enqueue(2);
    cout << "Dequeued: " << cq.dequeue() << endl;
    cq.enqueue(3);
    cout << "Dequeued: " << cq.dequeue() << endl;
    cq.enqueue(4);

    cq.display();

    return 0;
}

