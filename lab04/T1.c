#include <stdio.h>

char s[1005];
char ch;

int main()
{
    int i = 0;
    int flag = 1;
    while ((ch = getchar()) != '@')
    {
        if (ch == '(' || ch == '[' || ch == '{')
        {
            s[i++] = ch;
        }
        if (ch == ')' || ch == ']' || ch == '}')
        {
            if (i == 0) 
            { 
                flag = 0; 
                break; 
            }
            char top = s[i - 1];
            if ((ch == ')' && top == '(') || (ch == ']' && top == '[') || (ch == '}' && top == '{')) 
                i--;
            else
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1 && i == 0) printf("YES");
    else printf("NO");
    return 0;
}