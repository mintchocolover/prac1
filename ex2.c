#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

// void mystrcat(char *stra, char *strb, char *plus){
//     strcat(plus,stra);
//     strcat(plus,strb);
//     //return plus;
// }

// void ex1(){
//     char stra[50];
//     char strb[50];
//     char plus[50];

//     printf("���ڿ� �Է� : ");
//     fgets(stra,sizeof(stra),stdin);
//     printf("���ڿ� �Է� : ");
//     fgets(strb,sizeof(strb),stdin);
//     stra[strcspn(stra, "\n")] = '\0';  

//     mystrcat(stra,strb,plus);
    
//     printf("plus = %s",plus);

// }

//�Լ�8��
// char mystrcat(char *a,char *b, char *result){
//     strcpy(result,a);
//     strcat(result,b);
// }

// int main(int argc, char *argv[]){
//     char plus[50];
//     mystrcat(argv[1],argv[2],plus);
//     printf("plus = %s",plus);
// }

//�Լ�9��
double myabs(double a){
    if(a<0){
        return -1*a;
    }else{
        return a;
    }
}

void ex3(){
    double num;
    printf("�Ǽ��� �Է��Ͻÿ� : ");
    scanf("%lf",&num);

    double r = myabs(num);
    printf("abs = %lf",r);

}

//�Լ�10��
// int max(int count,int *p){
//     int max_value=*(p+0);
//     for(int i = 1 ; i < count ; i++){
//         max_value=(max_value>*(p+i)?max_value:*(p+i));
//     }
//     return max_value; 
// }

// int main(int argc,char *argv[]){
//     int num[3];
//     for(int i=1; i<argc; i++){
//         num[i-1]=atoi(argv[i]);
//     }

//     printf("max = %d",max(argc,num));
// }

//�Լ�5��
// int max(int *in,int size){
//     int max_value=*(in+0);
//     for(int i=1; i<size; i++){
//         max_value=max_value>*(in+i)?max_value:*(in+i);
//     }
//     return max_value;
// }

// int main(){
//     int num[3],fuck;
//     for(int i=0; i<sizeof(num)/sizeof(int); i++){
//         printf("�����Է� : ");
//         scanf("%d",num+i);
//     }
//     fuck=max(num,sizeof(num)/sizeof(int));
//     printf("�ִ� : %d",fuck);
// }

//10��
// int isprime(int a){
//     int count=0;
//     for(int i=1; i<=a; i++){
//         if(a%i==0){
//             count++;
//         }else{
//             continue;
//         }
//     }
//     if(count==2) return 1;
//     else return 0;
// }

// int main(){
//     int num,pr;
//     printf("�����Է� : ");
//     scanf("%d",&num);

//     pr=isprime(num);
//     printf("%d",pr);
// }

//13
// char mystrupper(char *str, char *t, int size){
//     for(int i=0; i<size; i++){
//         *t=toupper(*(str+i));
//         t++;
//     }
//     *t='\0';
// }

// int main(){
//     char source[50],target[50];

//     printf("���ڿ��Է� : ");
//     gets(source);

//     mystrupper(source,target,sizeof(source)/sizeof(char));
//     printf("�빮�� : %s",target);
// }

//14
// int strcmp2dim(char (*p)[100]){
//     int i=0;
//     for(i=0; *(*(p+0)+i)==*(*(p+1)+i) && *(*(p+0)+i)!='\0' && *(*(p+1)+i) != '\0'; i++); 
//     if(*(*(p+0)+i)==*(*(p+1)+i)){
//         return 0;
//     }else{
//         return -1;
//     }
    
// }

// int main(){
//     char str[2][100],(*st)[100];
//     st=str;

//     printf("���ڿ� �Է� : ");
//     gets(*(st+0));
//     printf("���ڿ� �Է� : ");
//     gets(*(st+1));

//     printf("%d",strcmp2dim(str));
// }

//15
struct book {
    char title[50];
    int price;
}; 
typedef struct book book;
book bo;

void ex01(){
    printf("å ���� : ");
    gets(bo.title);
    printf("å ���� : ");
    scanf("%d",&bo.price);

    printf("book.title = %s, book.price = %d",bo.title,bo.price);

}

void ex04(){
    char st[10] = {"Hi"};
    printf("%s",st);
}

#define SIZE 4

struct unit {
    char fruit[10];
    int pirce;
}; typedef struct unit unit;

void ex02(int argc, char *argv[]){
    FILE *fp;
    unit list[SIZE];

    fp = fopen(argv[1],"rb");
    if(fp==NULL){
        printf("%s can't open file",argv[1]);
        exit(1);
    }
    fprintf(stdout,"%s ������ �о� ����ͷ� ����մϴ�\n\n",argv[1]);

    fread(list,sizeof(list),1,fp);

    for(int i=0; i<sizeof(list)/sizeof(unit); i++){
        fprintf(stdout,"%s %d\n",(list+i)->fruit,(list+i)->pirce);
    }
    fclose(fp);
}

int main(){
    ex04();
    return 0;
}