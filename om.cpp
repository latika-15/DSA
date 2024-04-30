#include <bits/stdc++.h>
using namespace std;

void shift(int file[], int &n)
{
    for(int i=1;i<n-1;i++)
    {
        file[i]=file[i+1];
    }
    n--;
}

int optimalmerge (int file[], int n)
{
    sort(file,file+n);
    int cost=0;
    while(n > 1)
    {
        int mergefs=file[0]+file[1];
        cost+=mergefs;
        cout<<"cost of mergeing "<<file[0]<<"and"<<file[1]<<"is"<<cost<<endl;
        file[0]=mergefs;
        shift(file,n);
        sort(file,file+n);
    }
    return cost;
}
int main()
{
    int n;
    cout<<"No. of files are:";
    cin>>n;
    int f[n];
    cout<<"enter file size:\n";
    for(int i=0;i<n;i++)
    cin>>f[i];

    int mincost = optimalmerge (f,n);
    cout<<"minimum cost of merging is:\n"<<mincost;
    return 0;
}