//Problem Link : https://atcoder.jp/contests/abc304/tasks/abc304_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    // Here 1e+3 = 1000 , 1e+4 = 10000 and so on . ..just remember the syntax to write- 
    //-down the thing
    long int n ,ans;
    scanf("%ld",&n);
    if( n <= 1e+3)printf("%d\n",n);
    else if(n >= 1e+3 && n < 1e+4)printf("%d",n-(n % 10));
    else if(n >=1e+4 && n < 1e+5)printf("%d",n - (n % 100));
    else if( n >=1e+5 && n<1e+6)printf("%d", n - (n%1000));
    else if( n >=1e+6 && n<1e+7)printf("%d", n - (n%10000));
    else if( n >=1e+7 && n<1e+8)printf("%d", n - (n%100000));
    else if( n >=1e+8 && n<1e+9)printf("%d", n - (n%1000000));
    
    return 0;
}