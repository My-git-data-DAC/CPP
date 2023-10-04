
// Write a user defined function factorial() that calculates factorial of given number and it throws
// exception if number entered by user is negative.

#include <iostream>

using namespace std;
class factorial
{
private:
    int x;

public:
    factorial() : x(0)
    {
    }

    factorial(int x)
    {
        this->x = x;
    }
    int get()

    {
        return x;
    }

    int fact()
    {
        int result = 1;
        if (this->x <= 0)
            throw 1;

        else
        {
            for (int i = 1; i <= this->x; ++i)
            {
                result *= i;
            }
            cout << "Factorial of " << this->x << " = " << result;
        }
        return result;
    }
};

int main()
{
    factorial f1(0);

    try
    {
        f1.fact();
    }
    catch (int error)
    {
        cout << "Entering 0 or negative elements are not allowed" << endl;
    }
    cout << endl;
}