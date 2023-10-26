#include<iostream>
#include<math.h>
using namespace std;
int reverse(int x){
    int answer=0;
        while(x!=0){
            if((answer<-(pow(2,31))/10)||(answer>(pow(2,31))/10)){
                return 0;
            }
            answer=(answer*10)+(x%10);
            x/=10;
        }
        return answer;
}
int main()
{
    int n;
    cin>>n;
    cout<<reverse(n);
    return 0;
}