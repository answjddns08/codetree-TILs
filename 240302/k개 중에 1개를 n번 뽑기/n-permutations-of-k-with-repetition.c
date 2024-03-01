#include <stdio.h>

int maxnum,len;
char arr[8] = {0};

void printing(int pre);

int main(void)
{
    scanf("%d %d",&maxnum,&len);

    printing(0);

    return 0;
}

void printing(int pre)
{
    if (pre == len)
    {
        for (int i = 0;i < len;i++)
        {
            printf("%c ",arr[i]);
        }
        printf("\n");
    }
    else
    {
        for (int i = 1;i <= maxnum;i++)
        {
            arr[pre] = i + 48;
            printing(pre + 1);
        }
    }
}