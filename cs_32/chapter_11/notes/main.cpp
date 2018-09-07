#include <iostream>

using namespace std;

typedef string ItemType;

int findIndexOfLargest(const ItemType theArray[], int size) {
    int indexSoFar = 0;
    for (int currentIndex = 1; currentIndex < size; currentIndex++) {
        if (theArray[currentIndex] > theArray[indexSoFar]) {
            indexSoFar = currentIndex;
        }
    }
    return indexSoFar;
}
void selectionSort(ItemType theArray[], int n) {
    for (int last = n -1; last >= 1; last--) {
        int largest = findIndexOfLargest(theArray, last+1);
        swap(theArray[largest], theArray[last]);
    }
}

void bubbleSort(ItemType theArray[], int n) {
    bool sorted = false;
    int pass = 1;
    while (!sorted && (pass < n)) {
        sorted = true;
        for (int index = 0; index < n-pass; index++) {
            int nextIndex = index+1;
            if (theArray[index] > theArray[nextIndex]) {
                swap(theArray[index], theArray[nextIndex]);
                sorted = false;
            }
        }
        pass++;
    }
}

void insertionSort(ItemType theArray[], int n) {
    for (int unsorted = 1; unsorted < n; unsorted++) {
        ItemType nextItem = theArray[unsorted];
        int loc = unsorted;
        while ((loc > 0) && (theArray[loc-1] > nextItem)) {
            theArray[loc] = theArray[loc-1];
            loc--;
        }
        theArray[loc] = nextItem;
    }
}

void merge(ItemType theArray[], int first, int mid, int last) {
    int size = (last-first)+1;
    ItemType temp[size];
    int first1 = first;
    int last1 = mid;
    int first2 = mid+1;
    int last2 = last;
    int i = 0;
    while ((first1 <= last1) && (first2 <= last2)) {
        if (theArray[first1] < theArray[first2]) {
            temp[i] = theArray[first1];
            first1++;
        } else {
            temp[i] = theArray[first2];
            first2++;
        }
        i++;
    }

    while (first1 <= last1) {
        temp[i] = theArray[first1];
        first1++;
        i++;
    }
    while (first2 <= last2) {
        temp[i] = theArray[first2];
        first2++;
        i++;
    }

    int tempIndex = 0;
    int index = first;
    while (tempIndex < size) {
        theArray[index] = temp[tempIndex];
        index++;
        tempIndex++;
    }
}

void mergeSort(ItemType theArray[], int first, int last) {
    if (first < last) {
        int mid = first + (last - first)/2;
        mergeSort(theArray, first, mid);
        mergeSort(theArray, mid+1, last);
        merge(theArray, first, mid, last);
    }
}

void printArray(const ItemType theArray[], int n) {
    for (int i = 0; i < n; i++) {
        cout << theArray[i] << " ";
    }
    cout << endl;
}

int main() {
    ItemType theArray[] = {"f", "e", "d", "c", "b", "a"};

    printArray(theArray, 6);

    mergeSort(theArray, 0, 6);

    printArray(theArray, 6);


    return 0;
}