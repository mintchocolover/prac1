#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

struct book {
    char title[50];
    int price;
};
typedef struct book book;
book bo,boo[3],*b;

void ex1(){
    printf("å ���� : ");
    gets(bo.title);
    printf("å ���� : ");
    scanf("%d",&bo.price);

    printf("book.title = %s, book.price = %d",bo.title,bo.price);
}


void ex2(){
int i = 0;
    for(i=0; i<sizeof(boo)/sizeof(book); i++){
        printf("%d) å ���� : ",i);
        gets(boo[i].title);
        printf("%d) å ���� : ",i);
        scanf("%d",&boo[i].price);
        while (getchar() != '\n');        
    }
    for(int i=0; i<sizeof(boo)/sizeof(book); i++){
        printf("book[%d].title = %s, book[%d].price = %d\n",i,boo[i].title,i,boo[i].price);
    }
}

void ex3(){
    b=boo;
    int i=0;
    for(i=0; i<sizeof(boo)/sizeof(book); i++){
        printf("%d) å ���� : ",i);
        gets((b+i)->title);
        printf("%d) å ���� : ",i);
        scanf("%d",&(b+i)->price);
        while(getchar()!='\n');
    }
    for(i=0; i<sizeof(boo)/sizeof(book); i++){
        printf("(p+%d)->title = %s, (p+%d)->price = %d\n",i,(b+i)->title,i,(b+i)->price);
    }
}

struct date {
    int year;
    int month;
    int day;
};
typedef struct date date;

struct fruit {
    char name[50];
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

void set_throw(fruit *p, int size) {
    time_t now = time(NULL);
    struct tm *today = localtime(&now);

    char day[10] = {'\0' , };
    sprintf(day, "%04d%02d%02d", today->tm_year+1900, today->tm_mon+1, today->tm_mday);
    printf("\n���� ��¥ : %s\n", day);

    for(int i=0; i<size; i++) {
        char exp[10] = {'\0' , };
        sprintf(exp, "%04d%02d%02d", (p+i)->expire.year, (p+i)->expire.month, (p+i)->expire.day);

        if(atoi(exp) <= atoi(day)) {
            (p+i)->throw = 'y';
        }
    }
}

void ex4(){
    fruit any;
    char expday[10];

    printf("�����̸� : ");
    gets(any.name);

    printf("���� : ");
    scanf("%d",&any.price);
    while(getchar()!='\n');

    printf("������  : ");
    scanf("%s",expday);

    any.expire.year=ymd(expday,0,4);
    any.expire.month=ymd(expday,4,2);
    any.expire.day=ymd(expday,6,2);

    any.throw = 'n';
    
    printf("any.name = %s\n",any.name);
    printf("any.price = %d\n",any.price);
    printf("any.any.expire.year = %d\n",any.expire.year);
    printf("any.any.expire.month = %d\n",any.expire.month);
    printf("any.expire.day = %d\n",any.expire.day);
    printf("any.throw = %c",any.throw);
}

void ex5(){
    FILE *fp;
    char ch;
    fp = fopen("chars.txt","W");

    printf("�����Է�(q�̸� ����) : ");
    do{
        ch=getche();
        if(ch=='q') break;
        fprintf(fp,"%c",ch);
    }while(1);
    printf("chars.txt ���Ͽ� �����߽��ϴ�.");
    fclose(fp);
}

void ex6(){
    FILE *fp;
    char ch;
    fp = fopen("chars.txt","r");
    printf("chars.txt������ �н��ϴ�.\n");
    do{
        fscanf(fp,"%c",&ch);
        if(feof(fp)) break;
        printf("%c",ch);
    }while(1);
    fclose(fp);
}


void ex7(){
    FILE *fp;
    char str[50];
    fp = fopen("string.txt","w");

    
    do{
        printf("���ڿ��Է� : ");
        fgets(str,sizeof(str),stdin);
        if(str[0]=='\n') break;
        fprintf(fp,"%s",str);
    }while(1);
    printf("�Է��� ���ڿ� ����Ϸ�");
    fclose(fp);
}

void ex8(){
    FILE *fp;
    char str[50];
    fp = fopen("string.txt","r");

    printf("string.txt�� �н��ϴ�.\n");
    do{
        fscanf(fp,"%s",str);
        if(feof(fp)) break;
        printf("%s",str);
    }while(1);
    fclose(fp);
}

void ex9(){
    FILE *fp;
    double doo[5] = {1.1,2.2,3.3,4.4,5.5};
    
    for(int i=0; i<sizeof(doo)/sizeof(double); i++){
        printf("%lf ",doo[i]);
    }    
    
    fp = fopen("doubles.data","wb");

    if(fp==NULL){
        printf("Cannot open file\n");
        return;
    }

    printf("\ndouble.data������ �������ϴ�.\n");

    fwrite(doo,sizeof(doo),1,fp);
    if(ferror(fp)){
        printf("file write error");
        return;
    }
    printf("\ndouble�� �迭�� ������ ����߽��ϴ�.");
    fclose(fp);
}

void ex10(){
    FILE *fp;
    double doo[5];
    
    fp = fopen("doubles.data","rb");

    if(fp==NULL){
        printf("Cannot open file\n");
        return;
    }    
    printf("\ndouble.data������ �������ϴ�.\n");

    fread(doo,sizeof(doo),1,fp);

    if(ferror(fp)){
        printf("file read error\n");
        return;
    }

    for(int i=0; i<sizeof(doo)/sizeof(double); i++){
        printf("%lf ",doo[i]);
    }

    printf("\ndouble�� �迭�� ������ ����߽��ϴ�.\n");
    printf("\nftell = %d\n",ftell(fp));

    printf("\ndiuble.data�� ������ �����Ϳ� �����մϴ�.\n");
    fseek(fp,sizeof(double)*(-1L),SEEK_END);
    printf("\nftell = %d\n",ftell(fp));

    fclose(fp);
}

int main(){
    ex10();
    return 0;
}