#include<stdio.h>
#include <stdlib.h>

int main()
{
    float rs1,rs2;
    float f1,f2;
    float length1,length2,totalLength;
    scanf("%f %f",&rs1,&rs2);
    scanf("%f %f",&f1,&f2);
    length1=(rs1/5)/f1;
    length2=(rs2/5)/f2;
    totalLength=length2-length1;

    if(totalLength<0)
    {
        totalLength=totalLength* -1;
    }
    printf("%.2f",totalLength);
}
