#include <stdio.h>
float money(float x,float y,int z)
{
    if(z==1) return x*(1+y/12);
    else if(z>1) return (money(x,y,z-1)+x)*(1+y/12);
    else return 0;
   
}
int main()
{
    float x,y;int z;//每月存款数、年利率、月份数
    scanf("%f,%f,%d",&x,&y,&z);
    if(z>0)
    printf("%.2lf",money(x,y,z));
    return 0;
}

