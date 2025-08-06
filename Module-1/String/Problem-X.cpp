// Problem Link: https://codeforces.com/contest/1915/problem/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char str[n + 1];
        scanf("%s", str);
        char ans[(n+1) + (n/2)];
        int index = 0;
        for (int i = strlen(str) - 1; i >= 0;)
        {
            if (str[i] == 'a' || str[i] == 'e')
            {
                for (int j = 0; j < 2; j++, i--)
                {
                    ans[index++] = str[i];
                }
                if (i != 0)
                    ans[index++] = '.';
            }
            else
            {
                for (int j = 0; j < 3; j++, i--)
                {
                    ans[index++] = str[i];
                }
                if (i != 0)
                    ans[index++] = '.';
            }
        }
        ans[index] = '\0';
       for(int i = index-2; i >= 0;i--)printf("%c",ans[i]);
       printf("\n");
    }
    return 0;
}
