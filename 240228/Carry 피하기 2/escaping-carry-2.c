#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int comparing(int a,int b,int c);//세 개의 변수중 가장 큰 변수 반환

int main(void)
{
    int n;
    char input[20][10000] = {0};
    int max = -1;

    scanf("%d",&n);

    for (int i = 0;i < n;i++)
    {
        scanf("%s",&input[i]);

        for (int j = 0;j < strlen(input[i]) / 2;j++)//문자열 뒤집음
        {
            char temp = input[i][j];
            input[i][j] = input[i][strlen(input[i]) - j - 1];
            input[i][strlen(input[i]) - j - 1] = temp;
        }
    }

    for (int i = 0;i < n;i++)
    {
        int len1 = strlen(input[i]);
        
        for (int j = i + 1;j < n;j++)
        {
            int len2 = strlen(input[j]);

            for (int k = j + 1;k < n;k++)
            {
                int len3 = strlen(input[k]);
                int maxlen = comparing(len1,len2,len3);
                bool iscarry = false;

                for (int l = 0;l < maxlen;l++)
                {
                    if (9 < (input[i][l] + input[j][l] + input[k][l]) % 48)
                    {
                        iscarry = true;
                        break;
                    }
                }

                //printf("%s %s %s\n",input[i],input[j],input[k]);

                if (!iscarry)
                {
                    int temp = -1;
                    for (int l = 0;l < maxlen;l++)
                    {
                        temp += pow(10,l) * ((input[i][l] + input[j][l] + input[k][l]) % 48);
                    }
                    //printf("%d\n",temp);
                    max = temp > max ? temp + 1 : max;
                }
            }
        }
    }

    printf("%d",max);

    return 0;
}

int comparing(int a,int b,int c)//세 개의 변수중 가장 큰 변수 반환
{
    if (a >= b && a >= c)//a가 가장크면 a반환
    {
        return a;
    }

    if (b >= a && b >= c)//b가 가장크면 b반환
    {
        return b;
    }

    return c;
}