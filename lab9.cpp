//Lab9- Programming Problems 2.3 pg 74 #3 Coins
//Maureen C++(02) Lab9 Coins
//Programming Problems 2.3 pg 74 #3, do it your way
//March 5, 2014
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
 
{
       double half, quart, nick, dime, pen, total_amount;
 
       //input data
       cout<< setiosflags(ios::fixed);
       cout<< setiosflags(ios::showpoint);
       cout<< setprecision(2);
      
       cout<<"Enter the total amount of each coin below \n\n";
       cout<<"Half dollars: \t";
       cin>>half;
       cout<<"\n\nQuarters: \t";
       cin>>quart;
       cout<<"\n\nDimes: \t\t";
       cin>>dime;
       cout<<"\n\nNickels: \t";
       cin>>nick;
       cout<<"\n\nPennies: \t";
       cin>>pen;
      
       //process data
       half = half * 0.50;
       quart = quart * 0.25;
       dime = dime * 0.10;
       nick = nick * 0.05;
       pen = pen * 0.01;
       total_amount = half + quart + dime + nick + pen;
      
       //output data
       cout<<"\nTotal amount of money = $"<<total_amount;
      
       cout<< resetiosflags(ios::fixed);
       cout<< resetiosflags(ios::showpoint);
      
       cout<<"\n\n\n";
       system("pause");
       return 0;
}