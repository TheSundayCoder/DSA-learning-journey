
#include <iostream>
using namespace std;
struct Rec{
    int l , b; 
};
void initialize(/*Rec r*/Rec* r,int l ,int b){
    // r.l = l;
    r->l=l;
    r->b = b;
    // r.b = b;
}
int area(Rec a){
    return (a.l)*(a.b);
}
void changelength(Rec *a,int l1){
    a->l=l1;
}
int main() {
    Rec r;
    initialize(&r,1,2);
 cout<<r.l;
 area(r);
 changelength(&r,100);
 cout<<endl <<r.l;
    return 0;
}
