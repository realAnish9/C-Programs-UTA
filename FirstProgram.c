#include <Stdio.h>
int main(void)
{
    int i,j,k;
    int iEnd,jEnd,kEnd;
    int blocks,rows,stars;

    printf("Enter i's starting value ");
    scanf("%d",&i);
    printf("Enter i's ending value ");
    scanf("%d",&iEnd);
    printf("Enter j's starting value ");
    scanf("%d",&j);
    printf("Enter j's ending value ");
    scanf("%d",&jEnd);
    printf("Enter k's starting value ");
    scanf("%d",&k);
    printf("Enter i's ending value ");
    scanf("%d",&kEnd);
    for(blocks=i;i<iEnd;i++)
    {
        for(rows=j;j<jEnd;j++)
        {
            for(stars=k;k<kEnd;k++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
