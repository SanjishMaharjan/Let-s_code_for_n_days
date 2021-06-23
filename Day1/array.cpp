//WAP to find sum of elements in a given array
#include<iostream>
using namespace std;
class array{ // Defining a class.
    public :
    int a[10],sum=0;
    
    public:
    void getarray(){   //  Method to get the numbers 
        for (int i = 0; i < 5; i++)
        {
           cout<<"Enter the number :"  <<endl;
           cin>> a[i];
        
        }
    }
    void sumofarray(){  // Method to calculate the sum of arrays
        for ( int i = 0; i < 5; i++)
        {
           sum=sum+a[i]; 
        }
        cout<<"The sum of arrays are : "<<sum<<endl;
    }
    
}; 
int main()
{
    array a1;
    a1.getarray();   //Calling getarray method 
    a1.sumofarray();  //Calling getarray method 
return 0;
}