//iterative linear search
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
for (int i = 0; i < n; i++) {
if (arr[i] == key) {
return i; // Return index if key found
}
}
return -1; // Return -1 if key not found
}

int main() {
int arr[] = {3, 6, 12, 4, 8};
int key= 8;
int n = sizeof(arr) / sizeof(arr[0]);

int result = linearSearch(arr, n, key);

if (result != -1) {
    cout << "Element found at index " << result <<" in the array."<< endl;
} else {
    cout << "Element not found in the array." << endl;
}

return 0;
}