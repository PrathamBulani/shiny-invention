#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the four numbers:\n");
    scanf("%d %d %d %d", &a, &b , &c, &d);
    if (a>b && a>c && a>d)
    {
        printf("The largest no. is %d\n",a);
    }
     else if (b>c && b>d)
    {
        printf("The largest no. is %d\n",b);
    }
     else if (c>d)
    {
        printf("The largest no. is %d\n",c);
    
    }
     else
    {
        printf("The largest no. is %d\n",d);
    }
    return 0;
}