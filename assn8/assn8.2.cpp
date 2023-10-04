
// Q2. Modify Stack class from previous assignment to implement copy constructor and overload = operator.

#include <iostream>
using namespace std;

class stack
{
private:
    int top;
    int size;
    int *arr = new int[size];

public:
    stack() : top(-1), size(5)
    {
    }

    stack(int size)
    {
        this->top = -1;
        if (size != 0)
        {
            this->arr = new int[size];
            this->size = size;
        }
    }

    void setSize(int size)
    {
        this->size = size;
    }

    bool isEmpty()
    {
        if (this->top == -1)
        {
            return true;
        }
        else
            return false;
    }

    bool isFull()
    {
        if (this->top == (this->size) - 1)
        {
            return true;
        }
        else
            return false;
    }

    void push(int val)
    {
        if (isFull() == true)
        {
            cout << "Stack is full..." << endl;
        }
        else
        {
            this->top++;
            this->arr[top] = val;
            cout << "Pushed value is : " << this->arr[top] << endl;
        }
    }

    void pop()
    {
        if (isEmpty() == true)
        {
            cout << "Stack is Empty..." << endl;
        }
        else
        {
            cout << "Popped value is : " << this->arr[top] << endl;
            this->arr[top] = 0;
            this->top--;
        }
    }

    void peek()
    {
        if (isEmpty() == true)
        {
            cout << "Stack is Empty..." << endl;
        }
        else
        {
            cout << "Top value is : " << this->arr[top] << endl;
        }
    }

    void printArr()
    {
        int val = this->top;
        int num = this->top;
        while (val != -1)
        {
            cout << num-- << " : " << this->arr[val] << endl;
            val--;
        }
    }

    // copy ctor
    stack(stack &s1)
    {
        this->arr = new int[size];
        this->size = s1.size;
        this->top = s1.top;
        for (int i = 0; i < top; i++)
        {
            this->arr[i] = s1.arr[i];
        }
    }

    stack operator==(stack d1)
    {
        if (this == &d1)
            return *this;
        delete[] this->arr;
        this->size = d1.size;
        this->top = d1.top;
        this->arr = new int[size];
        for (int i = 0; i <= top; i++)
        {
            this->arr[i] = d1.arr[i];
        }

        return *this;
    }

    ~stack()
    {
        delete[] arr;
    }
};

enum Emenu
{
    EXIT = 0,
    SIZE = 1,
    PUSH = 2,
    POP = 3,
    PEEK = 4,
    PRINT = 5,
    CHECK_SIZE = 6

};
Emenu menu()
{
    int choice;
    cout << "-------------------------" << endl;
    cout << "Enter choice" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. ENTER SIZE OF STACK" << endl;
    cout << "2. PUSH" << endl;
    cout << "3. POP" << endl;
    cout << "4. PEEK" << endl;
    cout << "5. PRINT STACK" << endl;
    cout << "6. CHECK THE SIZE OF STACK" << endl;
    cin >> choice;
    return Emenu(choice);
}

int main()
{
    int choice, size, val;
    stack s1;
    cout << "Enter the size..." << endl;
    cin >> size;
    s1.setSize(size);
    cout << "Stack size : " << size << endl;

    // while ((choice = menu()) != EXIT)
    // {
    //     switch (choice)
    //     {
    //     case SIZE:
    //         cout << "Enter the size..." << endl;
    //         cin >> size;
    //         s1.setSize(size);
    //         cout << "Stack size : " << size << endl;
    //         break;
    //     case PUSH:
    //         cout << "Enter the value to push into stack " << size << endl;
    //         cin >> val;
    //         s1.push(val);
    //         break;
    //     case POP:
    //         s1.pop();
    //         break;
    //     case PEEK:
    //         s1.peek();
    //         break;
    //     case PRINT:
    //         s1.printArr();
    //         break;
    //     case CHECK_SIZE:
    //         cout << "Stack size : " << size << endl;
    //         break;
    //     default:
    //         cout << "Wrong Choice ..." << endl;
    //         break;
    //     }
    // }
    s1.push(15);
    s1.push(14);
    s1.push(13);
    s1.push(12);
    // s1.pop();
    // s1.pop();
    s1.push(111);
    // s1.peek();
    //  s1.printArr();
    cout << "after copy" << endl;
    stack s2 = s1;
    s2.printArr();

    cout << endl;
    cout << endl;
    cout << endl;
    cout << "after assignment " << endl;
    stack s3;
    s3 = s1;
    s3.printArr();
}