#include<iostream>
using namespace std;

class Cylinder
{
  private :
  double radius;
  double height;
  double volume;
  public:
  Cylinder()
  {
    this->radius = 0;
    this->height = 0;
    this->volume = 0;

  }
  void calculate()
  {
    this->volume = 3.14*radius*radius*height;
  }

  Cylinder(double radius, double height)
  {
     this->radius = radius;
     this->height = height;

  }

  void accept()
  {
cout<<"Enter new radius";
cin>>radius;
cout<<"Enter new height";
cin>>height;


  }
  double getRadius()
  {
     return radius;
  }
  void setRadius(double radius)
  {
         this->radius=radius;

  }
  int getHeight()
  {
     return height;
    
  }
  
  void setHeight(double height)
  {
     this->height = height;

  }
  double getVolume()
  {
      return this->volume;
  }
  void printvolume()
  {
cout<<"The Volume of Cylinder is"<<this->volume<<endl;
  }
};
int menu()
{
int choice;
cout<<"****************"<<endl;
cout<<"0. Exit"<<endl;
cout<<"1. Accept "<< endl;
cout<<"2. Calculate "<< endl;
cout<<"3. Display "<<endl;
cout<<"Enter your choice = ";
cin>>choice;
cout<<"****************"<<endl;
return choice; 

}

int main()
{
int choice;
Cylinder c(11,12);

while((choice =menu())!=0)
{
     switch(choice)
    {
   case 1: 
   c.accept();
            break;
   case 2 :  
   c.calculate();
   break;
   case 3 : 
   c.printvolume();
      break;

  default :
         cout<<"wrong choice";
      }
      
  }
cout<<"thanq for using"<<endl;
return 0;


}