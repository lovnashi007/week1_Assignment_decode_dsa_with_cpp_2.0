/*What is the output of this program?

void main(){
int a=4;
int b=5;
a++;b--;
cout<<<++a<<” “<<b–-;
}*/

#include<iostream>

using namespace std;

int main()
{
    int a=4;
    int b=5;
    a++;//here only post increment operator is used a=5
    b--;// here only post decrement operator is used b=3
    cout<<++a<<" "<<b--;//firstly a will inreased and then print because preincrement is used so a=6 and b is firstly print then decreased because post decrement operator is used 
    return 0;
}