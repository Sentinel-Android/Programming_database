#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    for(; ; ){
        if(i<=n){
            cout<<i<<endl;
            i++;
        }
        else{
            break;
        }
    }
    return 0;
}