#include <stdio.h>

int main(void)
{
    char map[1000][1000] = {0,};
    int n;
    int dir = 0;
    int x,y;
    int cnt = 1;

    scanf("%d",&n);

    for (int i = 0;i < n;i++)
    {
        scanf("%s",&map[i]);
    }

    scanf("%d",&dir);

    dir--;

    switch (dir / n)
    {
    case 0:
        y = 0;
        x = dir;
        dir = 0;//y-
        break;
    case 1:
        y = dir - n;
        x = n - 1;
        dir = 1;//x-
        break;
    case 2:
        y = n - 1;
        x = (3 * n - dir) - 1;
        dir = 2;//y+
        break;
    case 3:
        y = (4 * n - dir) - 1;
        x = 0;
        dir = 3;//x+
        break;
    }

    while (1)
    {
        if (map[y][x] == '/')
        {
            dir = dir == 0 ? 3 : dir - 1;
        }
        else// ||역슬레시인 경우
        {
            dir = (dir + 1) % 4;
        }

        //printf("bounce!\n");
        
        cnt++;

        switch (dir)
        {
        case 0://y-
            y--;

            if (y < 0)
            {
                goto out;
            }
            break;
        case 1://x-
            x--;

            if (x < 0)
            {
                goto out;
            }
            break;
        case 2://y+
            y++;

            if (y >= n)
            {
                goto out;
            }
            break;
        case 3://x+
            x++;

            if (x >= n)
            {
                goto out;
            }
            break;
        default:
            break;
        }

    }
    
    out:

    printf("%d",cnt);

    return 0;
}