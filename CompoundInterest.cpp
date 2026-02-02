// a program to calculate compound interest
#include <iostream>
# include <cmath>
using namespace std;
int main(){
  float P,r,T,CI;
  cout<< "Enter r: " << endl;
  cin>> r;
  cout<< "Enter P: " << endl;
  cin>> P;
  cout<< "Enter T: " << endl;
  cin>> T;
  
  CI = P*pow((1+r/100),T);
  cout<< "compound interest  "<< CI << endl;
  return 0;
}
