//Problem Link: https://codeforces.com/problemset/problem/1873/B
#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i =0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        int mn  = arr[0], mx = arr[0];
        int index1 = 0,index2 = 0;

        for(int i = 0;i<n;i++){
            if(arr[i] > mx){
                mx = arr[i];
                index1 = i;
            }
            if(arr[i] < mn){
                mn = arr[i];
                index2 = i;
            }
        }

        int ans1 = 1;
        arr[index1]+=1;
        for(int i = 0;i<n;i++)ans1*=arr[i];

        arr[index1] -=1;
        arr[index2] +=1;
        int ans2 = 1;
        for(int i = 0;i<n;i++)ans2*=arr[i];
        
        if(ans1 > ans2)printf("%d\n",ans1);
        else printf("%d\n",ans2);
    }
    return 0;
}