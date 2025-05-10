//Problem Link: https://www.codechef.com/problems/OCTATHON
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    scanf("%d",&x);
    if( x >= 6)printf("BRONZE\n");
    else if( x < 6 && x >=3)printf("SILVER\n");
    else printf("GOLD\n");
    return 0;
}