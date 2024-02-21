#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n;
    bool map[20][20] = {0};
    int max = 0;

    scanf("%d",&n);

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            scanf("%d",&map[i][j]);
        }
    }

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            if (map[i][j])
            {
                int temp = 1;

                if (j + 1 < n)
                {
                    temp += map[i][j + 1] ? 1 : 0;
                }

                if (j + 2 < n)
                {
                    temp += map[i][j + 2] ? 1 : 0;
                }

                if (temp == 3)
                {
                    max = 3;
                    goto out;
                }
                else
                {
                    max = max >= temp ? max : temp;
                }
            }
        }
    }

    out:

    printf("%d",max);

    return 0;
}