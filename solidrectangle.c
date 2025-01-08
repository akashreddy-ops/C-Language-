# include <stdio.h> 
int main()
{
    int n;
    printf ("enter number of rows :");
    scanf ("%d",&n);
    int m;
    printf ("enetr number of columns :");
    scanf ("%d",&m);
    // ************.....upto n no of stars
    for (int i=1;i<=n;i++){    // outer loop -> no of lines
        for (int i=1;i<=m;i++){  // ineer loop -> no of stars in each line 
            printf ("*");
        }                                // no of lines = no of rows
                                        //no of stars in each line = no of columns 
        printf ("\n");       // har line ke baad ek enter maarne ke liya hai
    }
    
    return 0;
}