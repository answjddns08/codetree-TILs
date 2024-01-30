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
        if (r == n)
        {
            dir = 'L';
        }
        else if (r == 0)
        {
            dir = 'R';
        }
        else if (c == n)
        {
            dir = 'U';
        }
        else if (c == 0)
        {
            dir = 'D';
        }
        else
        {
            switch (dir)
            {
            case 'U':
                c++;
                break;
            case 'D':
                c--;
                break;
            case 'R':
                r++;
                break;
            case 'L':
                r--;
                break;
            default:
                break;
            }
        }
    }

    printf("%d %d",r + 1,c + 1);

    return 0;
}