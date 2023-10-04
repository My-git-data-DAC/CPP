
// Implement a Stack class using C++ templates. Test stack operations on Stack<int>,
// Stack<double> and Stack<Box>.

#include <iostream>
using namespace std;

class box
{
private:
    int length;
    int breadth;

public:
    box() : length(0.0), breadth(0.0)
    {
    }

    box(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    void accept()
    {
        cout << "Enter the Dimensions" << endl;
        cout << "Enter the Length of the box" << endl;
        cin >> this->length;
        cout << "Enter the Breadth of the box" << endl;
        cin >> this->breadth;
    }

    void display()
    {
        cout << "Box Dimensions are :" << endl;
        cout << "Length : " << this->length << endl;
        cout << "Breadth : " << this->breadth << endl;
        cout << "Area of box is  : " << this->breadth * this->length << endl;
    }
};

template <class t>
class stack
{
private:
    int top;
    int size;
    t *arr = new t[size];

public:
    stack() : top(-1), size(5)
    {
    }
    stack(int size)
    {
        this->top = -1;
        if (size != 0)
        {
            this->arr = new t[size];
            this->size = size;
        }
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
        if (this->top == size - 1)
        {
            return true;
        }
        else
            return false;
    }

    void setSize(int size)
    {
        this->size = size;
    }

    int getTop()
    {
        return this->top;
    }

    void push(t value)
    {
        if (isFull() == true)
        {
            cout << "Stack is full..." << endl;
        }
        else
        {
            this->top++;
            this->arr[top] = value;
            // cout << "Pushed value is : " << this->arr[top] << endl;
            // cout << "Pushed value is : " << *this->arr[top]->display() << endl;
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
            //           cout << "Popped values is : " << this->arr[top] << endl;
            this->arr[top] = 0;
            this->top--;
        }
    }
    // void peek()
    // t peek()
    // {
    //     if (isEmpty() == true)
    //     {
    //         cout << "Stack is Empty..." << endl;
    //     }
    //     else
    //     {
    //         cout << "Top value is : " << this->arr[top] << endl;
    //     }
    // }

    t peek()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty..." << endl;
            return nullptr;
        }
        else
        {
            return (this->arr[top]);
        }
    }

    // void printArr()
    t printArr()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty..." << endl;
            return nullptr;
        }
        else
        {
            // int tempTop = this->top;
            // int num = this->top;
            // while (tempTop != -1)
            // {
            //     cout << num-- << " : " << this->arr[tempTop] << endl;
            //     tempTop--;
            // }

            // int tempTop = s1.getTop();
            // int num = s1.getTop();
            // while (tempTop != -1)
            // {
            //     cout << num-- << " : " << this->arr[tempTop] << endl;
            //     tempTop--;
            // }
        }
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
    int choice, size;
    // char val;
    // double val;
    // stack<char> s1;
    // stack<double> s1;

    stack<box *> s1;
    cout << "Enter the size..." << endl;
    cin >> size;
    s1.setSize(size);
    cout << "Stack size : " << size << endl;

    while ((choice = menu()) != EXIT)
    {
        switch (choice)
        {
        case SIZE:
            cout << "Enter the size..." << endl;
            cin >> size;
            s1.setSize(size);
            cout << "Stack size : " << size << endl;
            break;
        case PUSH:
            // cout << "Enter the value to push into stack " << endl;
            //   cin >> val;
            {
                // int len = 0, bre = 0;
                // cout << "Enter the Length " << endl;
                // cin >> len;
                // cout << "Enter the Breadth " << endl;
                // cin >> bre;
                s1.push(new box(1, 2));
            }
            break;
        case POP:
            s1.pop();
            break;
        case PEEK:
            // s1.peek();
            // s1.peek()->display();
            // chatgpt code
            {
                box *peekedBox = s1.peek();
                if (peekedBox)
                {
                    peekedBox->display();
                }
            }
            break;
        case PRINT:
            // s1.printArr();
            // s1.printArr()->display();
            {
                box *printBox = s1.printArr();
                if (printBox)
                {
                    int tempTop = s1.getTop();
                    int num = s1.getTop();
                    while (tempTop != -1)
                    {
                        printBox->display();
                        tempTop--;
                    }
                }
            }
            break;
        case CHECK_SIZE:
            cout << "Stack size : " << size << endl;
            break;
        default:
            cout << "Wrong Choice ..." << endl;
            break;
        }
    }
}