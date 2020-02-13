#include <stdio.h>
int main(void)
{
    int i,j,k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            for(k=0;k<6;k++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
}
