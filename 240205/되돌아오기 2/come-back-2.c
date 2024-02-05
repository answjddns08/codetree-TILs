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

    scanf("%s",input);

    for (int i = 0;i < strlen(input);i++)
    {
        switch (input[i])
        {
        case 'R':
            dir = (dir + 1) % 4;
            cnt++;
            break;
        case 'L':
            dir = dir - 1 >= 0 ? dir - 1 : 3;
            cnt++;
        case 'F':
            switch (dir)
            {
            case 0:
                y++;
                cnt++;
                if(x == 0 && y == 0)
                {
                    goto out;
                }
                break;
            case 1:
                x++;
                cnt++;
                if(x == 0 && y == 0)
                {
                    goto out;
                }
                break;
            case 2:
                y--;
                cnt++;
                if(x == 0 && y == 0)
                {
                    goto out;
                }
                break;
            case 3:
                x--;
                cnt++;
                if(x == 0 && y == 0)
                {
                    goto out;
                }
                break;
            default:
                break;
            }
        default:
            break;
        }
    }

    cnt = -1;

    out:

    printf("%d",cnt);

    return 0;
}