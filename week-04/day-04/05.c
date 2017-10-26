//05.c

#include <stdio.h>
#include <strings.h>

// TODO:
// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters

// TODO:
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a pointer to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)

// TODO:
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.


struct House {
    char address[100];
    int price;
    int rooms;
    float area;
};

void buy(struct House *house);

int main() {

    struct House house_1;

    strcpy(house_1.address, "Sunny str 1");
    house_1.price = 1000;
    house_1.area = 2;

    buy(&house_1);


    return 0;
}

void buy(struct House *house)
{
    float sqrm_price = house->price / house->area;

    if (sqrm_price <= 400)
        printf("Worth buying.\n");
    else
        printf("Not worth buying.\n");
}
