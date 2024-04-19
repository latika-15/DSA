#include <iostream>
using namespace std;
void merge(int arr[], int l, int m, int r) {
int n1 = m - l + 1;
int n2 = r - m;

int L[n1], R[n2];
for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];
for (int j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];

int i = 0, j = 0, k = l;
while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
        arr[k] = L[i];
        i++;
    } else {
        arr[k] = R[j];
        j++;
    }
    k++;
}

while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
}

while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
}

}
void mergeSort(int arr[], int l, int r) {
if (l < r) {
int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    merge(arr, l, m, r);
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
int n;
cout<<"enter array size:";
cin>>n;
int a[n];
cout<<"enter array data to be inserted:\n";
insert_arr(a,n);
cout<<"before sorting:\n";
display_arr(a,n);
mergeSort(a,0,n-1);
cout<<"after sorting:\n";
display_arr(a,n);
return 0;
}