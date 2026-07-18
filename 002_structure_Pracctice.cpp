
// #include <iostream>
// using namespace std;
// struct rectangle{int length,breadth;};
// int main() {
//     rectangle r;//or struct rectangle r
//     //memory allocated right after creation of object
// rectangle v = {10 ,2}; // creating and initializing;vv  *******New to me
// cout<<v.length<<endl<<v.breadth;
// //v.length = 100;//changed v ka length ...
// cout<<endl<<"area of v rectangle is "<<v.length*v.breadth;

// string s[100];    //*******new to me
// char c = ' ';
//    cout<<endl<<sizeof(c);
//     return 0;
// }

#include <iostream>
using namespace std;
struct Rectangle
{
    int length, breadth;
    char x;
} r2 = {5,6};
struct Rectangle r1 = {2,3}; // different ways of creating objects
int hi()
{
    int c = 55, d, e = 15; // only 4 byte memory
}
int main()
{
    struct Rectangle r3 = {10, 20};
    
    cout << sizeof(r1); // 8 byte....size of objectssss
    cout << endl
         << sizeof(hi()) // size of function uska type int hai toh 4 byte lega
         << endl
         << sizeof(Rectangle); // ye bas type ka size batata hai..real me structure ko memory nhi milti...uske obj ko milti h;
        
  r1 = {6,7};
  cout<<endl<<r1.length<<endl;
  r1.breadth = 99;


    // why size of object = 12 not 9? compiler ko 4 ka multiple read krna asan lagta hai
    // asal me 1 hi byte allocate hui hai char ko but show 4 kr rhA 
    //above statement is concept of padding......******************new to me
    cout<<endl<<r2.length;

    return 0;
}