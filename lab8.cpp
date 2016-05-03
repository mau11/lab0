//Lab8- Programming Problems 2.2 pg 63 #4 MPG, int miles; gals; float mpg; (typecast)
//Maureen C++(02) Lab8 MPG
//Programming Problems 2.2 pg 63 #4,int miles; gals; float mpg; (typecast)
//March 5, 2014
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
 
{
       int mi, gal;
       float mpg;
      
       //input data
       cout<< setiosflags(ios::fixed);
       cout<< setiosflags(ios::showpoint);
       cout<< setprecision(2);
      
       cout<<"Enter the number of miles traveled: ";
       cin>>mi;
       cout<<"\n\nEnter the number of gallons of fuel consumed: ";
       cin>>gal;
      
       //process data
       mpg = float(mi) / float(gal);
      
       //output data
       cout<<"\n\nTotal miles per gallon = "<<mpg<<" mpg";
      
       cout<< resetiosflags(ios::fixed);
       cout<< resetiosflags(ios::showpoint);
      
       cout<<"\n\n\n";
       system("pause");
       return 0;
}