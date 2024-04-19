#include <iostream>
using namespace std;

void heapify(int arr[],int i, int hs)
{//hs=heap size
int left=(2*i)+1;
int right=(2*i)+2;
int max=i;
if(left<=hs && arr[left]>arr[max])
max=left;
if(right<=hs && arr[right]>arr[max])
max=right;
if(i!=max)
{
swap(arr[i],arr[max]);
heapify(arr,max,hs);
}
}

void buildheap(int arr[], int n, int hs)
{
for(int i=(n/2)-1;i>=0;i--)
{
heapify(arr,i,hs);
}
}

void heapsort(int arr[], int n, int hs)
{
buildheap(arr,n,hs);
{
while(hs>0)
{
swap(arr[0],arr[hs]);
hs--;
heapify(arr,0,hs);
}
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

void swap(int &x, int &y)
{
int temp=x;
x=y;
y=temp;
}
int main() {
int n;
cout<<"enter array size:";
cin>>n;
int hs=n-1;
int a[n];
cout<<"enter array data to be inserted:\n";
insert_arr(a,n);
cout<<"before sorting:\n";
display_arr(a,n);
heapsort(a,n,hs);
cout<<"after sorting:\n";
display_arr(a,n);
return 0;

}