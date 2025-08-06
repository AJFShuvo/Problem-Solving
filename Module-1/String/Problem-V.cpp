//Problem Link: https://codeforces.com/contest/1873/problem/C
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    
    int sum = 0;
 
    for(int i = 1;i<=10;i++)
    {
        for(int j = 1;j<=10;j++)
        {
            char ch;
            scanf(" %c",&ch);
            if(ch == 'X')
            {
                if(i<=5)
                {
                    if(j<=5)
                        sum+=min(i,j);
                    else
                        sum+=min(i,11-j);
                }
                else
                {
                    if(j<=5)
                        sum+=min(11-i,j);
                    else
                        sum+=min(11-i,11-j);
                }
            }
        }
 
    }
    printf("%d\n",sum);

    }
}