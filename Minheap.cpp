#include <iostream>
using namespace std;

int heap[100];
int heapSize = 0;

void insert(int val) {
    int i = heapSize++;
    heap[i] = val;

    while (i != 0 && heap[(i - 1) / 2] > heap[i]) {
        swap(heap[i], heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void display() {
    for (int i = 0; i < heapSize; i++)
        cout << heap[i] << " ";
}

int main() {
    insert(10);
    insert(4);
    insert(15);
    insert(20);
    insert(0);

    display();
    return 0;
}