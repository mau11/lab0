//Lab12- N-Grades
//Maureen  C++(02) Lab12
//Lab12- N- Grades
//March 26, 2014
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
 
{
       int G, ctr, N;
       int sum = 0;
       float avg;
 
       //input data
       cout<< setiosflags(ios::fixed);
       cout<< setiosflags(ios::showpoint);
       cout<< setprecision(1);
      
       cout<<"How many grades will you be entering?  ";
       cin>>N;
 
       ctr = 0;
       while (ctr < N)
       {
      
       cout<<"Enter grade #"<<ctr + 1<<": ";
       cin>>G;
       sum += G;
       ctr++;
       }
      
       //process data
       avg = float (sum)/N;
 
      
       //output data
       cout<<"\nTotal # of grades entered:  "<<N;
       cout<<"\nSum of grades entered:      "<<sum;
       cout<<"\nAverage of grades entered:  "<<avg<<"%";
      
 
       cout<< resetiosflags(ios::fixed);
       cout<< resetiosflags(ios::showpoint);
      
       cout<<"\n\n\n";
       system("pause");
       return 0;
}