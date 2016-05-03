//Maureen  C++(02) Lab0 Sum
//January 29, 2014
 
#include <iostream>
using namespace std;
 
int main()
 
{
       int x,y;
       int sum;
      
       //input data
       cout<<"\nEnter a number ";
       cin>> x;
       cout<<"\nEnter another number ";
       cin>> y;
 
      
       //process data
       sum = x+y;
      
 
       //output data
       cout <<"\n\nThe sum = " << sum;
       cout<<"\n" << x <<" + "<< y <<" = " <<sum;
 
 
       cout<<"\n\n\n";
       system("pause");
       return 0;
 
}