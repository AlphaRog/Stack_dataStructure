#include <iostream>

using namespace std;

class stck
{

private:
    int maxn;
    int top;
    int *arr;

public:
    stck(int s);
    bool isFull();
    bool isEmpty();
    void push(int x);
    int pop();
    int peek();

    void display();

};

stck::stck(int s)
{

   s=maxn;
   arr=new int[s];
   top=-1;

}

bool stck::isFull()
{

    if(top==maxn-1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool stck::isEmpty()
{

    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

void stck::push(int x)
{

    if(isFull())
    {
        cout<<"Stack is Full"<<endl;
    }
    else
    {

       top++;
       arr[top]=x;

    }

}

int stck::pop()
{

    if(isEmpty())
    {
        cout<<"Stack is empty."<<endl;
        return -999;
    }
    else
    {

        int temp=arr[top];
        top--;
        return temp;

    }

}

int stck::peek()
{

    if(isEmpty())
    {
        cout<<"Stack Is empty"<<endl;
    }
    else
    {
     return arr[top];
    }

}

void stck::display()
{

    int n=sizeof(arr)/sizeof(arr[0]);

    for(int x=n;x>-1;x--)
    {
        cout<<arr[x]<<endl;
    }

}

int main()
{

    stck s1(6);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    cout<<s1.pop()<<endl;
    cout<<s1.peek()<<endl;
    s1.push(40);
    s1.push(70);
    s1.push(800);
    cout<<s1.peek()<<endl;
    s1.display();

    return 0;
}
