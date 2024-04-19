//iterative ternary search
#include <iostream>
using namespace std;

int ternarySearch(int arr[], int left, int right, int key) {
while (left <= right) {
int mid1 = left + (right - left) / 3;
int mid2 = right - (right - left) / 3;

    if (arr[mid1] == key) {
        return mid1;
    }
    if (arr[mid2] == key) {
        return mid2;
    }

    if (key < arr[mid1]) {
        right = mid1 - 1;
    } else if (key > arr[mid2]) {
        left = mid2 + 1;
    } else {
        left = mid1 + 1;
        right = mid2 - 1;
    }
}

return -1; // Key not found
int result;
if (result==-1)
 {
    cout << "Element not found in the array." << endl;
} 
else {
    cout << "Element found at index: " << result << endl;
}

return 0;


}