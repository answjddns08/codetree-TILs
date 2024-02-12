#include <stdio.h>

    int main(void)
    {
        unsigned short n;
        unsigned short map[100][100] = {0};
        unsigned short x = 0,y = 0;
        unsigned short num = 1;
        unsigned short cnt = 1;
        /**
         * 0이면x+
         * 1이면y+
         * 2이면x-
         * 3이면y-
        */
        unsigned short dir = 0;

        scanf("%d",&n);

        x = n / 2;
        y = n / 2;

        while ((x < n && y < n) && (x >= 0 && y >= 0))
        {
            for (int i = 0;i < 2;i++)
            {
                for (int j = 0;j < cnt;j++)
                {
                    map[y][x] = num;
                    if (dir == 0)
                    {
                        /*if (x < n)
                        {
                            x++;
                        }
                        else
                        {
                            goto out;
                        }*/
                        x++;
                    }
                    else if (dir == 1)
                    {
                        /*if (y >= 0)
                        {
                            y--;
                        }
                        else
                        {
                            goto out;
                        }*/
                        y--;
                    }
                    else if (dir == 2)
                    {
                        /*if (x >= 0)
                        {
                            x--;
                        }
                        else
                        {
                            goto out;
                        }*/
                        x--;
                    }
                    else
                    {
                        /*if (y < n)
                        {
                            y++;
                        }
                        else
                        {
                            goto out;
                        }*/
                        y++;
                    }
                    num++;
                }
                dir = (dir + 1) % 4;
            }
            cnt++;
        }

        out:

        for (int i = 0;i < n;i++)
        {
            for (int j = 0;j < n;j++)
            {
                printf("%d ",map[i][j]);
            }
            printf("\n");
        }
        
        return 0;
    }