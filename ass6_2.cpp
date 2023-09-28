#include<iostream>
using namespace std;
class Employee
{
  private :
  int id;
  float sal;

  public:
  Employee()
  {
   this->id = 0;
   this->sal= 0.0;

  }
  Employee(int id, float sal)
  {
    this->id= id;
    this->sal = sal;


  }
  int get_id()
  {
  return this->id;

  }
  void set_id(int id)
  {
    this->id = id;

  }
  float get_sal()
  {
    return this->sal;

  }
  float set_sal(float sal)
  {
    this->sal = sal;

  }
              
  void display()
  {

    cout<<"Inside Employee"<<endl;
  
      cout<<"Employee id..."<< id<<endl;
      cout<<"salary is"<<sal<<endl;
     
  }
  void accept()
  {
   cout<<"Enter your id";
   cin>>id;
   cout<<"Enter the salary";
   cin>>sal;


  }

};
class Manager : virtual public Employee
{
private :
float bonus;

public:

Manager()
{

   this->bonus = 0.0;

}
Manager(int id, float sal , float bonus)
{

 this-> bonus = bonus;

}
float get_bonus()
{
   return this->bonus;

}
void set_bonus(float)
{

   this->bonus = bonus;

}


protected:
void accept_manager()
{
 //Employee::accept();
 cout<<"Bonus of manager    ";
 cin>>bonus;


}
void display_manager()
{

//Employee:: display();
cout<<"display_Bonus of Manager";
}


};

class Salesman : virtual public Employee
{
    private :
    float comm;

    public:
    Salesman()
    {


    }
   
    
    
   void display_salesman()
   {
    Employee :: display();
  cout<<"Enter the commission"<<comm<<endl;

   }
   void accept_salesman()
   {
Employee :: accept();
cout<<"Enter the commission";
cin>>comm;
   }
  

};
class Sales_manager : public Salesman,public Manager
{
    public:
    Sales_manager()
    {
      

    }
    Sales_manager(int, float,float,float)
    {

    }
    void display()
    {
      Manager::display_manager();
      Salesman::display_salesman();
      
     cout<<"inside sales_manager"<<endl;

    }
    void accept()
    {
     Manager :: accept_manager();
     Salesman:: accept_salesman();
     

    }
  

};
int main()
{

Sales_manager sm;
sm.accept();
sm.display();


return 0;

}
