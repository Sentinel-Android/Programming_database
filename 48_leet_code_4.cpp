#include<iostream>
using namespace std;
int bitwisecomplement(int n){
    if(n==0){
        return 1;
    }
    int m=n;
    int mask=0;
    while(m!=0){
        mask=(mask<<1)|1;
        m>>=1;
    }
    int answer=(~n)&mask;
    return answer;
}
int main()
{
    int n;
    cin>>n;
    cout<<bitwisecomplement(n);
    return 0;    
}