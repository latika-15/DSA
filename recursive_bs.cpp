#include <iostream>
using namespace std;

void insert_arr(int ar[], int n)
{
    cout<<"enter 1 element of array:";
    cin>>ar[0];
    for(int i=1;i<n;i++)
    {
        cout<<"\nenter "<<i+1<<" element of array:";
        cin>>ar[i];
        if(ar[i]<ar[i-1])
        {
            cout<<"Not in sorted order please enter data in sorted order."<<endl;
            i--;
        }
    }
}

void display_arr(int ar[], int n)
{
    for(int i=0;i<n;i++)
        cout<<ar[i]<<endl;
}

int recursiveBS(int a[], int low, int high, int key)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == key)
            return mid;
        if (a[mid] < key)
            return recursiveBS(a, mid + 1, high, key);
        return recursiveBS(a, low, mid - 1, key);
    }
    return -1;
}

int main() {
    int n, key;
    cout<<"enter array size:";
    cin>>n;
    int a[n];
    cout<<"enter array elements:\n";
    insert_arr(a, n);
    cout<<"elements are:\n";
    display_arr(a, n);

    cout<<"enter element to be searched:\n";
    cin>>key;
    int res = recursiveBS(a, 0, n - 1, key);

    if (res == -1) {
        cout << "Element not found in the array." << endl;
    } else {
        cout << "Element found at index: " << res << endl;
    }

    return 0;
}
