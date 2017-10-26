
struct House {
    char address[100];
    int price;
    float area;
    int rooms;

};

void worth_to_buy(struct House *house);


int main() {

    struct House house_1;

    strcpy(house_1.address, "Sunny str 1");
    house_1.price = 40000;
    house_1.area = 200;
    house_1.rooms = 4;


    worth_to_buy(&house_1);


    return 0;
}

void worth_to_buy(struct House *house)
{
    float sqrm_price = house->price / house->area;

    if (sqrm_price <= 400)
        printf("Worth buying.\n");
    else
        printf("Not worth buying.\n");
}


int nr_of_houses(int arr[])
{
    int number = 0;


    return number;
}
