#include<iostream>
#include<string.h>
using namespace std;
class Student
{
  private:  
   int roll_no;
   string name;
  int marks;

  public:
  void initStudent()
  {
  roll_no = 2020;
  name = "Kanika";
  marks = 80;
 

  }

void acceptStudentFromConsole()
{
 cout<<"Enter the name ";
 cin>>name;
 cout<<"Enter the roll no. ";
 cin>>roll_no;
 cout<<"Enter the Marks";
 cin>>marks;


}


void printStudentOnConsole()
{

cout<<"Enter the name , roll no, marks "<<name<<roll_no<<marks<<endl;

}



};
int main()
{

Student s;
s.initStudent();
s.printStudentOnConsole();
s.acceptStudentFromConsole();
int choice;
cout<<"Enter your choice"<<endl<<"1. to accept details"<<endl<<"2. to print details";
cin>>choice;
switch(choice)
{
case 1 :  s.acceptStudentFromConsole();
           break;
case 2 :  s.printStudentOnConsole();
          break;
case 3 :  default :
         cout<< "incorrect choice";

}

}