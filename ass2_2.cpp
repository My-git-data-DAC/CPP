

#include <iostream>
using namespace std;

class Address
{
private:
    string building;
    string street;
    string city;
    int pincode;

public:
    Address()
    {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pincode = pincode;
    }
    void acceptAddress()
    {
        cout << "Enter building name: ";
        cin >> this->building;
        cout << "Enter Street Name: ";
        cin >> this->street;
        cout << "Enter your city name: ";
        cin >> this->city;
        cout << "Enter the Address pincode: ";
        cin >> this->pincode;
    }
    void displayAddress()
    {
        cout << "Address: ";
        cout << this->building
             << "," << this->street << "," << this->city << "," << this->pincode << endl;
    }

    string get_building()
    {
        return this->building;
    }
    string get_street()
    {
        return this->street;
    }
    string get_city()
    {
        return this->city = city;
    }
    int get_pin()
    {
        return this->pincode;
    }
    string set_building(string building)
    {
        return this->building = building;
    }
    string set_street(string street)
    {
        return this->street = street;
    }

    string set_city(string city)
    {
        return this->city = city;
    }
    int set_pin(int pincode)
    {
        return this->pincode = pincode;
    }
};

int main()
{
    Address a1;
    a1.acceptAddress();
    a1.displayAddress();
    cout << a1.get_building()<<", ";
    cout << a1.get_city()<<", ";
    cout << a1.get_pin()<<", ";
    cout << a1.get_street()<<"."<<endl;
    a1.set_building("GT building");
    a1.set_city("Bhilai");
    a1.set_street("Nagar Nigam Road");
    a1.set_pin(490021);
    cout<< "New Address: ";
    cout << a1.get_building()<<", ";
    cout << a1.get_city()<<", ";
    cout << a1.get_pin()<<", ";
    cout << a1.get_street()<<"."<<endl;

    return 0;
}
