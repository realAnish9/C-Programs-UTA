/* Anish Thakur 1001752184 */
#include <stdio.h>
int main(void)
{
    int i,j,k;
    int iEnd,jEnd,kEnd;
    int blocks,rows,stars;

    printf("Enter i's starting value ");
    scanf("%d",&i);
    printf("\nEnter i's ending value ");
    scanf("%d",&iEnd);
    printf("\nEnter j's starting value ");
    scanf("%d",&j);
    printf("\nEnter j's ending value ");
    scanf("%d",&jEnd);
    printf("\nEnter k's starting value ");
    scanf("%d",&k);
    printf("\nEnter i's ending value ");
    scanf("%d",&kEnd);
    printf("\n\n");

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
