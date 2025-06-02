//Problem Link: https://atcoder.jp/contests/abc297/tasks/abc297_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    
        int n,d;
        scanf("%d%d",&n,&d);

        int arr[n];
        
        for(int i = 0;i<n;i++)
        scanf("%d",&arr[i]);

        int ans = 0;

        for(int i = 1;i<n;i++){
            //printf("i = %d : \n",i);
           if(abs(arr[i-1] - arr[i]) <= d){
            ans = arr[i];
            // printf("%d - %d = %d <= %d , ans = %d\n",arr[i-1] , arr[i],abs(arr[i-1] - arr[i]), d,ans);
            break;
        }
        }

        if(ans > 0)printf("%d\n",ans);
        else printf("%d\n",-1);
    
    return 0;
}