# include <stdio.h>
int main()
{
    int n;
    printf ("enter a no. of rows :");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++){     
        for (int j= 1; j<=i; j++){     // no. triangle to change just "%d",j
            printf ("%d",j);              
        }
        printf ("\n");
    }
    return 0;
}