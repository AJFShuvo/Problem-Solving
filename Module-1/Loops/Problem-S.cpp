//Problem Link: https://codeforces.com/problemset/problem/1352/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);

        int count = 0;
        int m = n;
        while(n> 0){
            int last_digit = n % 10;
            if(last_digit > 0)count++;
            n/= 10;
        }

        printf("%d\n",count);

       // printf("%d",m);
         int i = 1;
        while(m > 0){
           
             int ans = 0;
            int last_digit = m % 10;
           if(last_digit <= 0)i = i * 10;
           else {
            ans = last_digit * i;
            printf("%d ",ans);
            i = i * 10;
           }
            m /=10;
        }
        printf("\n");
    }
}