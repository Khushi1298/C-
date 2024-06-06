#include<iostream>
using namespace std;

int missing(int[], int);

int main() {
    int size;
    cout << "Enter size of array: " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int num = missing(arr, size);
    cout << "Missing number: " << num << endl;
}

int missing(int a[], int n) {
    bool found[n + 1] = {false};

    for (int i = 0; i < n; i++) {
        if (a[i] < n) {
            found[a[i]] = true;
        }
    }

    for (int i = 0; i < n; i++) {
        if (!found[i]) {
            return i;
        }
    }

    return -1; // In case no number is missing
}
