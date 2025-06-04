//Problem Link: https://atcoder.jp/contests/abc328/tasks/abc328_b
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int arr[n]={0};
    for(int i  = 1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int ans = 0;
    for(int i = 1;i<=n;i++){
        
        for(int j = 1;j<=arr[i];j++)
        {
        
            int lastDigit = i % 10;
             bool flag = true;
             int i2 = i;
         while(i2!=0)
         {
            
            int rem = i2 % 10;
            if(rem != lastDigit)
            {
                flag = false;
                break;
             }
            i2/=10;
        }
        
        int j2 = j;
         
            while(j2!=0){
                int rem = j2 % 10;
                if(rem !=lastDigit){
                    flag = false;
                    break;
                }
                j2/=10;
            }

            if(flag)ans++;

        }

    }

    printf("%d\n",ans);

    return 0;
}