//Problem Link : https://vjudge.net/contest/715567#problem/F
#include<bits/stdc++.h>
using namespace std;
int main(){

    char a,b,c;
    scanf("%c%c%c",&a,&b,&c);

    int a1 = a - '0';
    int b1 = b - '0';
    int c1 = c - '0';
    int result = ((a1 * 100) + (b1 * 10 ) + c1 ) +((b1 * 100) + (c1 * 10 ) + a1 ) + ((c1 * 100) + (a1 * 10 ) + b1 );
    printf("%d\n", result);

    return 0;
}