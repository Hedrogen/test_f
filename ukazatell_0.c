#include <stdio.h>

void cesar(char *ch , int st)
{
    if (*ch+st>'z')
    {   //97+
        *ch=( ('a'-1)+((*ch+st)%122));
    }
    else
    {
        *ch=*ch+st;
    }
}

int main()
{
    char s; int i;
    scanf("%c %d",&s,&i);
    cesar(&s,i);
    printf("%c",s);
    return 0;
}
