
// Q3. Using the Q1 from assignment 6. Create an array of 10 employees. Provide menu driven code
// for the functionalities: Insted of char[] use string datatype
// 1. Accept Employee
// 2. Display the count of all employees with respect to
// designation
// 3. Display respective designation employees

#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    float sal;
    string designation;

public:
    employee() : id(0), sal(0.0)
    {
    }

    employee(int id, float sal)
    {

        this->id = id;
        this->sal = sal;
    }

    void setId(int id)
    {
        this->id = id;
    }

    void setSal(float sal)
    {
        this->sal = sal;
    }

    int getId()
    {
        return this->id;
    }

    float getSal()
    {
        return this->sal;
    }

    void setDesignation(string designation)
    {
        this->designation = designation;
    }

    string getDesignation()
    {
        return this->designation;
    }
    virtual void accept()
    {
        cout << "enter the ID" << endl;
        cin >> this->id;

        cout << "enter the Salary" << endl;
        cin >> this->sal;
    }

    virtual void display()
    {
        cout << "ID : " << this->id << endl;
        cout << "SALARY : " << this->sal << endl;
    }
};

class Manager : virtual public employee
{
private:
    float bonus;

protected:
    void accept_Manager()
    {

        cout << "enter the Bonus" << endl;
        cin >> this->bonus;
    }
    void display_Manager()
    {

        cout << "Bonus : " << this->bonus << endl;
    }

public:
    Manager() : bonus(0.0)
    {
        setDesignation("MANAGER");
    }

    Manager(float bonus)
    {
        this->bonus = bonus;
    }

    void setBonus(float bonus)
    {
        this->bonus = bonus;
    }

    float getBonus()
    {
        return this->bonus;
    }

    void accept()
    {
        employee::accept();
        cout << "enter the Bonus" << endl;
        cin >> this->bonus;
    }
    void display()
    {
        cout << "MANAGER DETAILS :" << endl;
        employee::display();
        cout << "Bonus : " << this->bonus << endl;
    }
};

class salesman : virtual public employee
{
private:
    float comm;

protected:
    void accept_Salesman()
    {

        cout << "enter the Commission" << endl;
        cin >> this->comm;
    }
    void display_Salesman()
    {

        cout << "Commission : " << this->comm << endl;
    }

public:
    salesman() : comm(0.0)
    {

        setDesignation("SALESMAN");
    }

    salesman(float comm)
    {

        this->comm = comm;
    }

    void setComm(float comm)
    {
        this->comm = comm;
    }

    float getComm()
    {
        return this->comm;
    }

    void accept()
    {
        employee::accept();
        cout << "enter the Commission" << endl;
        cin >> this->comm;
    }
    void display()
    {
        cout << "SALESMAN DETAILS :" << endl;
        employee::display();
        cout << "Commission : " << this->comm << endl;
    }
};

class Sales_Manager : public Manager, public salesman
{

public:
    Sales_Manager()
    {
        employee();
        Manager();
        salesman();
        setDesignation("SALESMANAGER");
    }
    Sales_Manager(int id, float sal, float bonus, float comm) : employee(id, sal), Manager(bonus), salesman(comm)
    {
    }
    void accept()
    {
        employee::accept();
        Manager::accept_Manager();
        salesman::accept_Salesman();
    }

    void display()
    {
        cout << "SALES_MANAGER DETAILS :" << endl;
        employee::display();
        Manager::display_Manager();
        salesman::display_Salesman();
    }
};

int mainMenu()
{
    int choice1;
    cout << "--------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Accept Employee " << endl;
    cout << "2. Display the count of all employees with respect to designation" << endl;
    cout << "3. Display respective designation employees" << endl;
    cout << "Enter Your Chocie = ";
    cin >> choice1;
    cout << "--------------------" << endl;
    return choice1;
}

int empAcptMenu()
{
    int choice2;
    cout << "--------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Add Manager" << endl;
    cout << "2. Add Salesman" << endl;
    cout << "3. Add Salesmanager" << endl;
    cout << "Enter Your Chocie = ";
    cin >> choice2;
    cout << "--------------------" << endl;
    return choice2;
}

void displayCount(employee **arr, int index, string designation)
{
    float mSum = 0, sSum = 0, smSum = 0;
    for (int i = 0; i < index; i++)
    {
        if (arr[i]->getDesignation() == "MANAGER")
        {
            mSum += 1;
        }
        else if (arr[i]->getDesignation() == "SALESMAN")
        {
            sSum += 1;
            ;
        }

        else
        {
            smSum += 1;
        }
    }
    cout << "Number of MANAGERS : " << mSum << endl;
    cout << "Number of SALESMAN : " << sSum << endl;
    cout << "Number of SALESMANAGERS : " << smSum << endl;
    cout << "Number of All employees : " << smSum + sSum + mSum << endl;
}

void displayDesignation(employee **arr, int index, string designation)
{
    for (int i = 0; i < index; i++)
    {
        if (arr[i]->getDesignation() == "MANAGER")
        {
            cout << arr[i]->getId() << " : " << arr[i]->getDesignation() << endl;
        }

        else if (arr[i]->getDesignation() == "SALESMAN")
        {
            cout << arr[i]->getId() << " : " << arr[i]->getDesignation() << endl;
        }

        else
        {
            cout << arr[i]->getId() << " : " << arr[i]->getDesignation() << endl;
        }
    }
}
int main()
{

    int choice1, choice2;
    employee *arr[10];
    int index = 0;

    while ((choice1 = mainMenu()) != 0)
    {
        switch (choice1)
        {
        case 1:
            while ((choice2 = empAcptMenu()) != 0)
            {
                switch (choice2)
                {
                case 1:
                    if (index < 10)
                    {
                        arr[index] = new Manager();
                        arr[index]->accept();
                        index++;
                    }
                    else
                        cout << "Employee limit has exceeded, Cannot add the more Employee.." << endl;
                    break;
                case 2:
                    if (index < 10)
                    {
                        arr[index] = new salesman();
                        arr[index]->accept();
                        index++;
                    }
                    else
                        cout << "Employee limit has exceeded, Cannot add the more Employee.." << endl;

                    break;

                case 3:
                    if (index < 10)
                    {
                        arr[index] = new Sales_Manager();
                        arr[index]->accept();
                        index++;
                    }
                    else
                        cout << "Employee limit has exceeded, Cannot add the more Employee.." << endl;

                    break;

                default:
                    cout << "Wrong Choice ..." << endl;
                    break;
                }
            }
            break;
        case 2:
            int i;
            displayCount(arr, index, arr[i]->getDesignation());
            break;
        case 3:
            // for (int i = 0; i < index; i++)
            // {
            //     arr[i]->display();
            //     cout << endl;
            //     cout << endl;
            // }
            displayDesignation(arr, index, arr[i]->getDesignation());
            break;
        default:
            cout << "Wrong Choice ..." << endl;
            break;
        }
    }
    for (int i = 0; i < index; i++)
        delete arr[i];

    cout << "Thank you for using our app..." << endl;
    return 0;
}
