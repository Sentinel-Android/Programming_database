#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    switch(m){
        case 100:
        cout<<n/100<<endl;
        break;
        case 50:
        cout<<(n%100)/50<<endl;
        break;
        case 1:
        cout<<(n%100)%50<<endl;
        break;
        default:
        cout<<"Invalid Input"<<endl;
    }
    return 0;
}