// WAP to define a class Time that has 3 data members for hours, minutes and second. Include member functions:
//1. Void getTime()-to input time
//2. Void sum(time,time)- to add 2 different time
//3. void display()- to display the the resultant time

#include<iostream>
using namespace std;

class Time{
    public :
    int hours,min ,second;
     
    void getTime(){
        cout<<"Enter time in hours, min, second "<<endl;
        cin>>hours>>min>>second;
    }
    Time sum(Time time1,Time  time2){
            Time sum;
            sum.hours=time1.hours+time2.hours;
            sum.min=time1.min+time2.min;
            sum.second=time1.second+time2.second;
            return sum;
    }
    void display(){
        cout<<"hour="<<hours<<endl<<"minutes="<<min<<endl<<"second="<<second<<endl;
    }
}; 
int main()
{
   Time T1,T2,T3,T4;
   T1.getTime();
   T2.getTime();
   T3=T3.sum(T1,T2);
   T3.display();
return 0;
}