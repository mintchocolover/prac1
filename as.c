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
//        printf("k������ ���ĺ��Է�(q�� ����, k�̻��� �ٽ� �Է�):");
//        scanf("%c",&cha);
//    
//        if (cha <='k'){
//            for(char i = 'a'; i <= cha ; i++ ){
//                printf("%c",i);
//            }
//            printf("\n");
//        }else if (cha == 'q'){
//            printf("q�Է����� ����\n");
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
//        printf("\nk������ ���ĺ��Է�(q�� ����, k�̻��� �ٽ� �Է�):");
//        cha=getchar();
//        
//    if (cha>='a'&& cha <='k'){
//        printf("\n");
//        for(char i = 'a'; i<=cha; i++){
//            printf("%c",&i);
//        }
//    } else if (cha=='q'){
//        printf("q�Է����� ����\n");
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
//    printf("���� �Է� : ");
//    scanf("%d",&a);
//
//    printf("\n8����=%#o , ",a);
//    printf("10����=%d , ",a);
//    printf("16����=%#X , ",a);
//
//}

//#include <stdio.h>
//
//int main(){
//    char a;
//
//    printf("���� �Է� : ");
//    a=getchar();
//
//    printf("\n8����=%#o , ",a);
//    printf("10����=%d , ",a);
//    printf("16����=%#X , ",a);    
//}

//#include <stdio.h>
//
//int main(){
//
//    double a;
//
//    printf("�Ǽ��� �Է��ϼ��� : ");
//    scanf("%lf",&a);
//
//    printf("�Է��Ͻ� �Ǽ��� �Ҽ� ���ڸ��� ����ϸ� : %.1f",a);
//}

//#include <stdio.h>
//
//int main(){
//    double mid,final,sum=0,avg=0;
//
//    printf("�߰���� ���� �Է� : ");
//    scanf("%lf",&mid);
//    printf("�⸻��� ���� �Է� : ");
//    scanf("%lf",&final);
//
//    sum=mid+final;
//    avg=(mid+final)/2;
//    printf("�� = %10.3lf\n",sum);
//    printf("��� = %10.3lf",avg);
//
//
//}    

//#include <stdio.h>
//#define PI 3.141592
//
//int main(){
//    double r,area=0,out=0;
//
//    printf("���������Է� : ");
//    scanf("%lf",&r);
//
//    printf("\n��������: %.2lf",r);
//
//    area=PI*r*r;
//    out=PI*2*r;
//
//    printf("\n������ : %.2lf",area);
//    printf("\n���ѷ� : %.2lf",out);
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
//    printf("10000������ �ݾ��� �Է��� �ּ��� : ");
//    scanf("%d",pay);
//    printf("\nĿ�� �� �� �帱��� : ");
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
//    printf("���� �� ���� �Է��ϼ��� : ");
//    scanf("%d",&num1);
//    scanf("%d",&num2);
//
//    big=(num1>num2)?num1:num2;
//    small=(num1>num2)?num2:num1;
//
//    printf("\nū �� = %d",big);
//    printf("\n���� �� = %d",small);
//
//    printf("\nū ���� ���� ���� ���� ��� ������ = %d,%d",big%small,big/small);
//}

//#include <stdio.h>
//#include <conio.h>
//
//int main() {
//    char a;
//
//    printf("���ڸ� �Է��ϼ��� : ");
//    a=getche();
//    printf(" -> %c",((a>='a'&&a<='z')||(a>='A'&&a<='Z'))?'Y':'N');    ���ĺ� ���̿� ���� ������ �ܿ� �׳�
//}

//#include <stdio.h>
//#include <conio.h>
//
//int main() {
//    char a,b;
//    int ina,inb;
//
//    printf("���ڸ� �Է��ϼ��� : ");
//    a=getche();
//    printf("\n���ڸ� �Է��ϼ��� : ");
//    b=getche();
//    
//    ina=(a>='0'&&a<='9')?a-'0':1;
//    inb=(b>='0'&&b<='9')?b-'0':1;
//
//    printf("\n�� ���� ���� = %d",ina*inb);
//}

//#include <stdio.h>
//
//int main() {
//    int a;
//
//    printf("������ �Է��ϼ��� : ");
//    scanf("%d",&a);
//    printf("\n2�� = %d",a<<1);
//    printf("\n4�� = %d",a<<2);
//    printf("\n8�� = %d",a<<3);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a;
//    char ch;
//    
//    printf("������ �Է��ϼ��� : ");
//    scanf("%d",&a);
//
//    ((a>>1)>10)?printf("OK"):printf("NOK");
//    
//}

#include <stdio.h>

int main() {
    int a;

    printf("������ �Է��ϼ��� : ");
    scanf("%d",&a);

    ((a<<1)<0)?printf("�����Դϴ�."):printf("����Դϴ�.");
}