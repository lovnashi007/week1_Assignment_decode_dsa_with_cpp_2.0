/*How much space does following data types
take ?

1. int
2. bool
3. float*/

#include<iostream>

using namespace std;

int main()
{
    cout<<"size of int is : "<<sizeof(int)<<endl; // size of int = 4
    cout<<"size of float is : "<<sizeof(float)<<endl;// size of float is =  4;
    cout<<"size of bool is : "<<sizeof(bool)<<endl;// size of bool is = 1
    return 0;
}