#include <stdio.h>

// TODO:
// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
    enum CarType type;
    double km;
    double gas;
};



int main()
{

    struct Car car_1 = {.type = TESLA, .km = 356, .gas = 45};

    if (car_1.type != TESLA){
    printf("Data of car no.%d:\nkm:%.0f, gas:%.0fl\n", car_1.type+1, car_1.km, car_1.gas);
    } else {
        printf("Data of car no.%d:\nkm:%.0f\n", car_1.type+1, car_1.km);
    }

    return 0;
}
