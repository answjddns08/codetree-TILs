#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[100000] = {0, };
    int y = 0,x = 0;
    /**
     * 0은 북(y+)
     * 1는 동(x+)
     * 2는 남(y-)
     * 3은 서(x-) 
    */
    int dir = 0;
    int cnt = 0;

    scanf("%s",&input);

    for (int i = 0;i < strlen(input);i++)
    {
        switch (input[i])
        {
        case 'R':
            dir = (dir + 1) % 4;
            cnt++;
            break;
        case 'L':
            dir = dir == 0 ? 3 : dir - 1;
            cnt++;
            break;
        case 'F':
            switch (dir)
            {
            case 0:
                y++;
                cnt++;
                break;
            case 1:
                x++;
                cnt++;
                break;
            case 2:
                y--;
                cnt++;
                break;
            case 3:
                x--;
                cnt++;
                break;
            default:
                break;
            }
        default:
            break;
        }

        if(x == 0 && y == 0)
        {
            goto out;
        }
    }

    cnt = -1;

    out:

    printf("%d",cnt);

    return 0;
}