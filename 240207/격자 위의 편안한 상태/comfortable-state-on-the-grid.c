#include <stdio.h>
#include <stdbool.h>

_Bool checking(int r,int c,int n,_Bool map[100][100]);

int main(void)
{
    int n,m;
    _Bool map[100][100] = { 0, };
    int r,c;

    scanf("%d %d",&n,&m);

    for (int i = 0;i < m;i++)
    {
        scanf("%d %d",&r,&c);

        //printf("intput: %d %d\n",r,c);

        r--;
        c--;

        map[r][c] = 1;//true랑 같음

        printf("%d\n",checking(r,c,n,map));
    }

    return 0;
}

_Bool checking(int r,int c,int n,_Bool map[100][100])
{
    int cnt;

    if (r + 1 <= n && map[r + 1][c])
    {
        cnt++;
    }

    if (r - 1 >= 0 && map[r - 1][c])
    {
        cnt++;
    }

    if (c + 1 <= n && map[r][c + 1])
    {
        cnt++;
    }

    if (c - 1 >= 0 && map[r][c - 1])
    {
        cnt++;
    }

    //printf("%d\n",cnt);

    if (cnt == 3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}