#include <stdio.h>

int main(void)
{
    int n,t;
    char input[100000] = {0};
    int map[100][100] = {0};
    int sum = 0;
    /**
     * 0은 북Y+
     * 1은 동X+
     * 2는 남Y-
     * 3은 서X-
    */
    int dir = 0;

    scanf("%d %d\n%s",&n,&t,&input);

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            scanf("%d",&map[i][j]);
        }
    }

    int x = n / 2;
    int y = n / 2;

    sum += map[y][x];
    map[y][x] = 0;

    for (int i = 0;i < t;i++)
    {
        if (input[i] == 'L')
        {
            dir = dir == 0 ? 3 : (dir - 1);
        }
        else if (input[i] == 'R')
        {
            dir = (dir + 1) % 4;
        }
        else
        {
            switch (dir)
            {
            case 0:
                if (y > 0)
                {
                    y--;
                }
                break;
            case 1:
                if (x < n - 1)
                {
                    x++;
                }
                break;
            case 2:
                if (y < n - 1)
                {
                    y++;
                }
                break;
            case 3:
                if (x > 0)
                {
                    x--;
                }
                break;
            }
        }

        //printf("%d %d %d\n",y,x,dir);

        sum += map[y][x];
        map[y][x] = 0;
    }

    printf("%d",sum);

    return 0;
}