#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int count=0;
    while(a!=0){
        if(a&1){
            count+=1;
        }
        a>>=1;
    }
    cout<<count;
    return 0;
}