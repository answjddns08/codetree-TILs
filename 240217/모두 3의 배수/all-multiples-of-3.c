#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n;
    bool is3 = true;

    for (int i = 0;i < 5;i++)
    {
        scanf("%d",&n);
        
        if(n % 3 != 0)
        {
            is3 = false;
            break;
        }
    }

    printf("%d",is3);

    return 0;
}