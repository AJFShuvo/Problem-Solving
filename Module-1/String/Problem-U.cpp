//Problem Link: https://codeforces.com/contest/1352/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){

        char str[10000];
        scanf("%s",str);
        int count = 0;
        for(int i =0 ;i<strlen(str);i++){
            if(str[i] == '0')continue;
            else count++;
        }
        printf("%d\n",count);
        for(int i = 0;i<strlen(str);i++){
            
            if(str[i] != '0'){
                char ch = str[i];
                printf("%c",ch);
                for(int j = i+1;j<strlen(str);j++)
                printf("0");
                printf(" ");
            }
        }
        printf("\n");

    }
}