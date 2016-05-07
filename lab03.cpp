//Lab3- Programming Problems pg 36 Exp 1.3 #3 Total Minutes
//Maureen C++(02) Lab3 Total Minutes
//Programming Problems pg 36 Exp 1.3 #3 
//February 19, 2014
 
#include <iostream>
using namespace std;
 
int main()
 
{
//#3
       int hrs, mins, tot;
 
//input data
       cout<<"Number of hours of game: ";
       cin>> hrs;
       cout<<"\n\nNumber of minutes of game: ";
       cin>> mins;
             
//process data
       tot= hrs * 60 + mins;
 
//output data
       cout<<"\n\nTotal duration of game: "<<tot<<" minutes";
 
       cout<<"\n\n\n";
       system("pause");
       return 0;
 
}
