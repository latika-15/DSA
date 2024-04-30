#include <iostream>
using namespace std;
int n,sum=0;
struct tnode{tnode *l;tnode *r;int length;};

void getnode()
{
    m=new list;
    m->root=new tnode;
    cout<<"\n enter length:";
    cin>>m>>root>>length;
    m->next=NULL;
    m->root->l=NULL;
    m->root->r=NULL;
}

int main()
{
    cout<<"no. of files:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        getnode(); insert(); traverse();
    }
}