//Problem Link: https://atcoder.jp/contests/abc315/tasks/abc315_a
#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[256+1];
    scanf("%s",str);
    for(int i = 0;i<strlen(str);i++){
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'){
            continue;
        }
        else printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}