# include <stdio.h>
int main()
{
    int n;
    printf ("enter a no. of rows :");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++){     //NO OF LINES / ROWS -> I
        for (int j= 1; j<=n; j++){   // NO OF COLUMNS -> J
            printf ("%d",i);
        }
        printf ("\n");
    }
    return 0;
}