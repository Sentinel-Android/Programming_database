#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char a='A'+i+j-2;
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}