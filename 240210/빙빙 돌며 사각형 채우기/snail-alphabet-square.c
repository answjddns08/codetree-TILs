#include <stdio.h>

int main(void)
{
    int n,m;//n은 행(세로),m은 열(가로)
    char map[100][100] = {0,};
    int y = 0,x = 0;//y는 행,x는 열
    /**
     * 0이면 x+
     * 1이면 y-
     * 2면 x-
     * 3이면 y+
    */
    int dir = 0;

    scanf("%d %d",&n,&m);

    int temp = 0;

    for (int i = 0;i < n * m;i++)
    {
        map[y][x] = temp + 65;
        
        temp = temp > 25 ? 0 : temp + 1;
        //printf("%d %d\n",y,x);

        switch (dir)
        {
        case 0:
            if (x + 1 < m && map[y][x + 1] == 0)
            {
                x++;
            }
            else
            {
                dir++;
                y++;
            }
            break;
        case 1:
            if (y + 1 < n && map[y + 1][x] == 0)
            {
                y++;
            }
            else
            {
                dir++;
                x--;
            }
            break;
        case 2:
            if (x - 1 >= 0 && map[y][x - 1] == 0)
            {
                x--;
            }
            else
            {
                dir++;
                y--;
            }
            break;
        case 3:
            if (y - 1 >= 0 && map[y - 1][x] == 0)
            {
                y--;
            }
            else
            {
                dir = 0;
                x++;
            }
            break;
        default:
            break;
        }
    }

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            printf("%c ",map[i][j]);
        }
        printf("\n");
    }

    return 0;
}