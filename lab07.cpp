//Lab7- 4 grades: sum, average, typecast
//Maureen  C++(02) Lab7 Four Grades
//February 26, 2014
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
 
{
       int G1, G2, G3, G4, sum, N;
       float avg;
       // Assume all grades are integers.
 
       //input data
       cout<< setiosflags(ios::fixed);
       cout<< setiosflags(ios::showpoint);
       cout<< setprecision(1);
      
       cout<<"\nEnter Grade # 1: ";
       cin>>G1;
       cout<<"\nEnter Grade # 2: ";
       cin>>G2;
       cout<<"\nEnter Grade # 3: ";
       cin>>G3;
       cout<<"\nEnter Grade # 4: ";
       cin>>G4;
 
       //process data
       N = 4;
       sum = G1 + G2 + G3 + G4;
       avg = float (sum) / N;
 
       //output data
       cout<<"\nGrade #1 = "<<G1;
       cout<<"\nGrade #2 = "<<G2;
       cout<<"\nGrade #3 = "<<G3;
       cout<<"\nGrade #4 = "<<G4;
       cout<<"\n\nThe sum of the grades is: "<<sum;
       cout<<"\nThe average of the grades is:"<<avg;
 
       cout<< resetiosflags(ios::fixed);
       cout<< resetiosflags(ios::showpoint);
      
       cout<<"\n\n\n";
       system("pause");
       return 0;
}
