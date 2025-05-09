//Problem Link: https://www.codechef.com/problems/SWEETSHOP
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    scanf("%d%d", &x,&n);
    printf("%d\n", ((x - (n * 10)) / 20));
    return 0;
}