# include <stdio.h>
int main()
{
    int n;
    printf ("enter a no. of rows :");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++){     
        for (int j= 1; j<=n+1-i; j++){     // no. triangle for ulta to change just "n+1-i"
            printf ("%d",j);              
        }
        printf ("\n");
    }
    return 0;
}