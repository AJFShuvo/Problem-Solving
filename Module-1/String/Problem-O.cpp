//Problem Link: https://atcoder.jp/contests/abc299/tasks/abc299_a
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    char str[256+1];
    scanf("%s",str);

    int first = 0 , second = 0 , star = 0;

    for(int i = 0;i<strlen(str);i++){
        if(str[i] == '|' && first == 0)first = i+1 ;
        if(str[i] == '|' && first != 0)second = i + 1;
        if(str[i] == '*')star = i+1;
    }
    if(star > first && star < second){
        printf("in\n");
    }
    else printf("out\n");

    // printf("first = %d\n",first);
    // printf("second = %d\n",second);
    // printf("star = %d\n",star);
    
    return 0;
}