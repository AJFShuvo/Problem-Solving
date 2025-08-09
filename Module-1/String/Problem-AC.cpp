// Problem Link: https://atcoder.jp/contests/abc329/tasks/abc329_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    char str[n + 1];
    scanf("%s", str);
    int freq[27] = {0};
    int mx = 1;
    for (int i = 1; i < n; i++)
    {
        if (str[i] == str[i - 1])
        {
            mx++;
        }
        else
        {
            if (freq[str[i-1] - 'a'] < mx)
            {
                freq[str[i-1] - 'a'] = mx;
            }
            mx = 1;
        }
    }
    if (freq[str[n-1] - 'a'] < mx)
    {
        freq[str[n-1] - 'a'] = mx;
    }

    int ans = 0;
    for (int i = 0; i < 27; i++)
        ans += freq[i];
    printf("%d\n", ans);
    return 0;
}