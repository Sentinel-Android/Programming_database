#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<" a&b "<<(a&b)<<endl; //convert to binary and apply the operator on each bit
    cout<<" a|b "<<(a|b)<<endl; 
    cout<<" ~a "<<(~a)<<endl; //2's compliment of a
    cout<<" a^b "<<(a^b)<<endl;
    cout<<" << "<<(a<<b)<<endl; //shifts all digits towards left
    cout<<" >> "<<(a>>b)<<endl; //shifts all digits towards right
    /*for small numbers lstrip doubles the number while rstrip halves the number
    padding is done with 0*/
    int c=a++; //post increment operator
    int d=a--; //post decrement operator
    int e=++a; //pre increment operator
    int f=--a; //pre decrement operator
    /*post inc/dec operator assigns the value then increases the value
    pre inc/dec operator first increases the value then assigns the value*/
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;
    return 0;
}