#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// TODO:
// Create a function the constructs a point
// It should take it's x and y coordinate as parameter

// TODO:
// Create a function that takes 2 Points as a pointer and returns the distance between them



typedef struct {
    int x;
    int y;
} point_t;

point_t construct(int x, int y);
float distance(point_t p1, point_t p2);


int main()
{
    point_t p1 = construct(9, 9);
    point_t p2 = construct(10, 10);
    distance(p1, p2);
    printf ("Distance between p1 and p2: %.2f\n", distance(p1, p2));

    return 0;
}


point_t construct(int x, int y)
{
    point_t p = {x, y};
    return p;
}



float distance(point_t p1, point_t p2)
{
    float d = 0;
    d = sqrt(pow((p2.x - p1.x), 2)+pow((p2.y - p1.y),2));
    return d;
}
