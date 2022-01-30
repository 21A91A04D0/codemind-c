#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int ia=l*b;
    int width=2*w;
    int oa=(l+width)*(b+width);
    int area=oa-ia;
    int cost=area*c;
    printf("%d",cost);
    return 0;
}