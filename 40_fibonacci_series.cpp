#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num1=0,num2=1;
    cout<<num1<<endl<<num2<<endl;
    for(int i=3;i<=n;i+=2){
        num1+=num2;
        num2+=num1;
        cout<<num1<<endl<<num2<<endl;
    }
    return 0;
}