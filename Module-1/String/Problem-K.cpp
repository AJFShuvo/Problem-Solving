//Problem Link: https://atcoder.jp/contests/abc311/tasks/abc311_a
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[256+1];
    int n;
    scanf("%d",&n);
    scanf("%s",str);
    bool a = false;
    bool b = false;
    bool c = false;
    int count = 0;
    for(int i = 0;i<strlen(str);i++){
        if(a  && b && c){
            break;
        }
        else {
            count++;
            if(str[i] == 'A')a = true;
            else if(str[i] == 'B')b = true;
            else c = true;
        }
    }
    printf("%d\n",count);
}