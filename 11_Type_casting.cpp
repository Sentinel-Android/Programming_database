#include<iostream>
using namespace std;
int main()
{
    int a='a';
    cout<<a<<endl;
    char ch=98;
    cout<<ch<<endl;
    // Total value stored in a data type=2^no of bits
    // Maximum value stored in a datatype=(2^no of bits)-1
    char ch1=123456;
    cout<<ch1; //123456%256=64(which is the ASCII value of @)
    return 0;
}