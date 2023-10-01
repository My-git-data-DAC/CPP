#include<iostream>
#define SIZE 5
using namespace std;

class Stack
{
    private :
    int top;
    int size;
    int *arr;

    public:
    
    Stack(int size)
    {
        this->top = 0;
        if(size > 0) 
        {
            this->arr = new int[size];
            this->size = size;

        }
        else
        {
            this->arr = new int[SIZE];
            this->size = 5;
        }
    }
    void push(int a)
    {
        if(this->top == this->size)
        cout<<"Stack is full."<<endl;
        else
        {
            this->arr[top] = a;
            this->top++;
        }
    }
    void pop()
    {
        if(this->top == 0) 
        cout<<"Stack is empty."<<endl;
        else
        {
            this->arr[top-1] = 0;
            top--;
        }
    }
    void peek()
    {
        if(this->top == 0) 
        cout<<"Stack is empty."<<endl;
        else
        cout<<"Peek is : "<<this->arr[top-1]<<endl;
    }
    void isEmpty()
    {
        if(top == 0)
        cout<<"Stack is empty."<<endl;
        else
        cout<<"Stack is not empty."<<endl;
    }
    void isFull()
    {
        if(this->top == this->size)
        cout<<"Stack is full."<<endl;
        else
        cout<<"Stack is not full."<<endl;
    }
    void print()
    {
        if(top == 0)
        cout<<"Stack is empty."<<endl;
        else
        {
            cout<<"Values are : "<<endl;
            for(int i = this->top-1; i>=0 ;i--)
            cout<<arr[i]<<endl;
        }
        cout<<endl;
    }

    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    int size;
    cout<<"Enter the size of stack : ";
    cin>>size;

    Stack s1(size);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.pop();
    s1.push(7);
    s1.push(8);

    s1.isEmpty();
    s1.isFull();
    s1.peek();
    s1.print();
}