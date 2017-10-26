// TODO:
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.



struct House {
    char address[100];
    int price;
    float area;
    int rooms;
};

int worth_to_buy(struct House *house);
int nr_of_houses(struct House all_houses[]);


int main() {

    struct House all_houses[] = {
        {"One Str. 1", 40000, 300, 3},
        {"Two Str. 2", 30000, 150, 2},
        {"Three Str. 3", 10000, 70, 1},
        {"Four Str. 4", 20000, 50, 2},
        {"Five Str. 5", 10000, 200, 1}
    };

    nr_of_houses(&all_houses[5]);

    return 0;
}

int worth_to_buy(struct House *house)
{
    float sqrm_price = house->price / house->area;

    if (sqrm_price <= 400){
        printf("Worth buying.\n");
        return 1;
    } else {
        printf("Not worth buying.\n");
        return 0;
    }
}


int nr_of_houses(struct House all_houses[])
{
    int number = 0;
    int len = strlen(all_houses);

    for (int i = 0; i < len-1; i++){
        if (worth_to_buy(&all_houses[i])==1)
            number++;
    }
    printf("Nr. of houses worth buying: %d\n", number);

    return number;
}
