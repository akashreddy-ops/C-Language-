# include <stdio.h>
int main()
{
    int n;
    printf ("Enter a no. of rows :");
    scanf ("%d",&n);
    int a = 1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            printf ("%d ",a);
            a = a + 2;             //int a=1;     //  a=a+2;
        }
        printf ("\n");

    }
     
    return 0;
}