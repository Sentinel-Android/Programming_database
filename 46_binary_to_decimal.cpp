#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int answer=0;
    int i=0;
    cin>>n;
    while(n!=0){
        answer+=(n%10)*pow(2,i);
        n/=10;
        i++;
    }
    cout<<answer;
    return 0;
}