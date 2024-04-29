#include<bits/stdc++.h>
using namespace std;
void swap(int &x,int &y)
{ int t=x; x=y; y=t;}

void shift(int files[], int &n)
{
	for (int i = 1; i < n - 1; i++) files[i] = files[i + 1];
	n--; 
}

int OptimalMerge(int files[], int n)
{
  
    sort(files,files+n);
    int cost = 0;
    while (n > 1) 
	{
        int mergedFileSize = files[0] + files[1];
        cost += mergedFileSize;
        files[0] = mergedFileSize;
        shift(files,n);
        sort(files,files+n);
    }
    return cost;
}
int main()
{   int n;
	cout<<"No. of files are: "; cin>>n;
    int files[n];
    
    cout<<"\nEnter the file size:\n";
    for(int i=0;i<n;i++) 
    cin>>files[i];
    
    int mincost = OptimalMerge(files, n);
    
    cout<<"Minimum cost of merging is "<<mincost;
    return 0;
}