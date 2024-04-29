#include<bits/stdc++.h>
using namespace std;

struct job{int id,p,d;};

bool cmp(job x, job y) 
{
    return x.p>y.p;
    
}

void jobseq(job a[],int n)
{   
	int slot[n],result[n];
	for( int i=0;i<n;i++)slot[i]=-1;
	
	for( int i=0;i<n;i++)
	{   
	for(int j=min(n,a[i].d)-1; j>=0;j--)
	{   if(slot[j]==-1){ 
	    result[j]=a[i].id;  slot[j]=1;
	    break;
	}
	}
	}
	
	for( int i=0;i<=n-1;i++)
	{
	if(slot[i]!=-1) cout<<"job no."<<result[i]<<" in slot "<<i<<" - "<<i+1<<endl;
	}
}

int main()
{
int n,m;
cout<<"enter no. of jobs: "; cin>>n;
job a[n];
cout<<"enter jobwise id, profits and deadlines:\n";
for(int i=0;i<n;i++) 
{
cin>>a[i].id>>a[i].p>>a[i].d;
} 
sort(a,a+n,cmp);
jobseq(a,n);
}