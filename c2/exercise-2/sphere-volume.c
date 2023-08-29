#include <stdio.h>
#include <math.h>

int main(void)
{
    float sphereRadius = 10.0f;
    float volumeOfASphere = 4.0f/3.0f * M_PI * sphereRadius * sphereRadius * sphereRadius;

    printf("The volume of a sphere with %.f meter radius is %.4f", sphereRadius, volumeOfASphere);
}
