#include<iostream>
using namespace std;
//create the node type class
class node
{       public:
        int data;
        node*next;
};

//create the queue class
class queue
{
        public:
        node*head;
        node*tail;
        queue()
        {
                head=NULL;
                tail=NULL;
        }

//************PUSHING***********
void push(int value)
{
        node*temp=new node;
        temp->data=value;
        if(head==NULL)
        {
           head=temp;     
        }
        else
        tail->next=temp;
        tail=temp;
        tail->next=NULL;
}

//***********POPING ************
void pop()
{
        node*temp;
        temp=head;
        head=temp->next;
        delete temp;
        cout<<endl;
}

//***********DISPLAY*************
void display()
{ 
        cout<<"THE ELEMENTS OF THE QUEUE ARE : ";
        node*current=head;
        while(current!=NULL)
        {
          cout<<current->data<<"->";
          current=current->next;
        }
  cout<<endl;
}

//***********ISEMPETY*************
void isempty()
{
        if (head==NULL)
        {
         cout<<"The queue is empty.";
        }
        else 
        {
        cout<<"The queue contains the elements.";
        }
        cout<<endl;
}

//************SIZE************
void size()
{
        int i=0;
        node*current=head;
        while(current!=NULL)
        {
                i++;
                current=current->next;
        }
        cout<<"The no elements in queue is :  "<<i<<endl;
}
};

//MAIN FUNC..
int main ()
{
        queue q;
        for(int i=20;i<36;i++)
        {
                q.push(i);
        }
        q.display();
        q.isempty();
        q.size();
        
        q.pop();
        q.display();
        q.isempty();
        q.size();
        
        q.pop();
        q.display();
        q.isempty();
        q.size();
        return 0;
}





