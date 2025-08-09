// Problem Link: https://cses.fi/problemset/task/1755
#include <bits/stdc++.h>
using namespace std;
char str[1000001];
int main()
{

    scanf("%s", str);
    int n = strlen(str);
    int freq[26];
    for(int i = 0;i<26;i++)freq[i] = 0;
    for (int i = 0; i < n; i++)
    {
        freq[str[i] - 65]++;
    }

    if (n % 2 == 0)
    {
        // n even
        int flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 == 1)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            for (int i = 0; i < 26; i++)
            {
                for (int j = 0; j < freq[i] / 2; j++)
                {
                    char ch = (char)('A' + i);
                    printf("%c", ch);
                }
            }
            for (int i = 25; i >= 0; i--)
            {
                for (int j = 0; j < freq[i] / 2; j++)
                {
                    char ch = (char)('A' + i);
                    printf("%c", ch);
                }
            }
            printf("\n");
        }
        else
        {
            printf("NO SOLUTION\n");
        }
    }
    else
    {
        int cnt = 0, index = -1;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 == 1)
            {
                cnt++;
                index = i;
            }
        }
        if (cnt == 1)
        {
            for (int i = 0; i < 26; i++)
            {
                if (i != index)
                {
                    for (int j = 0; j < freq[i] / 2; j++)
                    {
                        char ch = (char)('A' + i);
                        printf("%c", ch);
                    }
                }
            }
            for (int j = 0; j < freq[index]; j++)
            {
                char ch = (char)('A' + index);
                printf("%c", ch);
            }
            for (int i = 25; i >= 0; i--)
            {
                if (i != index)
                {
                    for (int j = 0; j < freq[i] / 2; j++)
                    {
                        char ch = (char)('A' + i);
                        printf("%c", ch);
                    }
                }
            }
            printf("\n");
        }
        else
        {
            printf("NO SOLUTION\n");
        }
        
    }
    return 0;
}