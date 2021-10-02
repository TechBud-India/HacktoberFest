#include<stdio.h>

void swap(int a, int b)  //a = 3 ; b = 7
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("a = %d, b = %d\n\n",a,b);
}

int main()
{
    int x=3,y=7;
    swap(x,y);
    printf("x = %d, y = %d",x,y);
    return 0;
}


