#include <iostream>
using namespace std;
struct Date
{
  int dd;
  int mm;
  int yy;
  bool status;

  void init(){
    dd=02;
    mm=04;
    yy=2024;
        cout << "\n the init date  " << dd <<"-"<< mm<<"-" << yy<<endl;

  }

  void acceptdateFromConsole()
  {
    cout << "Enter the dd ,mm, yy "<<endl;;
    cin >> dd >> mm >> yy;
  }

  void printDateOnConsole()
   {
    cout << "the entered date  " << dd <<"-"<< mm<<"-" << yy<<endl;
  } 
  
  bool isleapyear()
  {
    
if((yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0))
  {
        return true;
 } 
 else 
    {
        return false;
    }

  }
  };
  


int main()
{
  struct Date d;
    d.init();
  d.acceptdateFromConsole();
  d.printDateOnConsole();
  
  if(d.isleapyear())
  cout<<"year is a leap year";
  else 
  cout<<"not a leap year";
  return 0;

}