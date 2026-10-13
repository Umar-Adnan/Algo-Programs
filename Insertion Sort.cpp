#include <iostream>
using namespace std;

int main() {
    int n = 10;
	int arr[n];

	for(int i=0; i<n; i++){
		cout<<"Enter value of array at index "<<i<<" : ";
		cin>>arr[i];
	}
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements greater than key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key into its correct position
        arr[j + 1] = key;
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
