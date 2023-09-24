#include<iostream>
using namespace std;

class Volume
{

 private :
 int length;
 int width;
 int height;

public:

Volume()
{
    this->length=0000;
    this->width = 000;
    this-> height = 000;
    
}
void accept()
{

cout<<"Enter the length";
cin>>this->length;
cout<<"Enter the width";
cin>>this->width;
cout<<"Enter the height";
cin>>this->height;

}
void display()
{
cout<<"The length is"<<length<<endl;
cout<<"The width is"<<width<<endl;
cout<<"The height is"<<height<<endl;
}
void calculation()
{
int volume = length*width*height;
cout<<"The volume of the box is"<<volume<<endl;

}

};

int main()
{

int choice;
cout<<"Given options are"<<endl;
cout<<"1.Enter data and check calculation"<<endl;
cout<<"2.Display"<<endl;
cin>>choice;
Volume v;

switch(choice)
   {

   
    case 1 : v.accept();
             v.calculation();
             break;
            
        
   case 2 : v.display();      
         
    case 3 : default:
          cout<<"EXIT";
          break;

   }
   

}