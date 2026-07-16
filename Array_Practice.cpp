
#include <iostream>
using namespace std;

#include<stdio.h> //write c program in c++ projects..

int main() {
    int a[5]; // ------>4*5 =20 byte memory used //1 byte = 8 bit;
    a[0]=14;
    a[1]=15;
    a[2]=24;
    // cout<<sizeof(a)<<endl; // =20 (byte)
    // cout<<a[1]<<endl<<a[2]<<endl;
   
   int b[] = {10,20,30,40,50}; //automatic 5 size ka array declared
   int c[10] = {1,2,3,4,5,6,7};//rest elements by default become 0;
   char y [5] = {'a','b'}; //rest elements are blank spaces by default
//    cout<<y[0]<<endl<<y[2]<<endl<<y[4];
//    cout<<endl<<c[9]<<endl<<c[8]<<endl<<c[7]; //value is 0 but we didnt define it...

 //   printf("%d\n",a[0]); //c language


 int x[10]={0};   //rest  elements 0 by default..
//  for(int i = 0 ; i < 10; i++){
//     cout<<endl<<x[i];
//  }

for(int o  :  x){
    cout<<o<<endl;
}

int z[10]; //garbage value
// for(int j = 0 ; j < 10 ; j ++){
//     cout<<endl<<z[j];//----->garbage value...
// }
//cout<<endl<<z[1]<<endl<<z[2]<<endl<<z[3];//garbage value


int n1;
cin>>n1;
int s[n1] = {2,3,4,5,6,7,8,}; //not valid in c++ but valid in compiler...dont try
cout<<s[5]<<s[6]<<s[4]; //dont try this thing its dhokebaaz....

int n2;
cin>>n2;
int m[n2];
m[0] = 2;
for(int x  : m){
cout<<endl<<x;   //garbage
}
    return 0;
}