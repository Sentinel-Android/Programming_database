#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int sum=0;
    int prod=1;
    while(a!=0){
        sum+=(a%10);
        prod*=(a%10);
        a/=10;
    }
    cout<<prod-sum;
    return 0;
}