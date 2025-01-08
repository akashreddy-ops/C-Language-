# include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=4;i++){
        for(int j=i;j<=n-1;j++){
            printf("#");
        }
    printf("\n");
    }
    return 0;

}