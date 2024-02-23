#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    int x[100] = {0},y[100] = {0};
    int dis = 2147483647;

    scanf("%d",&n);

    for(int i = 0;i < n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }

    for (int i = 1;i < n - 1;i++)
    {
        int com = 0;
        int tem1 = x[0],tem2 = y[0];
        for (int j = 1;j < n;j++)
        {
            if (j != i)
            {
                com += abs(tem1 - x[j]) + abs(tem2 - y[j]);
                tem1 = x[j];
                tem2 = y[j];
                //printf("%d\n",com);
            }
        }
        dis = dis > com ? com : dis;
    }

    printf("%d",dis);

    return 0;
}