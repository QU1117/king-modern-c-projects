#include <stdio.h>
#include <math.h>

int main(void)
{
    float sphereRadius;

    printf("Type in the volume of a sphere: ");
    scanf("%f", &sphereRadius);
    
    float volumeOfASphere = 4.0f/3.0f * M_PI * sphereRadius * sphereRadius * sphereRadius;

    printf("The volume of a sphere with %.f meter radius is %.4f\n", sphereRadius, volumeOfASphere);
}
