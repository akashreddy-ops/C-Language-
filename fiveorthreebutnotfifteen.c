# include <stdio.h>
int main()
{
    int n;
    printf ("enter a number :");
    scanf ("%d",&n);
    if (n%5==0 || n%3==0 && n%15!=0){
        printf ("the number is divisible by 5 or 3 but not fifteen");
    }
    else {
        printf ("the bnumber is not maching the required condition");
    }
    return 0;
}