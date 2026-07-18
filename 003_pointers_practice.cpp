
#include <iostream>
using namespace std;
struct Rectangle{
    int length,breadth;
};

int main() {
    
 int a = 10;
 int *p ; //declaration uses star and dereferencing too ---> *p
 p = &a;  //assigning pointer
//cout<<*p<<endl<<p;
 
/************* Pointer to Array ***************/
int b[] = {2,4,6,8,10};
int *y = &b[0]; // = b //b is address of b[0]
                      //b+1 is address of b[1] = p+1
                      //&b[2] = p+2

            for(int i = 0 ; i < 5 ; i++){
               // cout<<*(y+i)<<endl;
                cout<<y[i]<<endl; //in case of pointer to array, pointer act as name of array
            }           
int *r = new int[5];   //pointer pointing towards array of 5 int in heap memory
r[0] = 10; r [ 1] = 15; r[2] = 20; r[3] = 25; r[4] = 30;
         for(int i = 0 ; i < 5 ; i++){
            cout<<r[i]<<endl;
         }

          int *o = new int(6); //creating int in heap memory;
        //  or   int *o = new int;
        //    *o = 6;
          cout<<*o;

          delete [] r;
          delete o; //-----deleting  heap memory items...
       //delete is must.......... not must in big problems but its necessary in big problems....


       struct Rectangle *f; //struct type pointer
       cout<<endl<<sizeof(f);
       char *s;
    cout<<endl<<sizeof(s);

    char *u;
    cout<<endl<<sizeof(u);
    double *d;
    cout<<endl<<sizeof(d);  //all have same size as pointer is an address and its size is fixxed.. 

    


    return 0;
}