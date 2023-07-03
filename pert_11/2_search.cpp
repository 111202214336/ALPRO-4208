#include <iostream> 
#include <vector>
#include <algorithm>

// Fungsi untuk melakukan pencarian linear
int linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // Jika target tidak ditemukan
}

// Fungsi untuk melakukan pencarian binary (hanya pada array terurut)
int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // Jika target tidak ditemukan
}

int main() {
    std::vector<int> arr = {2, 5, 7, 9, 12, 15, 19};
    int target = 9;

    // Pencarian linear
    int linearIndex = linearSearch(arr, target);
    if (linearIndex != -1) {
        std::cout << "Linear Search: Target ditemukan pada indeks " << linearIndex << std::endl;
    } else {
        std::cout << "Linear Search: Target tidak ditemukan" << std::endl;
    }

    // Pencarian binary
    // Perhatikan bahwa binary search hanya dapat digunakan pada array yang sudah terurut
    std::sort(arr.begin(), arr.end());
    int binaryIndex = binarySearch(arr, target);
    if (binaryIndex != -1) {
        std::cout << "Binary Search: Target ditemukan pada indeks " << binaryIndex << std::endl;
    } else {
        std::cout << "Binary Search: Target tidak ditemukan" << std::endl;
    }

    return 0;
}
