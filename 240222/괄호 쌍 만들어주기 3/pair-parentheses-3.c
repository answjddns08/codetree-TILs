#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[100] = {0};
    int sum = 0;

    scanf("%s",&input);

    for (int i = 0;i < strlen(input);i++)
    {
        if (input[i] == '(')
        {
            for (int j = i + 1;j < strlen(input);j++)
            {
                if (input[j] == ')')
                {
                    sum++;
                }
            }
        }
    }

    printf("%d",sum);

    return 0;
}