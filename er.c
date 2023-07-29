#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

//5??
//void func(int num[]){
//    for(int i=0; i<sizeof(num)/sizeof(num[0]); i++){
//        int max=0;
//        max=(num[i]>num[i+1])?num[i]:num[i+1];
//    }
//}
//
//int main(){
//    int num[3][50];
//
//    printf("??????? : ");
//    scanf("%d %d %d",num);
//
//    printf("max()???? ??????? ??밪 = %d",max);
//}

//5??
int max(int *n, int size){
    int m = *(n+0);

    for(int i=0; i<size; i++){
        m = m>n[i]?m:n[i];
    }
    return m;
}

void ex_05(void){
    int num[3];

    for(int i=0; i<sizeof(num)/sizeof(int); i++){
        printf("??????? : ");
        scanf("%d",num+i);
    }
    int rst = max(num, sizeof(num)/sizeof(int));
    printf("max???? ???? ???? ??? = %d\n",rst);
}

//7??
void mystrcat(const char *sa, const char *sb,char *p){
    while(*sa){
        *p = *sa;
        p++;
        sa++;
    }
    while(*sb){
        *p++ = *sb++;
    }
    *p = '\0'; 
}

void ex_07(void){
    char stra[50],strb[50],plus[sizeof(stra)+sizeof(strb)];

    printf("????? ??? : ");
    gets(stra);
    printf("????? ??? : ");
    gets(strb);
    mystrcat(stra,strb,plus);
    printf("plus = %s\n",plus);
}

//9??
double myabs(double in){
    if(in < 0.0) in *= -1.0;
    return in;
}

void ex_09(void){
    double dd=0.0,rst;

    printf("?????? : ");
    scanf("%lf",&dd);

    rst=myabs(dd);
    printf("%lf?? ???밪?? %lf\n",dd,rst);
}

//11??
//int mystrlen(char *a);{
//    int count;
//    
//    for (int count = 0; *a; a++,count++);
//    return count;
//}

//void ex_11(void){
//    char str[50];
//
//    printf("???????? : ");
//    gets(str);
//
//    printf("??????? ???? > %d \n",mystrlen(str));
//}

//과제
//int isprime(int *n);
//
//void hw_01(void)
//{
//    int num;
//    printf("20193219 박시우\n");
//    printf("양의 정수를 입력하세요: ");
//    scanf("%d", &num);
//    
//    if(isprime(&num)) {
//        printf("1\n");
//    } else {
//        printf("0\n");
//    }
//}
//
//int isprime(int *n)
//{
//    if(*n < 2) {
//        return 0;
//    }
//    
//    for(int i=2; i*i<=*n; i++) {
//        if(*n % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}

#include  <stdio.h>

char mystrcat(const char *sa, const char *sb, char *p){
    while(*sa){
        *p=*sa;
        sa++;
        p++;
    }
    while(*sb){
        *p=*sb;
        sb++;
        p++;
    }
    *p='\0';
}

int main(int argc,char *argv[]){
    printf("20193219 박시우\n");
    argc=3;
    char plus[150];
    mystrcat(argv[1],argv[2],plus);
    printf("plus=%s",plus);
    return 0;
}

//int main(){
//    hw_01();
//    return 0;
//}
