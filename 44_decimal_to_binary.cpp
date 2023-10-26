#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,m=0,answer=0;
    cin>>n;
    //positive number
    // while(n!=0){
    //     if(n&1){
    //         answer+=(pow(10,m));
    //     }
    //     m++;
    //     n>>=1;//right shift
    // }
    //negative number
    int p=-n;
    while(p!=0){
        if(!(p&1)){
            answer+=(pow(10,m));
        }
        m++;
        p>>=1;
    }
    //convert to decimal, add 1 and convert to binary
    //Pending
    cout<<answer;
    return 0;
}
/*same number answer+=((n%10))*pow(10,m));
n/=10;
m++;
reverse number answer=(answer*10))+(n%10);
n/=10;
*/