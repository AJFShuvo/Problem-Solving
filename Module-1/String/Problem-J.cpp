//Problem Link: https://atcoder.jp/contests/abc314/tasks/abc314_a
#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[] = {"3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679"};
    int n;
    scanf("%d",&n);
    printf("%c%c",str[0],str[1]);
    for(int j = 0,i = 2;j<n;j++,i++){
       printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}