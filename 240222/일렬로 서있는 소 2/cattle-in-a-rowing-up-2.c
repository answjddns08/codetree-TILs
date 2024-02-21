#include <stdio.h>

int main(void)
{
    int n;
    int height[100] = {0};
    int com = 0;

    scanf("%d",&n);

    for (int i = 0;i < n;i++)
    {
        scanf("%d",&height[i]);
    }

    for (int i = 0;i < n;i++)
    {
        for (int j = i + 1;j < n;j++)
        {
            for (int k = j + 1;k < n;k++)
            {
                if (height[i] <= height[j] && height[j] <= height[k])
                {
                    com++;
                }
            }
        }
    }

    printf("%d",com);

    return 0;
}