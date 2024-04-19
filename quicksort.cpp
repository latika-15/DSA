#include <iostream>
using namespace std;

int partition (int a[],int f, int l)
{
int pivot=a[l];
int i=f-1;
for( int j=f;j<=l-1;j++)
{
if (pivot>a[j])
swap(a[++i],a[j]);
}
swap(a[l],a[++i]);
return i;
}

void QS(int a[], int f, int l)
{
if(f<l)
{
int pos=partition(a,f,l);
QS(a,f,pos-1);
QS(a,pos+1,l);
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
int a[n];
cout<<"enter array data to be inserted:\n";
insert_arr(a,n);
cout<<"before sorting:\n";
display_arr(a,n);
QS(a,0,n-1);
cout<<"after sorting:\n";
display_arr(a,n);

return 0;

}