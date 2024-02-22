#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[10] = {0};//char 변수값에서 48을 빼면 1이 됨(아스키 코드)
    int len,output = 0;

    scanf("%s",input);
    len = strlen(input);

    for (int i = 0;i < len - 1;i++)
    {
        if (input[i] == '0')
        {
            input[i] = '1';
            goto out;
        }
    }

    input[len - 1] = input[len - 1] == '0' ? '1' : '0';

    out:;

    printf("%s\n",input);

    for (int i = 0;i < len;i++)
    {
        output += 1 << (len - i - 1) * (input[i] - 48);
        
        //printf("%d\n",output);

        if (input[i] - 48 == 0)
        {
            output--;
        }
    }

    printf("%d",output);

    return 0;
}