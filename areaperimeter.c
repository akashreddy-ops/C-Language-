# include <stdio.h>
int main()
{
    int l;
    printf ("enter length :");
    scanf ("%d",&l);
    int b;
    printf ("enter breadth :");
    scanf ("%d",&b);
    int area = l * b;
    int perimeter = 2 * (l + b);
    if(area > perimeter){
        printf ("area is greater is than perimeter");
    }
    else {
        printf ("area is not greater than perimeter");
    }
      return 0;


}