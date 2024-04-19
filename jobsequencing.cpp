#include<bits/stdc++.h>
using namespace std;

struct job{int d,p,id;};

bool cmp(job x, job y) 
{
    return x.p>y.p;
    
}

void jobseq(job a[],int n)
{   
	int slot[n],result[n];
	for( int i=0;i<=n-1;i++)slot[i]=-1;
	
	for( int i=0;i<=n-1;i++)
	{   
	for(int j=(a[i].d)-1; j>=0;j--)
	{   if(slot[j]==-1){ 
	    result[j]=a[i].id;  slot[j]=1;
	    break;
	}
	}
	}
	
	for( int i=0;i<=n-1;i++)
	{
	if(slot[i]!=-1) cout<<"jpob no."<<result[i]<<" in slot "<<i<<" - "<<i+1<<endl;
	}
}

int main()
{
int n,m;
cout<<"enter elements to be entered:"; cin>>n;
job a[n];
for(int i=0;i<n;i++) 
{
cin>>a[i].id>>a[i].p>>a[i].d;
} 
sort(a,a+n,cmp);
jobseq(a,n);
}