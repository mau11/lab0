//Lab1- calculator: *  /  %  +  -  , int sum, diff, prod, quot, rem;
//Maureen   C++(02) Lab1 Calculator
//February 12, 2014
 
#include <iostream>
using namespace std;
 
int main()
 
{
       int x,y;
       int sum,diff,prod,quot,rem;
      
       //input data
       cout<<"CALCULATOR \n\n ";
       cout<<"\nEnter a number: ";
       cin>> x;
       cout<<"\nEnter another number (cannot = zero): ";
       cin>> y;
 
       //process data
       sum = x + y;
       diff = x - y;
       prod = x * y;
       quot = x / y;
       rem = x % y;
      
       //output data
       cout <<"\n\nThe sum = " << sum;
       cout<<"\n" << x <<" + "<< y <<" = " <<sum;
       cout<<"\n\nThe diff = " <<diff;
       cout<<"\n" << x <<" - "<< y <<" = " <<diff;
       cout <<"\n\nThe prod = " << prod;
       cout<<"\n" << x <<" * "<< y <<" = " <<prod;
       cout <<"\n\nThe quot = " << quot;
       cout<<"\n" << x <<" / "<< y <<" = " <<quot;
       cout <<"\n\nThe rem = " << rem;
       cout<<"\n" << x <<" % "<< y <<" = " <<rem;
      
 
       cout<<"\n\n\n";
       system("pause");
       return 0;
 
}