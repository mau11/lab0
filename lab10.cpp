//Lab10- Programming Problems pg 74 Exp 2.3 #4 Sales Tax – float price, tax rate, tax, total; (do it your way)
//Maureen C++(02) Lab10
//Programming Problems pg 74 Exp 2.3 #4 Sales Tax – float price, tax rate, tax, total; (do it your way)
//March 12, 2014
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
 
{
       double price, rate, tax, total;
      
       //input data
       cout<< setiosflags(ios::fixed);
       cout<< setiosflags(ios::showpoint);
       cout<< setprecision(2);
 
       cout<<"Enter the price of item: \t\t$";
       cin>>price;
       cout<<"\n\nEnter the sales tax rate (percent): \t";
       cin>>rate;
             
       //process data
       rate = rate / 100;
       tax = price * rate;
       total = price + tax;
 
       //output data
             
       cout<<"\n\nOrignal Price of item: \t\t$"<<price;
       cout<<"\nSales Tax on item: \t\t$"<<tax;
       cout<<"\nTotal Price after tax: \t\t$"<<total;
 
       cout<< resetiosflags(ios::fixed);
       cout<< resetiosflags(ios::showpoint);
 
      
       cout<<"\n\n\n";
       system("pause");
       return 0;
}