#include <stdio.h>
//true
void delitel(int *x, int *y)
{
    while(*x!=*y)
    {
        if (*x>*y) *x=*x-*y;
        else *y=*y-*x;
    }
}
int main()
{
    int x1,x2;
    scanf("%d%d",&x1,&x2);
    delitel(&x1,&x2);
    printf("%d",x1);
}
