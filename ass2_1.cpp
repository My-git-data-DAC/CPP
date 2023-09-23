#include<iostream>
#include<string.h>
using namespace std;


 namespace NStudent
{
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

          cout<<"Enter the name     "<< "roll no  "<< "marks    "<<name  <<" "<<roll_no <<" "<<marks<<endl;

        }



        };

}
int main()
{
  NStudent::Student s;
  s.initStudent();
  s.printStudentOnConsole();
  s.acceptStudentFromConsole();
  s.printStudentOnConsole();


}
