#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char a='A'+count-1;
            cout<<a;
            count++;
        }
        cout<<endl;
    }
    return 0;
}