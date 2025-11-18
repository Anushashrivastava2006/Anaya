#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define null 0
using namespace std;

/*struct node
{
    int data;
    node *next,*prev;
};
node *first,*temp,*ttemp,*p;
void init(){
    first=temp=ttemp=null;
}


void addnode(int val)
{
    temp=first;
    while(temp->next!=null)
    {
         temp=temp->next;
    }
    ttemp=new node;
    
    ttemp->data=val;
    ttemp->next=null;
    ttemp->prev=temp;
    temp->next=ttemp;
    

}
void create_first(int val)
{
    first = new node;
    first->data=val;
    first->next=null;
    first->prev=null;

}



void disp()
{
temp=first;
while(temp!=null)
{
    cout<< temp->data<<endl;

    temp=temp->next;
}
    


}
int main()
{
    init();
    create_first(30);
    addnode(40);
    addnode(70);
    addnode(90);
    disp();


}
*/



// add before first
/*struct node
{
    int data;
    node *next,*prev;
};
node *first,*temp,*ttemp,*p;
void init(){
    first=temp=ttemp=null;
}
void addnode(int val)
{
    temp=first;
    while(temp->next!=null)
    {
         temp=temp->next;
    }
    ttemp=new node;
    
    ttemp->data=val;
    ttemp->next=null;
    ttemp->prev=temp;
    temp->next=ttemp;
   
 

}
void create_first(int val)
{
    first = new node;
    first->data=val;
    first->next=null;
    first->prev=null;

}

void addbefore_first(int val)
{
    temp= new node ;
    temp->data=val;
    temp->prev=null;
    temp->next=first;
    first->prev=temp;
    first=temp;


}

void disp()
{
temp=first;
while(temp!=null)
{
    cout<< temp->data<<endl;

    temp=temp->next;
}
    


}
int main()
{
    init();
    create_first(30);
    addnode(40);
    addnode(70);
    addnode(90);
    addbefore_first(33);
    disp();


}*/


// add before last 
/*struct node
{
    int data;
    node *next,*prev;
};
node *first,*temp,*ttemp,*last ,*p;
void init(){
    first=temp=ttemp=null;
}
void addnode(int val)
{
    temp=first;
    while(temp->next!=null)
    {
         temp=temp->next;
    }
    ttemp=new node;
    
    ttemp->data=val;
    ttemp->next=null;
    ttemp->prev=temp;
    temp->next=ttemp;
   
 

}
void create_first(int val)
{
    first = new node;
    first->data=val;
    first->next=null;
    first->prev=null;

}*/

/*void addbefore_first(int val)
{
    temp= new node ;
    temp->data=val;
    temp->prev=null;
    temp->next=first;
    first->prev=temp;
    first=temp;


}
void addbefore_last (int val)
{

    temp=new node;
    
        temp ->data=val;
        ttemp=temp->prev;
    
        p=new node;
        p->data=null;
        p->next=temp;
        p->prev=ttemp;
        ttemp->next=p;
        temp->prev=p;

    
}

void disp()
{
temp=first;
while(temp!=null)
{
    cout<< temp->data<<endl;

    temp=temp->next;
}
    }
int main()
{
    init();
    create_first(30);
    addnode(40);
    addnode(70);
    addnode(90);
   // addbefore_first(33);
    addbefore_last(47);
    disp();


}*/



//delete before 
/*struct node
{
    int data;
    node *next,*prev;
};
node *first,*temp,*ttemp,*last ,*p;
void init(){
    first=temp=ttemp=null;
}
void addnode(int val)
{
    temp=first;
    while(temp->next!=null)
    {
         temp=temp->next;
    }
    ttemp=new node;
    
    ttemp->data=val;
    ttemp->next=null;
    ttemp->prev=temp;
    temp->next=ttemp;
   
 

}
void create_first(int val)
{
    first = new node;
    first->data=val;
    first->next=null;
    first->prev=null;

}

void del_before(int val)
{
    temp=first;
    while(temp->data!=val)
    {       
         temp->data=val;
        ttemp=temp->next;

    
    p = ttemp->next;
    temp->next=p;
}
    p->prev=temp;
    ttemp->next=ttemp->prev=null;
    delete ttemp;

}

    


void disp()
{
temp=first;
while(temp!=null)
{
    cout<< temp->data<<endl;

    temp=temp->next;
}
    }
int main()
{
    init();
    create_first(30);
    addnode(40);
    addnode(70);
    addnode(90);
    del_before(40);
    disp();


}*/






