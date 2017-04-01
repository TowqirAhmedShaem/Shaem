#include<math.h>
//Page-10,Fig-1.8
#define pi 3.1416
#define max 180
main()
{
    int angle;
    float x,y;
    angle=0;
    printf("Angle  Cos(angle)\n");
    while(angle<=180)
    {
        x=(pi/180)*angle;
        y=cos(x);
        printf("%d  %f\n",angle,y);
        angle=angle+10;
    }
}
