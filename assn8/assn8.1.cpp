
// Q1. Write a class Distance to hold feet and inches. Overload operator + as member function and ==
// operator as friend function. Also, overload ++ operator (to increment inches) as member function
// and -- operator as friend function. Overload << and >> operators to accept and display Distance.

#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    int inch;

public:
    Distance() : feet(0), inch(0)
    {
    }

    Distance(int feet, int inch)
    {
        this->feet = feet;
        this->inch = inch;
    }

    void setFeet(int feet)
    {
        this->feet = feet;
    }

    int getFeet()
    {
        return this->feet;
    }

    void setinch(int inch)
    {
        this->inch = inch;
    }

    int getinch()
    {
        return this->inch;
    }

    friend bool operator==(Distance d1, Distance d2);
    friend Distance operator--(Distance &d5);
    friend void operator<<(ostream &out, Distance p6);
    friend void operator>>(istream &in, Distance &p6);

    Distance operator+(Distance p2)
    {
        Distance resultt;
        resultt.feet = this->feet + p2.feet;
        resultt.inch = this->inch + p2.inch;

        return resultt;
    }
    Distance operator++(int)
    {
        inch++;
        feet++;

        return *this;
    }
    void display()
    {
        cout << "Feet :" << this->feet << endl;
        cout << "Inch :" << this->inch << endl;
    }
};

bool operator==(Distance d1, Distance d2)
{
    return d1.feet == d2.feet && d1.inch == d2.inch;
}

Distance operator--(Distance &d5)
{

    d5.inch--;
    d5.feet--;

    return d5;
}

void operator<<(ostream &out, Distance p6)
{
    out << "Height : " << p6.feet << "'" << p6.inch << endl;
}

void operator>>(istream &in, Distance &p6)
{
    cout << "Enter the Feet :";
    in >> p6.feet;
    cout << "Enter the Inch :";
    in >> p6.inch;
}

int main()
{
    bool result;
    Distance p1(3, 8);
    Distance p2(5, 3);
    cout << "== Operator" << endl;
    cout << "Result:" << result << endl;
    result = p1 == p2;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "+ Operator" << endl;
    Distance resultt = p1 + p2;
    cout << "P1" << endl;
    p1.display();
    cout << "P2" << endl;
    p2.display();
    cout << "RESULT :" << endl;
    resultt.display();
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "++ Operator" << endl;
    Distance p4(14, 10);
    cout << "before ++ Operator" << endl;
    p4.display();
    p4++;
    cout << "before ++ Operator" << endl;
    p4.display();
    cout << endl;
    cout << endl;
    cout << endl;

    Distance p5(14, 10);
    cout << "before -- Operator" << endl;
    p5.display();
    --p5;
    cout << "before -- Operator" << endl;
    p5.display();
    cout << endl;
    cout << endl;
    cout << endl;
    Distance p6;

    cout << ">> operator" << endl;
    cin >> p6;
    cout << endl;
    cout << endl;
    cout << "<< operator" << endl;
    cout << p6;
}