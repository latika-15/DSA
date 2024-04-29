#include <bits/stdc++.h>
using namespace std;
struct item
{
    double p,w,pdivw;
};

bool cmp(item x, item y)
{
    return x.pdivw>y.pdivw;
}

void display(item a[], int n)
{   cout<<"\nitemno"<<"\tprofit"<<"\tweight"<<"\tP/W ratio"<<endl;
	for( int i=0;i<n;i++)
	{
		cout<<"item "<<i+1<<" \t "<<a[i].p<<" \t "<<a[i].w<<" \t "<<a[i].pdivw<<endl;
	}
}
double knapsack(item a[],int n,int m)
{   int i;
	double x[n]={0,0},remainingW=m, totalP=0.0;
	
	for( i=0;i<n;i++) 
	{   if(a[i].w>remainingW) break;
		x[i]=1;     
        totalP+=a[i].p;
        remainingW=remainingW-a[i].w;
	}

	if(remainingW!=0) 
	{
        x[i]=remainingW/a[i].w;
        totalP+=x[i]*a[i].p;
    }
	
	return totalP;
}
int main()
{
int n,m;
cout<<"Enter no. of items";
cin>>n;
item a[n];
cout<<"\nEnter profits and weights for the items:\n";
for(int i=0;i<n;i++)
{cout<<"\nitem "<<i+1<<"\t";
 cin>>a[i].p>>a[i].w; 
 a[i].pdivw=a[i].p/a[i].w;
 }

cout<<"Enter capacity of knapsack:\n";
 cin>>m;
sort(a,a+n,cmp);  //nlogn
display(a,n);
cout<<"Maximum profit is "<<knapsack(a,n,m);
}