#include <stdio.h>

int main(void)
{
    int map[19][19] = {0};
    int output = 0;
    int r = 0,c = 0;

    for (int i = 0;i < 19;i++)
    {
        for (int j = 0;j < 19;j++)
        {
            scanf("%d",&map[i][j]);
        }
    }

    for (int i = 0;i < 19;i++)
    {
        for (int j = 0;j < 19;j++)
        {
            if (map[i][j] && (2 <= i && i <= 16) && (2 <= j && j <= 16))
            {
                int temp = map[i][j];

                for (int l = 0;l <= 3;l++)
                {
                    int com = 0;

                    for (int k = -2;k <= 2;k++)
                    {
                        switch (l)
                        {
                        case 0://가로
                            com += (temp == map[i][j + k]) ? 1 : 0;
                            break;
                        case 1://세로
                            com += (temp == map[i + k][j]) ? 1 : 0;
                            break;
                        case 2://대각선(왼위 -> 오른아래)
                            com += (temp == map[i + k][j - k]) ? 1 : 0;
                            break;
                        default://대각선(오른위 -> 왼아래)
                            com += (temp == map[i - k][j + k]) ? 1 : 0;
                            break;
                        }
                    }

                    //printf("%d %d %d\n",i,j,com);

                    if (com == 5)
                    {
                        //printf("complete!\n");
                        output = temp;
                        r = i;
                        c = j;
                        goto out;
                    }
                }
            }
        }
    }

    out:;

    printf("%d\n",output);
    
    if (output != 0)
    {
        printf("%d %d",r + 1,c + 1);
    }

    return 0;
}