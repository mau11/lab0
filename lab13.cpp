//Lab13- Up Counter
//Maureen  C++(02) Lab13
//Lab13- Up Counter
//March 26, 2014
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
 
{
       int N, ctr, S, F, countby;
      
       //Part A: input data
       cout<< setiosflags(ios::fixed);
       cout<< setiosflags(ios::showpoint);
       cout<< setprecision(1);
      
       cout<<"Enter the number you would like to count up to: ";
       cin>>N;
             
       //A: process data
       ctr = 1;
       while (ctr <=N)
       {
      
       //A: output data
              cout<< setw(8)<<ctr;
              ctr++;
       }
      
       //Part B: input data
       cout<<"\n\nEnter the number you would like to count up from: ";
       cin>>S;
       cout<<"\n\nEnter the number you would like to count to: ";
       cin>>F;
       cout<<"\n\nEnter the what you would like to count by: ";
       cin>>countby;
             
       //B: process data
       ctr = S;
       while (ctr <=F)
       {
      
       //B: output data
              cout<< setw(8)<<ctr;
              ctr = ctr + countby;
       }
 
       cout<< resetiosflags(ios::fixed);
       cout<< resetiosflags(ios::showpoint);
      
       cout<<"\n\n\n";
       system("pause");
       return 0;
}