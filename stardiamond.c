# include <stdio.h>
int main(){
    int n;
    printf ("Enter a Number:");
    scanf ("%d",&n);
    int nsp =n/2;
    int nst=1;
    int ml=n/2+1;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=nsp;j++){   //for this condition is spaces 
        printf(" ");
        }
        for(int k=1;k<=nst;k++){    // This condition is for stars
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;

        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;

}
