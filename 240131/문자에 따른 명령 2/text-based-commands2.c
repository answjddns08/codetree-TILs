#include <stdio.h>
#include <string.h>

int main(void)
{
    int dir = 0,x = 0,y = 0,len;
    char input[100000];

    /**dir이
     * 0이면 북
     * 1이면 동
     * 2이면 남
     * 3이면 서
     * 4면 다시 북으로(0으로 초기화)
    */

    scanf("%s",&input);

    len = strlen(input);

    for (int i = 0;i < len;i++)
    {
        switch (input[i])
        {
        case 'L':
            dir = dir == 0 ? 3 : dir - 1;
            break;
        case 'R':
            dir = (dir + 1) % 4;
            break;
        case 'F':
            switch (dir)
            {
            case 0:
                y++;
                break;
            case 1:
                x++;
                break;
            case 2:
                y--;
                break;
            case 3:
                x--;
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
    }
    printf("%d %d",x,y);

    return 0;
}