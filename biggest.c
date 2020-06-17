#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is biggest",a);
    }
    else if(b>a && b>c)
    {

        printf("%d is biggest",b);
    }
    else{
        printf("%d is biggest",c);
    }
    return 0;
}
