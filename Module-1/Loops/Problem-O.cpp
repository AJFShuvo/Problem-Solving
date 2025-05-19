//Problem Link: https://www.codechef.com/problems/VIDEOWORTH
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int x;
        scanf("%d",&x);
        printf("%d\n", (x*24*1000));
    }
    return 0;
}