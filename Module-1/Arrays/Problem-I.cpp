//Problem Link: https://codeforces.com/problemset/problem/1915/C
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long int n;
        scanf("%ld",&n);
        long long int arr[n];
        for(int i = 0;i<n;i++)
        scanf("%lld",&arr[i]);
        long long int sum = 0;
        for(int i = 0;i<n;i++){
            sum+=arr[i];
        }

        long long int r = sqrt(sum);

        if((r * r) == sum)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}