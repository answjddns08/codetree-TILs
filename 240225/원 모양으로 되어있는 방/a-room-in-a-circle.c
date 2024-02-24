#include <stdio.h>

int main(void)
{
    int n;
    int pep[1003] = {0};
    int min = 2147483647;

    scanf("%d",&n);

    for (int i = 0;i < n;i++)
    {
        scanf("%d",&pep[i]);
    }

    for (int i = 0;i < n;i++)
    {
        int temp = 0;

        for (int j = 0;j < n;j++)
        {
            if (i > j)
            {
                temp += pep[j] * (n - i + j);
                //printf("i > j:%d\n",pep[j] * (n - i + j));
            }
            else
            {
                temp += pep[j] * (j - i);
                //printf("else:%d\n",pep[j] * (j - i));
            }
        }

        min = min > temp ? temp : min;
    }

    printf("%d",min);

    return 0;
}