
#include <iostream>
using namespace std;
class Rectangle{
    int l , b;
    public:
    void setdata(int l1 , int b1){
        l = l1;
        b = b1;
    }
    int area(){
 return l*b;
    }
};
int main() {
    Rectangle r;
    r.setdata(20,30);
    
    cout<<r.area();
    return 0;
}  