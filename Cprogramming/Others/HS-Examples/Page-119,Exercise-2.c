#include<stdio.h>
/*
//First method is done by using global variable.
int soundspeed();
double distance;// it is global variable.
int main()
{
    printf("Pls give the distance of sound :\a\n");
    scanf("%lf",&distance);
    soundspeed();
    return 0;
}
int soundspeed()
{
    printf("Travel time of sound : %lf",distance/1129);
}
*/

//Second method is done by using local variable.
int soundspeed(double distance);
int main()
{
    double distance;//Local variable.
    printf("Pls give the sound distance :\a\n");
    scanf("%lf",&distance);
    soundspeed(distance);
    return 0;
}
int soundspeed(double distance)
{
    printf("Travel Time is : %lf",distance/1129);
}
