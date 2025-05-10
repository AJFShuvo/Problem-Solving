//Problem Link: https://www.codechef.com/problems/MVR
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,x,y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    int messi = (a * 2) + b;
    int ronaldo = (x * 2) + y;
    if( messi > ronaldo)printf("Messi\n");
    else if( ronaldo > messi) printf("Ronaldo\n");
    else printf("Equal\n");

    return 0;
}