//Problem Link: https://www.codechef.com/problems/NEWCC
#include<bits/stdc++.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if( x < y)printf("Old\n");
    else if( y < x)printf("New\n");
    else printf("Same\n");
    return 0;
}