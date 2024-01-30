#include <stdio.h>

int main(void)
{
    int n,t;
    int r,c;//행(r):가로,열(c):세로
    char dir;

    /**
     * 85 U
     * 68 D
     * 82 R
     * 76 L
    */

    scanf("%d %d",&n,&t);
    scanf("%d %d %c",&r,&c,&dir);

    for (int i = 0;i < t;i++)
    {
        switch (dir)
        {
        case 'U':
            if (r == 1)
            {
                dir = 'D';
            }
            else 
            {
                r--;
            }
            break;
        case 'D':
            if (r == n)
            {
                dir = 'U';
            }
            else 
            {
                r++;
            }
            break;
        case 'R':
        if (c == n)
            {
                dir = 'L';
            }
            else 
            {
                c++;
            }
            break;
        case 'L':
            if (c == 1)
            {
                dir = 'R';
            }
            else 
            {
                c--;
            }
            break;
        default:
            break;
        }
    }

    printf("%d %d",r,c);

    return 0;
}