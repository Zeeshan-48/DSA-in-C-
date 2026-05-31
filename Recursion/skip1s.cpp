#include<iostream>
using namespace std;
void skipone(int arr[], int n, int idx) {
    if (idx == n) {
        return;
    }
    if (arr[idx] != 1) {
        cout << arr[idx];
    }
    skipone(arr, n, idx + 1);
}
int main() {
    int arr[] = {1, 1, 2, 1, 2, 6, 7, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    skipone(arr, n, 0);
    cout << endl;
}