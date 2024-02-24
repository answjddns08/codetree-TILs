#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    int input[100] = {0};
    int max = 0;

    scanf("%d",&n);

    for (int i = 0;i < n;i++)
    {
        scanf("%d",&input[i]);
    }

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            if (i - j != 1 && i - j != -1 && i != j)
            {
                int temp = input[i] + input[j];

                max = max > temp ? max : temp;
            }
        }
    }

    printf("%d",max);

    return 0;
}