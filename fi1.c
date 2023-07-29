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
    printf("책 제목 : ");
    gets(bo.title);
    printf("책 가격 : ");
    scanf("%d",&bo.price);

    printf("book.title = %s, book.price = %d",bo.title,bo.price);
}


void ex2(){
int i = 0;
    for(i=0; i<sizeof(boo)/sizeof(book); i++){
        printf("%d) 책 제목 : ",i);
        gets(boo[i].title);
        printf("%d) 책 가격 : ",i);
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
        printf("%d) 책 제목 : ",i);
        gets((b+i)->title);
        printf("%d) 책 가격 : ",i);
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
    printf("\n오늘 날짜 : %s\n", day);

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

    printf("과일이름 : ");
    gets(any.name);

    printf("가격 : ");
    scanf("%d",&any.price);
    while(getchar()!='\n');

    printf("만기일  : ");
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

    printf("문자입력(q이면 종료) : ");
    do{
        ch=getche();
        if(ch=='q') break;
        fprintf(fp,"%c",ch);
    }while(1);
    printf("chars.txt 파일에 저장했습니다.");
    fclose(fp);
}

void ex6(){
    FILE *fp;
    char ch;
    fp = fopen("chars.txt","r");
    printf("chars.txt파일을 읽습니다.\n");
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
        printf("문자열입력 : ");
        fgets(str,sizeof(str),stdin);
        if(str[0]=='\n') break;
        fprintf(fp,"%s",str);
    }while(1);
    printf("입력한 문자열 저장완료");
    fclose(fp);
}

void ex8(){
    FILE *fp;
    char str[50];
    fp = fopen("string.txt","r");

    printf("string.txt를 읽습니다.\n");
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

    printf("\ndouble.data파일을 열었습니다.\n");

    fwrite(doo,sizeof(doo),1,fp);
    if(ferror(fp)){
        printf("file write error");
        return;
    }
    printf("\ndouble형 배열의 내용을 출력했습니다.");
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
    printf("\ndouble.data파일을 열었습니다.\n");

    fread(doo,sizeof(doo),1,fp);

    if(ferror(fp)){
        printf("file read error\n");
        return;
    }

    for(int i=0; i<sizeof(doo)/sizeof(double); i++){
        printf("%lf ",doo[i]);
    }

    printf("\ndouble형 배열의 내용을 출력했습니다.\n");
    printf("\nftell = %d\n",ftell(fp));

    printf("\ndiuble.data의 마지막 데이터에 접근합니다.\n");
    fseek(fp,sizeof(double)*(-1L),SEEK_END);
    printf("\nftell = %d\n",ftell(fp));

    fclose(fp);
}

int main(){
    ex10();
    return 0;
}