//04.c

// TODO:
// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface

// TODO:
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume


#include <stdio.h>


struct rectangular_cuboid {
    double a;
    double b;
    double c;
};

float GetSurface (double a, double b, double c);
float GetVolume (double a, double b, double c);

int main()
{
    printf ("Surface: %.2f units^2\n" , GetSurface(2, 3, 4));
    printf ("Volume: %.2f units^3\n", GetVolume(2, 3, 4));
    return 0;
}



float GetSurface (double a, double b, double c)
{
    struct rectangular_cuboid cube = {a, b, c};
    float surface = 2 * (cube.a * cube.b + cube.a * cube.c + cube.b * cube.c);
    return surface;
}


float GetVolume (double a, double b, double c)
{
    struct rectangular_cuboid cube = {a, b, c};
    float volume = cube.a * cube.b * cube.c;
    return volume;
}
