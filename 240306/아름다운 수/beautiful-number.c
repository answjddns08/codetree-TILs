#include <stdio.h>
#include <stdbool.h>

int arr[10] = {0};
int len;
int sum = 0;

void BTF_number(int input[10],int pre);

int main(void)
{
    scanf("%d",&len);

    BTF_number(arr,0);

    printf("%d",sum);

    return 0;
}

void BTF_number(int input[10],int pre)
{
    if (pre == len)
    {
        bool isPerfect;

        /*for (int i = 0;i < len;i++)
        {
            printf("%d ",input[i]);
        }
        printf("\n");*/

        for (int i = 0;i < len;i++)
        {
            isPerfect = false;

            switch (input[i])
            {
            case 1:
                isPerfect = true;
                break;
            case 2:
                if (input[i] == 2 && input[i + 1] == 2)
                {
                    isPerfect = true;
                    i += 1;
                }
                else
                {
                    i = len;
                }
                break;
            case 3:
                if (input[i] == 3 && input[i + 1] == 3 && input[i + 2] == 3)
                {
                    isPerfect = true;
                    i += 2;
                }
                else
                {
                    i = len;
                }
                break;
            case 4:
                if (input[i] == 4 && input[i + 1] == 4 && input[i + 2] == 4 && input[i + 3] == 4)
                {
                    isPerfect = true;
                    i += 3;
                }
                else
                {
                    i = len;
                }
                break;
            }
        }

        if (isPerfect)
        {
            //printf("correct!\n");
            sum++;
        }
    }
    else
    {
        for (int i = 1;i <= 4;i++)
        {
            input[pre] = i;
            BTF_number(input,pre + 1);
        }
    }
}