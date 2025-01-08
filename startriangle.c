# include <stdio.h>
int main()
{
    int n;
    printf ("enter a no. of rows :");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++){     //NO OF LINES / ROWS -> I
        for (int j= 1; j<=i; j++){   // NO OF COLUMNS -> J
            printf ("*");              // star triangle for big to small is just change "j<=i"
        }
        printf ("\n");
    }
    return 0;
}