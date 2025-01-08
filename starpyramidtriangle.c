# include <stdio.h>
int main(){
    int n;
    printf("Enter no of lines :");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for (int i=1;i<=n;i++){  // This condition is for phile line
        printf("*"); 
}
printf("\n");
for(int i=1;i<=n;i++){           
    for (int j=1;j<=nst;j++){   //  This condition is for stars
        printf("*");      
    }
    for (int k=1;k<=nsp;k++){
        printf(" ");  //  This condition is for spaces 
}
  nst--;
  nsp+=2;
  printf("\n");
  return 0;
}
}