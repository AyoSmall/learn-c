// Grouping related values with structures
#include <stdio.h>
#include <stdlib.h>

struct dataset
{
    int id;
    double money;
};

void double_money(struct dataset ins);

int main()
{
    struct dataset worker;
    worker.id = 770;
    worker.money = 2550.50;

    printf("ID is %d\n", worker.id);
    printf("Money = %.2f\n", worker.money);
    double_money(worker);

    return 0;
}

void double_money(struct dataset ins)
{
    printf("Doubling money...\n");
    ins.money *= 2;
    printf("Money = %.2f\n", ins.money);
}