//Problem Link: https://www.codechef.com/problems/DICENUM
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,c,d,e,f;
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
        
        int mx = a;
        int mn = a;
        int sum = a + b + c;
        if( b > mx)mx = b;
        if(c > mx) mx = c;
        if(b < mn) mn = b;
        if( c < mn) mn = c;
        int mid = sum - (mx + mn );

        int alice = mx * 100 + mid * 10 + mn;

         mx = d;
         mn = d;
         sum = e + d + f;
        if( e > mx)mx = e;
        if(f > mx) mx = f;
        if(e < mn) mn = e;
        if(f < mn) mn = f;
         mid = sum - (mx + mn );

        int bob = mx * 100 + mid * 10 + mn;
        
        if(alice == bob)printf("Tie\n");
        else if(alice > bob)printf("Alice\n");
        else printf("Bob\n");
    }
    
    return 0;
}