//delete after

/*
struct node
{
    int data;
    node *next,*prev;
};
node *first,*temp,*ttemp,*last ,*p;
void init(){
    first=temp=ttemp=null;
}
void addnode(int val)
{
    temp=first;
    while(temp->next!=null)
    {
         temp=temp->next;
    }
    ttemp=new node;
    
    ttemp->data=val;
    ttemp->next=null;
    ttemp->prev=temp;
    temp->next=ttemp;
   
 

}
void create_first(int val)
{
    first = new node;
    first->data=val;
    first->next=null;
    first->prev=null;

}

void del_after(int val)
{
    temp=first;
    while(temp->data!=val)
    {       
         
        temp=temp->next;
    }
    ttemp=temp->next;

    p = ttemp->next;
    temp->next=p;

    p->prev=temp;
    ttemp->next=temp->prev=null;
    delete ttemp;

}

    


void disp()
{
temp=first;
while(temp!=null)
{
    cout<< temp->data<<endl;

    temp=temp->next;
}
    }
int main()
{
    init();
    create_first(30);
    addnode(40);
    addnode(70);
    addnode(90);
    del_after(40);
    disp();


}*/

//swapping first second number 
/*struct node
{
    int data;
    node *next,*prev;
};
node *first,*temp,*ttemp,*last ,*p;
void init(){
    first=temp=ttemp=null;
}
void addnode(int val)
{
    temp=first;
    while(temp->next!=null)
    {
         temp=temp->next;
    }
    ttemp=new node;
    
    ttemp->data=val;
    ttemp->next=null;
    ttemp->prev=temp;
    temp->next=ttemp;
   
 

}
void create_first(int val)
{
    first = new node;
    first->data=val;
    first->next=null;
    first->prev=null;

}
void swap_FS( )
{
    temp=first;
    ttemp=temp->next;
        p = ttemp->next;
 p->prev=temp;
    temp->prev=ttemp;
    temp->next=p;
    ttemp->next=temp;
    ttemp->prev=null;
    first= ttemp;
}
void disp()
{
temp=first;
while(temp!=null)
{
    cout<< temp->data<<endl;

    temp=temp->next;
}
    }
int main()
{
    init();
    create_first(30);
    addnode(40);
    addnode(70);
    addnode(90);
    swap_FS();
    disp();
}
*/



/*struct node
{
    int data;
    node *next,*prev;
};
node *first,*temp,*ttemp,*last ,*p;
void init(){
    first=temp=ttemp=null;
}
void addnode(int val)
{
    temp=first;
    while(temp->next!=null)
    {
         temp=temp->next;
    }
    ttemp=new node;
    
    ttemp->data=val;
    ttemp->next=null;
    ttemp->prev=temp;
    temp->next=ttemp;
   
 

}
void create_first(int val)
{
    first = new node;
    first->data=val;
    first->next=null;
    first->prev=null;

}
void swap_FL( )
{
    temp=first;
p=temp->next;
while(temp->next->next!=null)
{

 temp=temp->next;
}
 ttemp=temp->next;
 ttemp->next=first->next;
 temp->next=first;
 first->next=null;
 first=ttemp;

}
void disp()
{
temp=first;
while(temp!=null)
{
    cout<< temp->data<<endl;

    temp=temp->next;
}
    }
int main()
{
    init();
    create_first(30);
    addnode(40);
    addnode(70);
    addnode(90);
    swap_FL();
    disp();
}*/


































