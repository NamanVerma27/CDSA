#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n=100,digit,sum=0,exp,originalN;
    while(n<=500){
        originalN=n;
        sum=0;
        while (originalN>0)
        {
            digit=originalN%10;
            exp=pow(digit,3);
            sum+=exp;
            originalN/=10;
        }
        if(sum==n){
            cout<<n<<endl;
        }
        n++;
    }

    return 0;
}