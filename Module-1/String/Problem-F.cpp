//Problem Link: https://atcoder.jp/contests/abc325/tasks/abc325_a
#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[256+1];
     scanf("%[^\n]%*c", str);

    for(int i = 0;i<strlen(str);i++){
        printf("%c",str[i]);
        if(str[i] == ' '){
            printf("san\n");
            break;
        }
    }
    return 0;
}