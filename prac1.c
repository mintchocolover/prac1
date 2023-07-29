#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void ex1(void){
    int a;

    printf("������ �Է��ϼ��� : ");
    scanf("%d",&a);

    if(a>0){
        printf("����Դϴ�.");
    }else{
        printf("�����Դϴ�.");
        }
}

void ex2(void) {
    int in;

    printf("������ �Է��ϼ��� : ");
    scanf("%d",&in);

    switch(in/2>10){
        case 1:
        printf("OK");
        break;
        case 0:
        printf("NOK");
        break;
    }

}


void ex3(void) {
    double in,sum;

    while(in>=-100&&in<=100){
        sum+=in;
        printf("���ڸ� �Է��ϼ��� : ");
        scanf("%lf",&in);
    }
    printf("-100�̻� 100���� ���ڵ��� �� = %.2lf",sum);  
}

void ex4(void) {
    char ch;
    printf("���ڸ� �Է��ϼ���: ");
    do{
        ch=getche();
    }while(tolower(ch)!='q');
}

void ex5(void) {
    int in,i,sum=0,place=1;
    printf("������ �Է��ϼ��� : ");
    scanf("%d",&in);
    while(in>0){
        i = in%2;
        sum = sum+(i*place);
        place*=10;
        in=in/2;
    }
     printf("2������ = %d",sum);
}

void ex6(void) {
    int in,count;
    do{
        count=0;
        printf("������ �Է��ϼ��� : ");
        scanf("%d",&in);
        if(in==0) break;

        while(in>=1){
            (in&1==1)?count++:count;
            in=in/2;
        }printf("2������ ���� �� 1�� ��Ÿ���� Ƚ�� = %d",count);
    }while(1);
}

void func(int (*n)[5],int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<sizeof(n[0])/sizeof(int); j++){
            printf("%d",n[i][j]);
        }
        puts("");
    }
}
void ex07(){
    int nums[2][5] = {5,4,3,2,1,1,2,3,4,5};
    func(nums,sizeof(nums)/sizeof(nums[0]));
}

int main(){
    ex07();
    return 0;
}