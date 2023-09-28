#include<iostream>
using namespace std;

class Date
{
  private :
  int day;
  int month;
  int year;

  public:
  Date()
  {
   this->day = 0;
   this->month = 0;
   this->year = 0;


  }
  Date(int day, int month, int year)
  {
   this->day= day;
   this->month = month;
   this->year = year;

  }
  int get_day()
  {
    return this->day;

  }
  void set_day(int day)
  {
   
   this->day = day ;

  }
  int get_month()
  {
   return this->month;

  }
  void set_month(int month)
  {
    this->month = month;

  }
  int get_year()
  {
   return this->year;

  }
  void set_year(int year)
  {
  
  this->year = year;
 

  }
  void display()
  {
   cout<<day<<"/"<<month<<"/"<<year<<endl;

  }
  void accept()
  {
  cout<< "Enter the day" ;
  cin>>day;
  cout<<"Enter the month";
  cin>>month;
  cout<<"Enter the year";
  cin>>year;

  }
  bool isleapyear()
  {
if((year%4==0 && year%100 != 0) || (year%400==0))
    return true;
    else
    return false;
  }

};
class Employee
{
    
private:
int id;
float sal;
string dept;
Date join;

public:
Employee()
{
  this->id = 0;
  this->sal = 0.0;
  this->dept = " ";

}
Employee(int id, float sal, string dept, int day, int month, int year): join( day, month, year)
{
   this->id = id;
   this->sal=sal;
   this->dept= dept;

}
int get_id()
{
   return this->id;
}
void set_id(int id)
{
  this->id  = id;

}
float get_sal()
{
 return this->sal;

}
void set_sal(float sal)
{
 this->sal = sal;

}
string get_dept()
{
  return this->dept;

}
void set_dept(string dept)
{
  this->dept = dept;

}
Date get_join()
{
  return this->join;

}
void set_join(Date join)
{
this->join = join;

}
void display()
{
 cout<<"The salary is.."<<sal<<endl;
 cout<<"The dept name is..."<<dept<<endl;
 cout<<"The id is..."<<id<<endl;
 cout<<"The Date of Joining is  : ";
 join.display(); 

}
void accept()
{
cout<<"Enter salary";
 cin>>sal;
 cout<<"Enter dept name";
 cin>>dept;
 cout<<"Enter id";
 cin>>id;
 cout<<"Enter Date of Joining...."<<endl;
 join.accept();

}

};
class Person
{
private :
string name;
string addre;
Date dob;

public:
Person()
{
  this->name = "XXX ";
  this->addre = "YYY";
  

}
Person(string name , string addre, int day, int month, int year):dob(day,month,year)
{
 this-> name = name;
 this->addre = addre;
}
string get_name()
{
 return name;

}
void set_name(string name )
{
   this->name = name;

}
string get_addr()
{

 return this->addre;

}
void set_addr(string addre)
{
 this->addre = addre;

}
Date get_dob()
{
 return this->dob;

}
void set_dob(Date)
{

this->dob= dob;

}
void display()
{
cout<<"Your name is"<<name<<endl;
cout<<"Your Address is"<<addre<<endl;
cout<<"Your DATE of BIRTH is......";
dob.display();

}
void accept()
{
cout<<"Enter your name";
cin>>name;
cout<<"Enter your address";
cin>>addre;
cout<<"Enter Birth Date...."<< endl;
dob.accept();

}


};
int main()
{
Employee e;
e.accept();
e.display();

Person p;
p.accept();
p.display();



}
