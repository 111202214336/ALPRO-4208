#include <iostream>

using namespace std;

bool isFound(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    cout << isFound(arr, n, x) ? "Found" : "Not Found";
    return 0;
}
