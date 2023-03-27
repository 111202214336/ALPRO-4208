#include <iostream>

using namespace std;

void swapN(int arr[], int n, int x, int y) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            arr[i] = y;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int y = 6;
    swapN(arr, n, x, y);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
