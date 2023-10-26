#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int answer=0;
    cin>>n;
    //same number
    int i=0;
    while(n!=0){
        answer+=(n%10)*pow(10,i);
        n/=10;
        i++;
    }
    //reverse number
    // while(n!=0){
    //     answer=(answer*10)+(n%10);
    //     n/=10;
    // }
    cout<<answer;
    return 0;
}