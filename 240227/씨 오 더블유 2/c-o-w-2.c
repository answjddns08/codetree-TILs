#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char input[100] = {0};
    int sum = 0;

    scanf("%d\n%s",&n,&input);

    for (int i = 0;i < n;i++)
    {
        if (input[i] == 'C')
        {
            for (int j = i + 1;j < n;j++)
            {
                if (input[j] == 'O')
                {
                    for (int k = j + 1;k < n;k++)
                    {
                        if (input[k] == 'W')
                        {
                            sum++;
                        }
                    }
                }
            }
        }
    }

    printf("%d",sum);

    return 0;
}