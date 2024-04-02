#include <stdio.h>
void main()
{
    int m1,m2,m3,m4,m5;
    double agg,per;
    printf("Enter the marks of five subjects:\n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/5;
    agg=m1+m2+m3+m4+m5;
    printf("Aggregate marks : %.2f\n",agg);
    printf("Percentage : %.2f\n",per);
}