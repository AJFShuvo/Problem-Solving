//Problem Link: https://codeforces.com/contest/1915/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char str[4][4];
       for(int i = 0;i<3;i++)
       {
            for(int j = 0;j<3;j++){
                scanf(" %c",&str[i][j]);
            }
       }
       char ch;
       for(int i = 0;i<3;i++)
       {
            bool flag = false;
            for(int j = 0;j<3;j++){
               if(str[i][j] == '?'){
                   int r = (str[i][0] + str[i][1] + str[i][2])-str[i][j];
                   int p = 'A' + 'B' + 'C';
                   ch = (char)(p-r);
                   flag = true;
               }
            }
            if(flag)break;
       }
       printf("%c\n",ch);

    }
    
    return 0;
}