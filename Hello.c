#include <stdio.h>
int main(void)
{
    int i,j,k;
    int iEnd,jEnd,kEnd;
    int blocks,rows,stars;

    printf("Enter i's starting value ");
    scanf("%d",&i);
    printf("Enter i's ending value ");
    scanf("%d",&iEnd);
    while(i>iEnd)
    {
        printf("Sorry value starting value cant be higher than ending value\n");
        printf("Enter i's starting value ");
        scanf("%d",&i);
        printf("Enter i's ending value ");
        scanf("%d",&iEnd);
    }
        printf("Enter j's starting value ");
        scanf("%d",&j);
        printf("Enter j's ending value ");
        scanf("%d",&jEnd);
        printf("Enter k's starting value ");
        scanf("%d",&k);
        printf("Enter i's ending value ");
        scanf("%d",&kEnd);
        for(blocks=i;blocks<iEnd;blocks++)
        {
            for(rows=j;rows<jEnd;rows++)
            {
                for(stars=k;stars<kEnd;stars++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("\n");
        }

    return 0;
}
