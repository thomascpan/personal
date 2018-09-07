#include <iostream>
#include "ArrayMaxHeap.h"

using namespace std;

void sort(int array[], int size) {
    bool swapped = true;
    while (swapped) {
        int index = 0;
        swapped = false;
        while (index < size-1) {
            if (array[index] > array[index+1]) {
                int temp = array[index];
                array[index] = array[index+1];
                array[index+1] = temp;
                swapped = true;
            }
            index++;
        }
    }
}

int main() {
    HeapInterface<int>* heap = new ArrayMaxHeap<int>();

    cout << heap->isEmpty() << endl;

    heap->add(5);
    heap->print();
    heap->add(10);
    heap->print();
    heap->add(2);
    heap->print();
    heap->add(1);
    heap->print();
    heap->add(7);
    heap->print();
    heap->add(20);
    heap->print();

    cout << endl;
    cout << heap->isEmpty() << endl;
    cout << heap->peekTop() << endl;
    cout << endl;

    heap->remove();
    heap->print();
    heap->remove();
    heap->print();
    heap->remove();
    heap->print();
    heap->remove();
    heap->print();

    cout << endl;
    heap->clear();
    cout << heap->isEmpty() << endl;
    cout << endl;

    int array[10] = {10, 3, 2, 7, 9, 6, 1, 4, 8, 5};
    delete heap;
    heap = new ArrayMaxHeap<int>(array, 10);
    heap->print();

    cout << endl;
    cout << heap->getHeight() << endl;
    cout << endl;

    while (!heap->isEmpty()) {
        cout << heap->peekTop() << endl;
        heap->remove();
    }

    int array2[10] = {10, 3, 2, 7, 9, 6, 1, 4, 8, 5};
    heap->heapSort(array2, 10);

    for (int i = 0; i < 10; i++)
        cout << array2[i] << " ";
    cout << endl;



    return 0;
}
