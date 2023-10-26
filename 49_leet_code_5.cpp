#include<iostream>
using namespace std;
bool ispoweroftwo(int n){
    if(n==1){
        return true;
    }
    if(n<=0){
        return false;
    }
    int i=0;
    while(n!=1){
        if((n%2)!=0){
            i=1;
        }
        n/=2;
    }
    if(i==0){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<ispoweroftwo(n);
    return 0;
}