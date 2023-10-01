#include <iostream>
using namespace std;
class TIME{
    int *h;
    int *m,*s;
    public:
TIME(){
this->h=0;
this->m=0;
this->s=0;

}
TIME(int h,int m,int s){
this->h= new int;
this->m= new int;
this->s= new int;
*this->h = h;
*this->m= m;
*this->s=s;

}
int getHour(){
    return *h;
}
int getMinute(){
    return *m;
}
int getSeconds(){
    return *s;
}
void printTime(){
    cout<<"the time is-->"<<*h<<" : "<<*m<<" : "<<*s<<endl;
    
}
void setHour(int h){
    *this->h=h;
}
void setMinute(int m){
    *this->m=m;
}
void setSeconds(int s){
    *this->s=s;

}
~TIME(){
    delete this->h;
    delete this->m;
    delete s;
    h,m,s= NULL;
}
};
int main(){
    TIME *arr[5];
    arr[0]=new TIME (20,21,20);
    arr[1]=new TIME (21,33,23);
    arr[2]=new TIME (22,43,13);
    arr[3]=new TIME (23,23,33);
    arr[4]=new TIME (12,10,45);
    for(int i=0;i<5;i++){
        cout<<"dates are:"<<endl;
        arr[i]->printTime();
    }
    for (int i=0;i<5;i++)
    {
        delete arr[i];
    }
    
    return 99;
}