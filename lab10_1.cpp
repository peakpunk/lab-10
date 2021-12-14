#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){ 
 double money , interest , pay;
 int i = 1;
 cout << "Enter initial loan: ";
 cin >> money;
 cout << "Enter interest rate per year (%): ";
 cin >> interest;
 interest /= 100;
 cout << "Enter amount you can pay per year: ";
 cin >> pay;

 //use 'setw' to set width of table and 'left' to set left-alignment
 //you can change input argument of 'setw()' to see the effect
 //Try to change from 'left' to 'right' and see the effect
 cout << setw(13) << left << "EndOfYear#"; 
 cout << setw(13) << left << "PrevBalance"; 
 cout << setw(13) << left << "Interest"; 
 cout << setw(13) << left << "Total";
 cout << setw(13) << left << "Payment";
 cout << setw(13) << left << "NewBalance";
 cout << "\n";
 
 //use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
 //you can change input argument of 'setprecision()' to see the effect
 while(money > 0){
  cout << fixed << setprecision(2); 
  cout << setw(13) << left << i; 
  cout << setw(13) << left << money;
  cout << setw(13) << left << money*interest;
  money = (money*interest)+money;
  cout << setw(13) << left << money;
  if (money < pay){
   pay = money;
  }
  cout << setw(13) << left << pay;
  money -= pay;
  cout << setw(13) << left << money;
  cout << "\n";
  i++;
 }


 return 0;
}