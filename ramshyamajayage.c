# include <stdio.h>
int main()
{
    int a;
    printf ("enter ram age :");
    scanf ("%d",&a);
    int b;
    printf ("enter shyam age :");
    scanf ("%d",&b);
    int c;
    printf ("enter ajay age :");
    scanf ("%d",&c);
    if (a>b && a>c){
        printf ("ram is greater age consid shyam and ajay");
    }
    if (b>a && b>c) {
        printf ("shyam is greater age consid ram and ajay");

    }
    if (c>a && c>b){
        printf ("ajay is greater age consid ram and shyam");
    }
    return 0;
}