// Problem Link:- https://vjudge.net/problem/CodeChef-PHONEYR
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int ans2 = n % 10;
    
    n = n / 10;
    int ans1 = n % 10;
    printf("K%d%d\n", ans1,ans2);
    return 0;
}