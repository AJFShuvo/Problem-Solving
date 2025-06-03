//Problem Link: https://atcoder.jp/contests/abc301/tasks/abc301_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
    scanf("%d",&arr[i]);

    for(int i = 1;i<n;i++){
        if(abs(arr[i]- arr[i-1]) > 1){

            int p = abs(arr[i]-arr[i-1]);
            for(int j = arr[i-1];j<=p;j++){
                printf("%d ",j);
            }
        }
        else {
            printf("%d ",i);
        }
    }
    return 0;
}