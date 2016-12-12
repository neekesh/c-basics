#include <stdio.h>

int main(void)
{
    int a=50000,b,c,d,e,f;
    printf("the salary of Mr.X is 50000 \t");

    printf("\n the absent days of Mr.X \t");
    scanf("%i",&c);

    printf("\novertime work of Mr.X and absent fine per day\t");
    scanf("%i %i",&d,&f);

    printf("\nthe over time charge per day\t");
    scanf("",&e);
    
    //CALCULATION
    b=a-f*c+e*d;
    printf(" \nthe amt that Mr.X shpuld get is %i\t",b);
    return 0;
}
