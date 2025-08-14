//Problem Link: https://codeforces.com/problemset/problem/1633/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d", &n);
        if(n < 10)printf("7\n",n);
        else if(n % 7 == 0)printf("%d\n",n);
        else {
            n = n / 10;
            n = n * 10;
            for(int i = n;i < n + 10;i++){
                if(i % 7 == 0){
                    printf("%d\n",i);
                    break;
                }
            }
        }
    }
    return 0;
}