#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct date {
    int year;
    int month;
    int day;
};
typedef struct date date;

struct fruit {
    char name[20];
    int price;
    date expire;
    char throw;
};
typedef struct fruit fruit;

void set_throw(fruit *p, int size) {
    time_t now = time(NULL);
    struct tm *today = localtime(&now);

    char day[15];
    sprintf(day, "%d년 %d월 %d일", today->tm_year + 1900, today->tm_mon + 1, today->tm_mday);
    printf("오늘 날짜는 %s 입니다.\n", day);

    int total_price = 0;

    for (int i = 0; i < size; i++) {
        if (p[i].expire.year <= today->tm_year + 1900 &&
            p[i].expire.month <= today->tm_mon + 1 &&
            p[i].expire.day <= today->tm_mday) {
            p[i].throw = 'y';
            total_price += p[i].price;
        }
    }

    printf("폐기되는 항목들의 총액은 %d원입니다.\n", total_price);
}


void ex01() {
    fruit store[5] = {
        {"apple", 500, {2023, 9, 1}, 'n'},
        {"banana", 500, {2020, 7, 3}, 'n'},
        {"orange", 500, {2020, 8, 1}, 'n'},
        {"melon", 500, {2020, 11, 11}, 'n'},
        {"mango", 500, {2020, 12, 25}, 'n'}
    };

    int size = sizeof(store) / sizeof(store[0]);

    set_throw(store, size);

}

int main(int argc, char *argv[]) {
    ex01();
    return 0;
}
