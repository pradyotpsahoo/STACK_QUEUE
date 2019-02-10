#include<iostream>
using namespace std;

//create the node type class 
class node
{   public:
    int data ;
    node*next;
};

//craeat the stack class 
class stack
{
    public:
    node*top;
    stack()
        {
             top=NULL; 
        }
        
//*************PUSHING*****************  
void push (int value )
{
    node*temp=new node;
    temp->data=value;
    if (top==NULL)
    {
        top=temp;
        top->next=NULL;
    }
    else
    {
        temp->next=top;
        top=temp;
    }
}

//****************DISPLAY**************
void display()
{
    node *current=top;
    while (current!=NULL)
    {
        cout <<current->data<<"->";
        current=current->next;
    }
    cout <<endl;
}

//****************POPING*************** 
void pop()
{
    node*temp;
    temp=top;
    top=temp->next;
    delete temp;
}

//***********SIZE OF STACK************
void size ()
{
    node*current=top;
    int i=0;
    while (current!=NULL)
    {
    i++;
    current=current->next;
    }
    cout << "The size of the stack is : "<<i<<endl;
} 

//***********TOP OF STACK*************
void topp()
{
    cout <<"The top element is : "<<top->data<<endl;
}

//**********ISEMPTY*******************
void isempty()
{
    node *current=top;
    if (current==NULL)
    {
        cout<<"The data is empty"<<endl;
    }
    else
    cout<<"it contains element."<<endl;
    cout <<endl;
}
};

//*********MAIN FUNCTION***************
int main ()
{
    stack s;
    
    for (int i=1;i<12;i++)
    {
        s.push(i);
    }
    s.display();
    s.size();
    s.topp();
    s.isempty();
    
    s.pop();
    s.display();
    s.size();
    s.topp();
    s.isempty();
    
    s.push(999);
    s.display();
    s.size();
    s.topp();
    s.isempty();
    return 0;
}