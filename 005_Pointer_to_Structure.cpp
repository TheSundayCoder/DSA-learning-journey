
#include <iostream>
using namespace std;
struct Rectangle{
    int leng,b;
};

int main() {
     //c++ me har jgha struct likhna jaruri nhi for obj or pointer creation 
    struct Rectangle r = {10,5};               
    struct Rectangle *p ; // = &r direct krdo
    p = &r; //declare and initialize
   
    (*p).leng = 20;  //brackket due to operator precedence .  has more precedence than *
       //same as r.leng
 cout<<r.leng;

    // struct Rectangle s = {4,5};
    // struct Rectangle *q; //declare 
    // q = &s; //initialize
    // cout<<&s<<endl<<q;


    //cout<<*p; this is error...p=object kaise print hojaega
    
 p -> b = 300;
cout<<endl<<r.b; 


/*************Dynamic struct object creation in heap************/


 struct Rectangle *s;
s =  new struct Rectangle ;  //new struct Rectangle heap me created object ka location return krta hai...
//or s = new Rectangle;
(*s).leng = 12;
s -> b = 13;
cout<<endl<<s -> leng<<endl<<s -> b;

    return 0;
}