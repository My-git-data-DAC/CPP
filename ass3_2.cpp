#include <iostream>
using namespace std;
class Tollbooth
{
private:
    int TotalCars;
    double money;

public:
    Tollbooth()
    {
       this->TotalCars = 0;
       this->money = 0;

    }
    void payingCar()
    {

        TotalCars++;
        money +=0.50;
    }

    void nopayCar()
    {
        TotalCars++;
    }
    // void accept()
    // {

    //      cout<<"Enter no. of paying cars";
    //      cin>>TotalCars;
    //      cout<<"Enter no. of NO PAYING cars";
    //      cin>>TotalCars;
    // }

    void printonConsole()
    {
        cout << "amt collected" <<money<<endl;
        cout << "total cars" <<TotalCars<<endl;
        cout<<"Total cars paid money"<<money/0.5<<endl;
        cout<<"Total cars paid no money"<<TotalCars-(money/0.5)<<endl;

        

        
    }
};
int menu()
{
  int choice;
  cout<<"0.EXIT"<<endl;
  cout<<"1. Car passed given money "<<endl;
  cout<<"2. Car passed given no money   "<<endl;
  cout<<"3   Display Details "<<endl;   
  cout<<"Enter Your Choice";
  cin>>choice;
   return choice;
}
int main()
{  
    int choice;

    Tollbooth t;
    // t.printonConsole();
while((choice=menu())!=0)
     {
        switch(choice)
        {

        case 1 :
              t.payingCar();
                 break;
       case 2 : t.nopayCar();

              break;
      case 3 : t.printonConsole();
            break;

         default : cout<<" Wrong Entry";
         break;




        }

     }
cout<<"Thanq";
return 0;

}