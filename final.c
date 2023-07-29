#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


int mycmp(char *sa,char *sb){
    return strcmp(sa,sb);
}
void ex1(){
    char stra[] = "apple";
    char strb[] = "appla";
    int result = mycmp(stra,strb);
    if (result)
    printf("??? ?????????.");
    else
    printf("???? ?????????.");
}


// void ex1(int argc, char *argv[]){
//     printf("argc=%d\n",argc);

//     for(int i=0; i<argc; i++){
//         printf("argv[%d]=%s\n",i,argv[i]);
//     }
// }

int mystrlen(char *s){
    int len=0;
    while(*s){
        len++;
        s++;
    }
    return len;
}

void ex2(){
    char str[50];
    printf("??????? ??????? : ");
    gets(str);
    int result = mystrlen(str);
    printf("??????? ????? %d????.",result);
}

int mystrchcnt(char *s,char c){
    int cnt = 0;
    while(*s){
        if(*s==c){
            cnt++;
        }
        s++;
    }
    return cnt;     //return?? while roop ?????? ??????? ??
}

void ex3(){
    char str[50];
    char ch;

    printf("??????? ??????? : ");
    gets(str);
    printf("????? ??????? : ");
    scanf("%c",&ch);

    int result = mystrchcnt(str,ch);
    printf("%s ???? %c ?? ?????? %d??????.",str,ch,result);
}

int strcmp2dim(char (*p)[50]){
    if(strcmp(p[1],p[2])){
        return -1;
    }else
    return 0;
}

void ex4(){
    char str[2][50];
    printf("???° ????? ??? : ");
    gets(str[1]);
    printf("?ι?° ????? ??? : ");
    gets(str[2]);

    int result = strcmp2dim(str);
    printf("%d",result);
}

# define SIZE 5

void mysort(int *ary, int *sortary){
    int i,j,temp;

    for(i=0; i<SIZE; i++) sortary[i]=ary[i];

    for(i=SIZE-1; i>=0; i--){
        for(j=1; j<=i; j++){                     //????????
            if(sortary[j-1]>sortary[i]){
                temp = sortary[j-1];
                sortary[j-1] = sortary[j];
                sortary[j] = temp;
            }
        }
    }
}

void ex5(char *argv[]){
    int ary[SIZE],sortary[SIZE];

    for(int i=0; i<SIZE; i++) ary[i]=atoi(argv[i+1]);

    mysort(ary,sortary);

    printf("ary = ");
    for(int i=0; i<SIZE; i++) printf("%d ",ary[i]);
    printf("sortary = ");
    for(int i=0; i<SIZE; i++) printf("%d ",sortary[i]);

}


// int main(int argc,char *argv[]){
//     if((argc-1)!=SIZE){
//         printf("???? ??????? ????????.");
//         exit(0);
//     }
//     ex5(argv);
//     return 0;
// }

struct neighbor {
    char name[50];
    int age;
    char phone[20];
};
typedef struct neighbor neighbor;

neighbor our[3] = {
{"sulivun",25,"010-1234-5678"},
{"matilda",35,"010-2689-6273"},
{"jason",22,"010-4321-9876"}
};

void ex6(){
    for (int i = 0; i < sizeof(our)/sizeof(our[1]); i++) {
        printf("???: %s\n", our[i].name);
        printf("????: %d\n", our[i].age);
        printf("???: %s\n", our[i].phone);
        printf("\n");
    }
}

struct date {
	int year;
	int month;
	int day;
};
typedef struct date date;

struct fruit {
	char name[20];  //??????? name(?????), 
	int price; //???? price(????)       
	date expire; //?????? expire(1???? date ???) 
	char throw;  //????? throw(??y?? ??? ??n??)  
};
typedef struct fruit fruit;

void set_throw(fruit *p, int size) {
  //???? ??????? ???? ????? ????, 
  //????????? ??????(expire) ?????? ???? ??????? ???? ????? 
  //?????(throw)?? ??y??, ????? ???? ????? ??n?????? ???????.
}

void print_all(fruit *f, int size) {
  //??????? ??? ????? ??????.
    for(int i=0; i<size; i++) {
        printf("%d) name=%s, price=%d, year=%d, month=%d, day=%d, throw=%c\n", 
            i, (f+i)->name, (f+i)->price, 
            (f+i)->expire.year, (f+i)->expire.month, (f+i)->expire.day, (f+i)->throw);
    }

}

