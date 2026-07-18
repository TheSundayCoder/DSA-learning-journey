
#include <iostream>
using namespace std;

int main() {
    int a = 10; //created in stack
   // int &c;  error as we need to initialize
     int &b = a;  //reference dosent consume any memory
     //a = 30;
     cout<<&b<<endl<<&a;  //both same..basically both are same thing a and b..used in parameter passing..
  int d = 100;
  b = d; //now a will become 25.... b wont be the reference variable for d as it is initialized for a;
  cout<<endl<<a<<endl<<b;
    return 0;
}