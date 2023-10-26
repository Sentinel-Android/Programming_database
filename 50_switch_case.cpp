#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch(n){
        case 1:
        cout<<"One"<<endl;
        break;
        case 2:
        cout<<"Two"<<endl;
        break;
        case 3:
        cout<<"Three"<<endl;
        break;
        default:
        cout<<"Default case"<<endl;
        //switch can only take int and char values
        //default case is not mandatory
    }
    return 0;
}