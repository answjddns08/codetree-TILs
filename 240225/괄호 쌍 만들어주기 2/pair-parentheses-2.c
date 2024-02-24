#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[100] = {0};
    int sum = 0;

    scanf("%s",&input);

    for (int i = 0;i < strlen(input);i++)
    {
        if (input[i] == '(' && input[i + 1] == '(')
        {
            for (int j = i + 1;j < strlen(input);j++)
            {
                if (input[j] == ')' && input[j + 1] == ')')
                {
                    sum++;
                }
            }
        }
    }

    printf("%d",sum);

    return 0;
}