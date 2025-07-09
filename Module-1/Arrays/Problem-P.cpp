//Problem Link: https://atcoder.jp/contests/abc293/tasks/abc293_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        scanf("%d",&n);
        int arr[n+1];
        int counter[n+1] = {0};
        for(int i = 1;i<=n;i++){
            scanf("%d",&arr[i]);         
        }
        
        for(int i = 1;i<=n;i++){
            if(counter[i] == 0){
                counter[arr[i]] = 1;
            }
            else {
                continue;
            }
        }

       
        int count = 0;
        for(int i = 1;i<=n;i++){
            if(counter[i] == 0)count++;
        }
        printf("%d\n",count);
        
        for(int i = 1;i<=n;i++)
        if(counter[i] == 0)
        printf("%d ",i);
         printf("\n");
        return 0;
}