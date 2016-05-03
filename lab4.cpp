//Lab4- Programming Problems pg 41 Exp 1.4 #2 Pool
//Maureen C++(02) Lab4 Pool
//Programming Problems pg 41 Exp 1.3 #2 
//February 19, 2014
 
#include <iostream>
using namespace std;
 
int main()
 
{
//#2
       int depth, length, width, surf, cost;
 
//input data
       cout<<"Enter the depth (feet) of the pool: ";
       cin>> depth;
       cout<<"\n\nEnter the length (feet) of the pool: ";
       cin>> length;
       cout<<"\n\nEnter the width (feet) of the pool: ";
       cin>> width;
             
//process data
       surf= 2 * depth *( length + width) + length * width;
       cost= surf * 2;
 
//output data
       cout<<"\n\nThe total surface area of the pool is "<<surf<<" square feet.";
       cout<<"\n\nThe total cost of resurfacing the pool is $ "<<cost;
 
       cout<<"\n\n\n";
       system("pause");
       return 0;
 
}