# include <stdio.h>
int main(){
    int n;
    printf ("Enter a Number :");
    scanf("%d",&n);
    int nsp = n-1;
    for (int i=1;i<=n;i++){
        int a= i - 1;
        for (int q=1;q<=n-1;q++){            // Space  ka liye ek loop
            printf (" ");
        }
        nsp--;
        for (int j=1;j<=i;j++){      // Number triangle 
            printf ("%d",j);                 
        }
        for (int k=1; k<=i-1;k++){
            printf ("%d",a);
            a--;
        }
        printf ("\n");
    }
    return 0;
}