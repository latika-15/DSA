//recursive linear search
#include <iostream>
using namespace std;

int recursiveLS(int arr[], int key, int index, int size) {
// Base Case: If the index exceeds the array size, return -1 (indicating key not found)
if (index >= size) {
return -1;
}

// Recursive Case: If the element at the current index matches the key, return the index
if (arr[index] == key) {
return index;
}

// Recursive Call: Search in the rest of the array
return recursiveLS(arr, key, index + 1, size);

}

void insert_arr(int arr[], int n)
{
for(int i=0;i<n;i++)
cin>>arr[i];
}
void display_arr(int arr[], int n)
{
for(int i=0;i<n;i++)
cout<<arr[i]<<endl;
}
int main() {

int n,key;
cout<<"enter array size:";
cin>>n;
int a[n];
cout<<"enter array data to be inserted:\n";
insert_arr(a,n);
cout<<"elements are:\n";
display_arr(a,n);
cout<<"enter element to be searched:\n";
cin>>key;
int index = recursiveLS(a, key, 0, n);

if (index != -1) {
cout << "Element found at index: " << index << endl;
} else {
cout << "Element not found in the array." << endl;
}

return 0;

}