//Problem Link: https://www.codechef.com/problems/ONEFULPAIRS
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int ans = a + b + (a * b);
    if( ans == 111)printf("Yes\n");
    else printf("No\n");
    return 0;
}