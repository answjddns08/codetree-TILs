#include <stdio.h>

int main(void)
{
    int n;
    int dis;
    /**
     * N은 북(y+)
     * E는 동(x+)
     * W는 서(x-)
     * S는 남(y-)
    */
    char dir;
    int x = 0,y = 0;
    int cnt = 0;

    scanf("%d\n",&n);

    for (int i = 0;i < n;i++)
    {
        scanf("%c %d\n",&dir,&dis);

        //printf("%c %d\n",dir,dis);

        switch (dir)
        {
        case 'N':
            for (int j = 0;j < dis;j++)
            {
                y++;
                cnt++;
                if(x == 0 && y == 0)
                {
                    goto out;
                }
            }
            break;
        case 'E':
            for (int j = 0;j < dis;j++)
            {
                x++;
                cnt++;
                if(x == 0 && y == 0)
                {
                    goto out;
                }
            }
            break;
        case 'W':
            for (int j = 0;j < dis;j++)
            {
                x--;
                cnt++;

                if(x == 0 && y == 0)
                {
                    goto out;
                }
            }
            break;
        case 'S':
            for (int j = 0;j < dis;j++)
            {
                y--;
                cnt++;

                if(x == 0 && y == 0)
                {
                    goto out;
                }
            }
            break;
        default:
            break;
        }
        
    }

    cnt = -1;

    out:

    printf("%d",cnt);

    return 0;
}