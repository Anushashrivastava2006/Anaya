#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define null 0 
using namespace std ; 
//addnode using singly  
/*struct node 
{  
    int data ;
    node *next;
};
node *first,*temp,*ttemp,*p;
void init ()
{
    first = temp= ttemp=null;
}
void addnode(int val)
{
    temp= first;
    while(temp->next!=null)
    {
        temp= temp->next;
    }
        ttemp=new node;
        ttemp->data=val;
        ttemp->next=null;
        temp->next=ttemp;
    }
void createfirst(int val)
{
    first = new node;
    first->data = val; 
    first -> next = null;
}


}
int main()
{
    init ();
    createfirst(60);
    addnode(10);
    disp();
}*/



struct node 
{  
    int data ;
    node *next;
};
node *first,*temp,*ttemp,*p;
void init ()
{
    first = temp= ttemp=null;
}
void delete_after(int x)
{
    temp=first;
    while(temp->data!=x)
    {
        temp
    }
}
void createfirst(int val)
{
    first = new node;
    first->data = val;
    first -> next = null;
}
void disp()
{
    temp = first;
    while( temp!= null){
        cout<< temp-> data << endl;
 temp = temp -> next;
    }
}
int main()
{
    init ();
    createfirst(60);
    addnode(10);
    disp();
}

