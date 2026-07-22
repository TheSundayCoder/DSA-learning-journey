
// #include <iostream>
// using namespace std;
//  struct Rectangle{
//     int l,b;
//  };
//  int area(Rectangle a){ //call by vslue
//     return a.l*a.b;
//  }
//  int areaa(Rectangle &a) {//call by reference
//     int c =  a.l*a.b;
//     a.l = 120; //real me change hogaaa..
//     return c;
// }
// int areaaa(Rectangle* a){
//      return ((*a).l)*((*a).b);
// }
// int main() {
// Rectangle r = {20,5};
// //cout<<area(r);
// // cout<<areaa(r);
// //  cout<<endl<<r.l;
// cout<<endl<<areaaa(&r);
//     return 0;
// }




// #include <iostream>
// using namespace std;
// struct Rec{
//     int length,breadth;
// };
// void fun(Rec r){ //call by value
//     r.length = 20;
//     cout<<"length "<<r.length<<" breadth "<<r.breadth;
// }
// int main() {
//     Rec r = {10,5};
//     fun(r);
//     cout<<endl<<"length "<<r.length<<" breadth "<<r.breadth;
//     return 0;
// }



#include <iostream>
using namespace std;
struct Rec
{
    int length, breadth;
};
Rec * fun(){   //struct ka pointer return krega
    struct Rec *p;
    p = new Rec;
    return p;   //struct ka pointer
}
int main()
{ 
    Rec *c = fun();  //now c points struct object created in heap
    c-> length = 100;
    c -> breadth = 200;
cout<<c->length<<endl<<c->breadth;
    return 0;
}