
// #include <iostream>
// using namespace std;
// void fun(int a[]/* or int *a */, int n){
            //this array parameter is a pointer...not real array it is an address....
//     for(int i = 0 ; i < n ; i++){
//         cout<<a[i]<<endl;
//     }
//     a [0 ] = 25;

// } //int *a = pointer to integer or int array, int a[]= pointer or int array only
// int main() {
//     int n[] = { 1,2,3,4,5,6};
//    // cout<<n[8]; trash value

// fun(n , 4);
// cout<<endl<<n[0]; //n [0] = 25 updated bcz of call by address...
//     return 0;
// }


//Array are always passed by address


#include <iostream>
using namespace std;
int* fun(int n){ //or int[] fun(int n)   it denotes return value basically.... array return type isnot always valid in c++ compiler
    int *p; 
    p = new int[n]; //heap memory
    for(int i = 0 ; i < n ; i++){
      p[i] = i+10;
    }
    return p;
}
int main() { 
    int *A;
    int n;
    cin>>n;
    A = fun(n);
    
    for(int i = 0 ; i < n ; i++){
        cout<<endl<<A[i];
    }
    //for(int x : A){cout<<endl<<x;} this is wrong as A is pointer ..not array....
    //int c[]; error without size definition
    delete []A;
    return 0;
}



