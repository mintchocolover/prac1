#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct date{
    int year;
    int month;
    int day;
};
typedef struct date date;

struct fruit{
    char name;
    int price;
    date expire;
    char throw;
};
typedef struct fruit fruit;

int ymd(char *e, int start, int count){
    char tmp[5];
    int i=0;
    for(i=0; i<count; i++){
        tmp[i] = e[i+start];
    }
    tmp[i]='\0';
    return atoi(tmp);
}

void ex_03(){
    fruit any;
    char expday[9];
    
    printf("과일이름 : ");
    gets(any.name);

    printf("가격입력 : ");
    scanf("%d",&any.price);
    while(getchar()!='\n');

    printf("만기일입력 : ");
    gets(expday);

    any.expire.year = ymd(expday,0,4);
    any.expire.month = ymd(expday,4,2);
    any.expire.day = ymd(expday,6,2);

    any.throw = 'n';

    printf("any.name = %s \n",any.name);
    printf("any.price = %d \n",any.price);
    printf("any.year = %d \n",any.expire.year);
    printf("any.moth = %d \n",any.expire.month);
    printf("any.day = %d \n",any.expire.day);
    printf("any.throw = %c \n",any.throw);
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct date{
    int year;
    int month;
    int day;
};
typedef struct date date;

struct fruit{
    char name[10];
    int price;
    date expire;
    char throw;
};
typedef struct fruit fruit;

void ex_04() {
    fruit store[5];
    printf("20193219 박시우\n");

    strcpy(store[0].name, "apple");
    store[0].price = 500;
    store[0].expire.year = 2020;
    store[0].expire.month = 9;
    store[0].expire.day = 1;
    store[0].throw = 'n';

    strcpy(store[1].name, "banana");
    store[1].price = 500;
    store[1].expire.year = 2020;
    store[1].expire.month = 7;
    store[1].expire.day = 3;
    store[1].throw = 'n';

    strcpy(store[2].name, "orange");
    store[2].price = 500;
    store[2].expire.year = 2020;
    store[2].expire.month = 8;
    store[2].expire.day = 1;
    store[2].throw = 'n';

    strcpy(store[3].name, "melon");
    store[3].price = 500;
    store[3].expire.year = 2020;
    store[3].expire.month = 11;
    store[3].expire.day = 11;
    store[3].throw = 'n';

    strcpy(store[4].name, "mango");
    store[4].price = 500;
    store[4].expire.year = 2020;
    store[4].expire.month = 12;
    store[4].expire.day = 25;
    store[4].throw = 'n';

    for (int i = 0; i < 5; i++) {
        printf("%d) name=%s, price=%d, year=%d, month=%d, day=%d, throw=%c\n", i,
               store[i].name, store[i].price, store[i].expire.year,
               store[i].expire.month, store[i].expire.day, store[i].throw);
    }
}



int main(){
    ex_03();
    return 0;
}
