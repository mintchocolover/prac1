//#include <stdio.h>
//#include <conio.h>
//
//int main() {
//    char cha, chb;
//    int result;
//
//    printf("20193219 ????\n");
//    
//    printf("???? ??? : ");
//    cha = getche();
//    scanf("%c", &cha);
//    
//    printf("???? ??? : ");
//    chb = getche();
//    scanf("%c", &chb);
//    
//    result = (cha - '0') + (chb - '0');
//
//    printf("?? = %d\n" , result);
//
//    return 0;
//}

//#include <stdio.h>
//int main(){
//
//    char cha;
//    do{
//        printf("k이하의 알파벳입력(q는 종료, k이상은 다시 입력):");
//        scanf("%c",&cha);
//    
//        if (cha <='k'){
//            for(char i = 'a'; i <= cha ; i++ ){
//                printf("%c",i);
//            }
//            printf("\n");
//        }else if (cha == 'q'){
//            printf("q입력으로 종료\n");
//            
//        }else{
//            continue;
//        }
//        while(getchar()!='\n');
//    }while(cha!='q');
//}

//#include <stdio.h>
//#include <ctype.h>
//#include <conio.h>
//
//int main(){
//    char cha;
//    do{
//        printf("\nk이하의 알파벳입력(q는 종료, k이상은 다시 입력):");
//        cha=getchar();
//        
//    if (cha>='a'&& cha <='k'){
//        printf("\n");
//        for(char i = 'a'; i<=cha; i++){
//            printf("%c",&i);
//        }
//    } else if (cha=='q'){
//        printf("q입력으로 종료\n");
//    }
//    }while(cha !='q');
//    return 0;
//    
//}

//#include <stdio.h>
//
//int main(){
//    int a;
//
//    printf("정수 입력 : ");
//    scanf("%d",&a);
//
//    printf("\n8진수=%#o , ",a);
//    printf("10진수=%d , ",a);
//    printf("16진수=%#X , ",a);
//
//}

//#include <stdio.h>
//
//int main(){
//    char a;
//
//    printf("정수 입력 : ");
//    a=getchar();
//
//    printf("\n8진수=%#o , ",a);
//    printf("10진수=%d , ",a);
//    printf("16진수=%#X , ",a);    
//}

//#include <stdio.h>
//
//int main(){
//
//    double a;
//
//    printf("실수를 입력하세요 : ");
//    scanf("%lf",&a);
//
//    printf("입력하신 실수를 소수 한자리만 출력하면 : %.1f",a);
//}

//#include <stdio.h>
//
//int main(){
//    double mid,final,sum=0,avg=0;
//
//    printf("중간고사 성적 입력 : ");
//    scanf("%lf",&mid);
//    printf("기말고사 성적 입력 : ");
//    scanf("%lf",&final);
//
//    sum=mid+final;
//    avg=(mid+final)/2;
//    printf("합 = %10.3lf\n",sum);
//    printf("평균 = %10.3lf",avg);
//
//
//}    

//#include <stdio.h>
//#define PI 3.141592
//
//int main(){
//    double r,area=0,out=0;
//
//    printf("원반지름입력 : ");
//    scanf("%lf",&r);
//
//    printf("\n원반지름: %.2lf",r);
//
//    area=PI*r*r;
//    out=PI*2*r;
//
//    printf("\n원면적 : %.2lf",area);
//    printf("\n원둘레 : %.2lf",out);
//}

//#include <stdio.h>
//
//int main(){
//    int c,s,i,f,d;
//
//    c=sizeof(char);
//    s=sizeof(short);
//    i=sizeof(int);
//    f=sizeof(float);
//    d=sizeof(double);
//
//    printf("char=%dbyte\n",c);
//    printf("short=%dbyte\n",s);
//    printf("int=%dbyte\n",i);
//    printf("float=%dbyte\n",f);
//    printf("double=%dbyte\n",d);
//}

//#include <stdio.h>
//
//int main(){
//    int b5000,b1000,c500,c100,pay,coffee,change=0;
//
//    printf("10000이하의 금액을 입력해 주세요 : ");
//    scanf("%d",pay);
//    printf("\n커피 몇 잔 드릴까요 : ");
//    scanf("%d",coffee);
//
//    pay=pay-1200*coffee;
//
//    while(pay>0){
//        if(pay>5000){
//            change=pay-5000;
//            b5000++;
//        }else if(pay>1000){
//            change=pay-1000;
//            b1000++;
//        }else if(pay>500){
//            change=pay-500;
//            c500++;
//        }else{
//            change=pay-100;
//            c100++;
//        }
//    }
//}

//#include <stdio.h>
//
//int main() {
//    int num1,num2,big,small;
//
//    printf("정수 두 개를 입력하세요 : ");
//    scanf("%d",&num1);
//    scanf("%d",&num2);
//
//    big=(num1>num2)?num1:num2;
//    small=(num1>num2)?num2:num1;
//
//    printf("\n큰 수 = %d",big);
//    printf("\n작은 수 = %d",small);
//
//    printf("\n큰 수를 작은 수로 나눈 몫과 나머지 = %d,%d",big%small,big/small);
//}

//#include <stdio.h>
//#include <conio.h>
//
//int main() {
//    char a;
//
//    printf("문자를 입력하세요 : ");
//    a=getche();
//    printf(" -> %c",((a>='a'&&a<='z')||(a>='A'&&a<='Z'))?'Y':'N');    알파벳 사이에 딴게 들어강씨음 외워 그냥
//}

//#include <stdio.h>
//#include <conio.h>
//
//int main() {
//    char a,b;
//    int ina,inb;
//
//    printf("숫자를 입력하세요 : ");
//    a=getche();
//    printf("\n숫자를 입력하세요 : ");
//    b=getche();
//    
//    ina=(a>='0'&&a<='9')?a-'0':1;
//    inb=(b>='0'&&b<='9')?b-'0':1;
//
//    printf("\n두 수의 곱은 = %d",ina*inb);
//}

//#include <stdio.h>
//
//int main() {
//    int a;
//
//    printf("정수를 입력하세요 : ");
//    scanf("%d",&a);
//    printf("\n2배 = %d",a<<1);
//    printf("\n4배 = %d",a<<2);
//    printf("\n8배 = %d",a<<3);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a;
//    char ch;
//    
//    printf("정수를 입력하세요 : ");
//    scanf("%d",&a);
//
//    ((a>>1)>10)?printf("OK"):printf("NOK");
//    
//}

#include <stdio.h>

int main() {
    int a;

    printf("정수를 입력하세요 : ");
    scanf("%d",&a);

    ((a<<1)<0)?printf("음수입니다."):printf("양수입니다.");
}