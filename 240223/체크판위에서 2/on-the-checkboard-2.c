#include <stdio.h>
#include <stdbool.h>

bool map[15][15] = {0};
int r,c;
int sum = 0;

void Function(int y,int x,bool pre,int cnt);

int main(void)
{
    char input;

    scanf("%d %d ",&r,&c);

    for (int i = 0;i < r;i++)
    {
        for (int j = 0;j < c;j++)
        {
            scanf("%c ",&input);
            map[i][j] = input == 'B' ? false : true;
        }
    }

    Function(0,0,map[0][0],0);

    printf("%d",sum);

    return 0;
}

void Function(int y,int x,bool pre,int cnt)
{
    if (cnt == 3 && y == r - 1 && x == c - 1)
    {
        sum++;
    }
    else
    {
        for (int i = y + 1;i < r;i++)
        {
            for (int j = x + 1;j < c;j++)
            {
                if (map[i][j] != pre)
                {
                    printf("%d %d %d\n",i,j,cnt);
                    Function(i,j,map[i][j],cnt + 1);
                }
            }
        }
    }
}