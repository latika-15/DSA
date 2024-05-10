#include <iostream>
using namespace std;
int n;
struct tnode{tnode* l;tnode* r;int frequ; char data;};
struct list{tnode* root; list* next;};
list* start=NULL, *End=NULL, *m,*temp,*temp1;

void getnode()
{
    m=new list;
    m->root=new tnode;
    cout<<"\n Enter frequency: ";
    cin>>m->root->frequ;
    cout<<"\nEnter character: ";
    cin>>m->root->data;
    m->root->l=NULL;
    m->root->r=NULL;
    m->next=NULL;
}

tnode* Least(tnode * temp)
{
	if(start== End) {tnode * temp1=temp;   start=NULL; End=NULL;  return temp1;}
	else
	{tnode* temp1=temp;     start=start->next;     return temp1;}
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
    temp=start;
    while(temp->root->frequ < m->root->frequ)
    {
        temp1=temp; temp=temp->next;
    }
    m->next=temp; temp1->next=m;
}

void insert()
{
if(start==NULL){start=m; End=m;}
else if(m->root->frequ <= start->root->frequ) insertatfirst();
else if(m->root->frequ >= End->root->frequ) insertatlast();
else insertatpos();
}
void traverse()
{
    temp=start;
    cout<<"\n list is: \n";
    while(temp!=NULL)
    {
        cout<<temp->root->frequ<<" "<<temp->root->data<<endl;
        temp=temp->next;
    }
}

void traversecode(tnode *temp, string code)
{
    if(temp->l==NULL && temp->r==NULL)
    {
        cout<<"Huffman coding for " <<temp->data<<" is: "<<code<<endl;
        return;
    }
    traversecode(temp->l,code+"0");
    traversecode(temp->r,code+"1");
}
int main()
{
    int sum=0;
    cout<<"No. of charaters: "; cin>>n;
    for(int i=0;i<n;i++)
    {
        getnode();
        insert();
        traverse();
    }
    for(int i=0;i<n-1;i++)
    {
        list* newm=new list;
        newm->next=NULL;
        newm->root=new tnode;
        newm->root->l=Least(start->root);
        newm->root->r=Least(start->root);
        newm->root->frequ=newm->root->l->frequ + newm->root->r->frequ;

        cout<<"\n Added data: "<<newm->root->frequ;
        newm->root->data='$';
        m=newm;  insert();
        cout<<"\n Updated list is: ";
        temp=start;
        while(temp!=NULL)
        {
            cout<<temp->root->frequ<<" "<<temp->root->data<<endl;
            temp=temp->next;
        }
    }
    cout<<"\n The huffman code using greedy algorithm is:"<<endl;
    traversecode(start->root," ");
}