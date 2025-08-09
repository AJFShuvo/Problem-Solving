//Problem Link: https://codeforces.com/problemset/problem/1810/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;

        scanf("%d",&n);
        int arr[n+1];
        for(int i = 0;i<n;i++)
        scanf("%d",&arr[i]);

        bool flag = false;
        for(int i  = 1;i<= n;i++){
            for(int j = i-1;j<n;j++){
                if(i >= arr[j]){
                    flag = true;
                    break;
                }
            }
        }

        if(flag)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}