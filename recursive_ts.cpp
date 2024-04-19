#include <iostream>
using namespace std;

int ternarySearch(int arr[], int left, int right, int key) {
if (right >= left) {
int mid1 = left + (right - left) / 3;
int mid2 = right - (right - left) / 3;
}
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
int result = ternarySearch(a, 0, n - 1, key);

if (result == -1) {
    cout << "Key not found in the array.";
} else {
    cout << "Key found at index: " << result;
}

return 0;

}