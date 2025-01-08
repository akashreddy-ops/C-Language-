# include <stdio.h>
# include <math.h>                                         // # include <stdio.h>
                                                           // printf("Hello")
                                                           // scanf("%d",&n)
                                                           // sqrt(49)
                                                           //pow(2,5)
int main(){
    int a;
    printf("Enter a Number :");
    scanf("%d",&a);
    int root = sqrt(a);
    printf("The square root is : %d",root);
    return 0;
}