#include <stdio.h>
#include <string.h>

int Nice(char s[], int start, int end)
{
    int lower[26] = {0}, upper[26] = {0};
    int i;
    for(i = start; i <= end; i++)
    {
        char c = s[i];
        if(c >= 'a' && c <= 'z')
            lower[c - 'a'] = 1;
        if(c >= 'A' && c <= 'Z')
            upper[c - 'A'] = 1;
    }
    for(i = 0; i < 26; i++)
    {
        if(lower[i] != upper[i])
        {
            if(lower[i] || upper[i])
                return 0;
        }
    }
    return 1;
}

int main()
{
    char s[100];
    int maxLen = 0, startIdx = 0;
    int n, i, j, k;

    printf("Digite uma string:");
    scanf("%s", s);

    n = strlen(s);

    for(i = 0; i < n; i++)
    {
        for(j = i; j < n; j++)
        {
            if(Nice(s, i, j) && (j - i + 1 > maxLen))
            {
                maxLen = j - i + 1;
                startIdx = i;
            }
        }
    }

    printf("Longest Nice Substring:");
    if(maxLen == 0)
    {
        printf("\n");
    }
    else
    {
        for(k = startIdx; k < startIdx + maxLen; k++)
            putchar(s[k]);
        printf("\n");
    }
    return 0;
}

