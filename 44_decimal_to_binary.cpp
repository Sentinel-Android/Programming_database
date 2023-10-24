#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,m=0,answer=0;
    cin>>n;
    while(n!=0){
        if(n&1){
            answer+=(pow(10,m));
        }
        m+=1;
        n>>=1;//right shift
    }
    cout<<answer;
    return 0;
}
/*same number answer+=((n%10))*pow(10,m));
n/=10;
m++;
reverse number answer=(answer*pow(10,m))+(n%10);
n/=10;
m++;
*/