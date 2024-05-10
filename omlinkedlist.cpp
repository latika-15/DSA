#include <iostream>
using namespace std;
int n,sum=0;
struct tnode{tnode* l;tnode* r;int length;};
struct list{tnode* root;list *next;};
list *start=NULL, *End=NULL, *m,*temp,*temp1;
void getnode()
{
    m=new list;
    m->root=new tnode;
    cout<<"\n enter length:";
    cin>>m->root->length;
    m->next=NULL;
    m->root->l=NULL;
    m->root->r=NULL;
}

void traverse()
{
    temp=start;
    while(temp!=NULL)
    {
        cout<<temp->root->length<<" ";
        temp=temp->next;
    }
}


void insertatfirst()
{
    m->next=start;
    start=m;
}

void insertatlast()
{
    End->next=m;
    End=m;
}

void insertatpos()
{
    list* t2;
    list* t1=start;
    temp=start;
    while(t1->root->length<m->root->length)
    {
        t2=t1;
        t1=t1->next;
    }
    m->next=t1;
    t2->next=m;
}
void insert()
{
    if(start==NULL){
        start=m;End=m;
    }
    else if(m->root->length<=start->root->length) insertatfirst();
    else if(m->root->length>=End->root->length) insertatlast();
    else insertatpos();
}

tnode* Least(tnode * temp)
{
    if(start==End)
    {
        tnode* temp1=temp;
        start=NULL;
        End=NULL;
        return temp1;
    }
    else{
        tnode* temp1=temp;
        start=start->next;
        return temp1;
    }
}

int main()
{
    cout<<"no. of files:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        getnode(); insert(); traverse();
    }
    for(int i=0;i<n;i++)
    {
        list* newm=new list;
        newm->next=NULL;
        newm->root=new tnode;
        newm->root->l=Least(start->root);
        newm->root->r=Least(start->root);

        newm->root->length=newm->root->l->length+newm->root->r->length;
        m=newm;   insert();
        cout<<"\n UPDATED LIST: ";
        temp=start;
        while(temp!=NULL)
        {
            cout<<temp->root->length<<" ";
            temp=temp->next;
        }
        traverse();
        cout<<"\n the optimal solution for merging using greedy algorithm is as follows:";
        sum+=newm->root->length;
        cout<<sum;
    }
}