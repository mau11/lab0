//Lab6- Programming Problems pg 52 Exp 2.1 #1 7.5% Discount Rate – use all floats/doubles
//Maureen C++(02) Lab6 7.5% Discount Rate
//Programming Problems pg52 Exp 2.1 #1 
//February 26, 2014
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
 
{
       double p1, p2, dis, sum, distot;
      
       //input data
       cout<< setiosflags(ios::fixed);
       cout<< setiosflags(ios::showpoint);
       cout<< setprecision(2);
 
       cout<<"Price of item #1: \t$";
       cin>>p1;
       cout<<"\n\nPrice of item #2: \t$";
       cin>>p2;
      
       //process data
       sum = p1 + p2;
       dis = 0.075 * sum;
       distot = sum - dis;
 
       //output data
             
       cout<<"\n\nItem #1: \t\t$"<<p1;
       cout<<"\nItem #2: \t\t$"<<p2;
       cout<<"\nSum: \t\t\t$"<<sum;
       cout<<"\nDiscount: \t\t$"<<dis;
       cout<<"\nDiscounted Price: \t$"<<distot;
 
      
       cout<<"\n\n\n";
       system("pause");
       return 0;
}