void ex_08() {
    fruit store[5] = {
        "apple", 500, 2023, 9, 1, 'n',
        "banana", 500, 2020, 7, 3, 'n',
        "orange", 500, 2020, 8, 1, 'n',
        "melon", 500, 2020, 11, 11, 'n',
        "mango", 500, 2020, 12, 25, 'n'
    };
    fruit *p;

    p=store;

    print_all(p, sizeof(store)/sizeof(store[0]));

    time_t now = time(NULL);
    struct tm *today = localtime(&now);

    printf("\n???? ??? : %d?? %d?? %d?? \n",
        today->tm_year+1900, today->tm_mon+1, today->tm_mday);

    char day[10] = {'\0' , };
    sprintf(day, "%04d%02d%02d", today->tm_year+1900, today->tm_mon+1, today->tm_mday);
    printf("\n???? ??? : %s\n", day);

    for(int i=0; i<sizeof(store)/sizeof(store[0]); i++) {
        char exp[10] = {'\0' , };
        sprintf(exp, "%04d%02d%02d", store[i].expire.year, store[i].expire.month, store[i].expire.day);

        if(atoi(exp) <= atoi(day)) {
            store[i].throw = 'y';
        }
    }
    p=store;
    print_all(p, sizeof(store)/sizeof(store[0]));
} 

// struct neighbor
// {
//     char name[20];
//     int age;
//     struct neighbor *next;
// };
// typedef struct neighbor neighbor;

// void ex7(int argc, char *argv[]){
//     neighbor *p,a={"benny",23},b={"jenny",25},c={"creig",30};

//     p=&a;
//     a.next=&b;
//     b.next=&c;
//     c.next='\0';

//     while(p != NULL){
//         printf("%s, %d\n",p->name,p->age);
//         p=p->next;
//     }
// }

void ex8(int argc, char *argv[]){
    printf("argc=%d\n",argc);

    for(int i=0; i<argc; i++){
        printf("argv[%d] = %s\n",i,argv[i]);
    }
}

void ex9(int argc, char *argv[]){
    int x,y;
    char op;
    op = *argv[2];
    x = atoi(argv[1]);
    y = atoi(argv[3]);

    switch(op){
        case '+':
        printf("%d %c %d = %d",x,op,y,x+y);
        break;
        case '-':
        printf("%d %c %d = %d",x,op,y,x-y);
        break;
        default:
        printf("?????? ?????? ????????.");
    }
        
}

void ex10(int argc, char *argv[]){

}

//???ex04??????
#include <stdio.h>

void printNumberString(int number) {
    const char* digits[10] = {
        "??", "??", "??", "??", "??", "??", "??", "?", "??", "??"
    };
    const char* unit[5] = {
        "", "??", "??", "?"
    };

    if (number >= 10000) {
        printf("??? ???? 10000???? ????.\n");
        return;
    }

    if (number == 0) {
        printf("??\n");
        return;
    }

    int quotient = number;
    int divisor = 1000;
    int unitIndex = 3;

    while (divisor >= 1) {
        int digit = quotient / divisor;
        quotient %= divisor;
        divisor /= 10;

        if (digit > 0) {
            printf("%s%s", digits[digit], unit[unitIndex]);
        }

        unitIndex--;
    }

    printf("\n");
}

void ex11(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: program_name <integer_value>\n");
        
    }

    int inputValue = atoi(argv[1]);
    printNumberString(inputValue);

}

int max(int arr[],int size){
    int max_value=arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }
    return max_value;
}

void ex12(){
    int num[3][50];

    for(int i=0; i<sizeof(num)/sizeof(num[1]); i++){
        printf("정수입력 : \n");
        scanf("%d",num[i]);
    }

    int result = max(num,sizeof(num)/sizeof(num[1]));
    printf("max()에서 전달 받은 최댓값 = %d",result);
}

int max(int arr[], int size){
    int max_value = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }

    return max_value;
}

void ex13(){
    int num[3];

    for(int i = 0; i < sizeof(num)/sizeof(num[0]); i++){
        printf("정수 입력: ");
        scanf("%d", &num[i]);
    }

    int result = max(num, sizeof(num)/sizeof(num[0]));
    printf("max()에서 전달 받은 최댓값 = %d", result);
}


void mystrcat(const char* stra, const char* strb, char* plus) {
    strcpy(plus, stra);  
    strcat(plus, strb);  
}

void ex14() {
    char stra[100];
    char strb[100];
    char plus[200];

    printf("첫 번째 문자열을 입력하세요: ");
    fgets(stra,sizeof(stra),stdin);

    printf("두 번째 문자열을 입력하세요: ");
    fgets(strb, sizeof(strb), stdin);
    strb[strcspn(strb, "\n")] = '\0';  

    mystrcat(stra, strb, plus);

    printf("결과 문자열: %s\n", plus);

}

int main(){
    ex14();
    return 0;
}


