#include <stdio.h>

int Comparing(int x,int y,int range,int map[][100]);

int main(void)
{
    int n,cnt = 0;
    int map[100][100] = {0,};

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
            if (Comparing(j,i,n,map) >= 3)
            {
                cnt++;
            }
        }
    }

    printf("%d",cnt);

    return 0;
}

int Comparing(int x,int y,int range,int map[][100])
{
    int out = 0;

    if (map[x + 1][y] == 1 && x + 1 <= range)
    {
        out++;
    }

    if (map[x - 1][y] == 1 && x - 1 >= 0)
    {
        out++;
    }

    if (map[x][y + 1] == 1 && y + 1 <= range)
    {
        out++;
    }

    if (map[x][y - 1] == 1 && y - 1 >= 0)
    {
        out++;
    }

    return out;
}