#include <iostream>
#include <vector>

// Algoritma Selection Sort
void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

// Algoritma Insertion Sort
void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Algoritma Quick Sort
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; ++j) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    std::vector<int> arr = {7, 2, 5, 1, 8, 3};

    // Selection Sort
    std::vector<int> selectionArr = arr;
    selectionSort(selectionArr);
    std::cout << "Selection Sort: ";
    for (int num : selectionArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Insertion Sort
    std::vector<int> insertionArr = arr;
    insertionSort(insertionArr);
    std::cout << "Insertion Sort: ";
    for (int num : insertionArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Quick Sort
    std::vector<int> quickArr = arr;
    quickSort(quickArr, 0, quickArr.size() - 1);
    std::cout << "Quick Sort: ";
    for (int num : quickArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
