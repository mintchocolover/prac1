#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#define PI 3.141592

void ex_01(void) {
    int a;

    printf("���� �Է� : ");
    scanf("%d",&a);

    printf("8����=%#o,\n",a);
    printf("10����=%d, \n",a);
    printf("16����=%#X",a);
    

}

void ex_02(void) {
    double a;

    printf("�Ǽ��� �Է��ϼ��� : ");
    scanf("%lf",&a);

    printf("�Է��Ͻ� �Ǽ��� �Ҽ� ���ڸ��� ����ϸ� : %.1lf",a);
}

void ex_03(void) {
    double mid,final,sum=0,avg=0;

    printf("�߰���� ���� �Է� : ");
    scanf("%lf",&mid);
    printf("�⸻��� ���� �Է� : ");
    scanf("%lf",&final);

    sum=mid+final;
    avg=(mid+final)/2;

    printf("�� = %.3lf\n",sum);
    printf("��� = %.3lf",avg);
}

void ex_04(void) {
    double r,area,out;

    printf("���������Է� : ");
    scanf("%lf",&r);

    area=PI*r*r;
    out=2*PI*r;

    printf("\n������ : %.2lf",area);
    printf("\n���ѷ� : %.2lf",out);
}

void ex_05(void) {
    int c,s,i,f,d;

    c=sizeof(char);
    s=sizeof(short);
    i=sizeof(int);
    f=sizeof(float);
    d=sizeof(double);

    printf("char = %dbytes\n",c);
    printf("short = %dbytes\n",s);
    printf("int = %dbytes\n",i);
    printf("float = %dbytes\n",f);
    printf("double = %dbytes",d);
} 

void ex_06(void) {
    int num1,num2,small,big;

    printf("���� �� ���� �Է��ϼ��� : ");
    scanf("%d",&num1);
    scanf("%d",&num2);

    small=(num1>num2)?num2:num1;
    big=(num1>num2)?num1:num2;

    printf("\nū �� = %d",big);
    printf("\n���� �� = %d",small);
    printf("\nū ���� ���� ���� ���� ��� ������ = %d,%d",big/small,big%small);
}

void ex_07(void) {
    char ch;
    
    printf("���ڸ� �Է��ϼ��� : ");
    ch=getche();

    printf(" -> %c",((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))?'Y':'N');
}

void ex_08(void) {
    char ina,inb;

    printf("���ڸ� �Է��ϼ��� : ");
    ina=getche();
    printf("\n���ڸ� �Է��ϼ��� : ");
    inb=getche();

    ina=('0'<=ina&&ina<='9')?ina-'0':1;
    inb=('0'<=inb&&inb<='9')?inb-'0':1;

    printf("\n�� ���� ���� = %d",ina*inb);

}

void ex_09(void) {
    int in;

    printf("������ �Է��ϼ��� : ");
    scanf("%d",&in);

    printf("2�� = %d",in<<1);
    printf("\n4�� = %d",in<<2);
    printf("\n8�� = %d",in<<3);
}

void ex_10(void) {
    int in;

    printf("������ �Է��ϼ��� : ");
    scanf("%d",&in);

    ((in>>1)>10)?printf("ok"):printf("nok");
}

void ex_11(void) {
    int in;

    printf("������ �Է��ϼ��� : ");
    scanf("%d",&in);

    ((in<<1)>0)?printf("����Դϴ�."):printf("�����Դϴ�.");
}

void ex_12(void) {
    int in;

    printf("������ �Է��ϼ��� : ");
    scanf("%d",&in);

    if(in>0){
        printf("\n����Դϴ�.");
    }else(printf("�����Դϴ�."));

}

void ex_13(void) {
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

void ex_14(void) {
    int in,sum=0;
    do{
        sum+=in;
        printf("���ڸ� �Է��ϼ��� : ");
        scanf("%d",&in);
        printf("���ڸ� �Է��ϼ��� : %d\n",sum);
    }while(-100>in||in<100);
    printf("-100�̻� 100���� ���ڵ��� �� = %d",sum);
}

void ex_15(void) {
    char ch;
    
    printf("���ڸ� �Է��ϼ��� : ");

    do{
        ch=getche();
    //printf("%c",ch);  ���ڿ� ���Ѵ�� �޴ٰ� q������ ��
    
    }while(tolower(ch)!='q');
}

void ex_16(void){
    int in,result=0;

    printf("������ �Է��ϼ��� : ");
    scanf("%d",&in);

    printf("2������ = ");

    while(in/2==0){
        if(in%2==1){
            printf("1");
            result=in/2;
        }else(printf("0"));
    }
}

#include <stdio.h>

void ex_17(void) {
    int decimal, binary = 0, place = 1, remainder;

    printf("10���� ������ �Է��ϼ���: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        remainder = decimal % 2;
        binary = binary + (remainder * place);
        place *= 10;
        decimal = decimal / 2;
    }

    printf("2������ ��ȯ�� ���: %d\n", binary);

}//10���� 2������ ��ȯ�ϱ� while����ؼ�


void ex_18(void) {
    int in,count;

    do{
        count=0;
        printf("\n������ �Է��ϼ��� : ");
        scanf("%d",&in);
        if(in==0)break;

        while(in>=1){
            (in&1)?count++:count;
            in=in>>1;
        }
        printf("2������ ���� �� 1�� ��Ÿ���� Ƚ�� = %d",count);
}while(1);
}

void ex_19(void) {
    int num,count=0;

    do{
        printf("������ �Է��ϼ��� : ");
        scanf("%d",&num);
    }while(num<10);

        for (int i=10; i<=num; i++){
            if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0){
                printf("%5d",i);
                count++;

                if(count%10==0){
                    printf("\n");
                }
            }
    }
}
    
void ex_20(void){
    char ch;
    int count=0;

    do{
        printf("���ĺ� �Է� : ");
        ch=getche();
        ch=toupper(ch);
        printf("\n");
    }while(!isalpha(ch));

    for(char i=ch; i<='Z'; i++){
        printf("count�� �� : %d",count);
        if(i<='Z'){
            printf("%2c",i);
            count++;
        }
        if(count==5){
            printf("\n");
            count = 0;
            
        }
    }   
}

//�����
//���α׷� ���� �� �޸��� ��ȭ�� �����ϴ� ���

void ex_21(void) {
    char ch;
    int in;

    do{
        printf("\nk������ ���ĺ��Է�(q�� ����, k�̻��� �ٽ� �Է�) : ");
        ch=getche();
        printf("\n");
        if(tolower(ch)=='q') break;
        if(tolower(ch)>='k') continue;

        
        for(char i='a'; i<=ch; i++){
        
            printf("%c",i);
        }
    }while(1);
    printf("q�Է����� ����.");
}

void ex_22(void){
    char ch;
    int sum = 0;

    while(1){
    printf("\n�����Է�(���ĺ��� ���� �̿��� ���� �Է� �� ����) : ");
    ch = getche();

    if(ch>='a'&&ch<='k'){
        printf("\n�ҹ����Դϴ�.");
    }else if(ch >= 'A'&&ch <= 'z'){
        printf("\n�빮���Դϴ�.");
    }else if(ch>='0'&&ch <= '9'){
        ch = ch - '0';
        sum = sum + ch;
        printf("\n�����Դϴ�. ���ݱ��� ���ڵ��� �� = %d",sum);
    }else{
        printf("\n���ĺ��� ���� �̿��� ���ڸ� �Է��Ͽ� �����մϴ�.");
        break;
    }
}
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ex_23(void) {
    int n;
    printf("�� ������ ����ðڽ��ϱ�? ");
    scanf("%d", &n);

    int max = 2 * n - 1;
    int** arr = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(sizeof(int) * max);
    }

    // ����ž �ʱ�ȭ
    for (int i = 0; i < n; i++) {
        int num_count = i * 2 + 1;
        int zero_index = (max - num_count) / 2;
        for (int j = 0; j < max; j++) {
            if (j < zero_index || j >= zero_index + num_count) {
                arr[i][j] = 0;
            } else {
                arr[i][j] = abs(j - zero_index - i);
            }
        }
    }

    // ����ž ���
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < max; j++) {
            if (arr[i][j] != 0) {
                printf("%d ", arr[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // �޸� ����
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

}

void ex_24(void){
    int in,i=0;
    char cha,ans;

    printf("�ݺ�Ƚ���Է� : ");
    scanf("%d",&in);
    do{
        printf("\n�����Է� : ");
        cha=getche();
        ans+=cha;
        i++;
    }while(i<in);


printf("\nm�� ���� ����� ���ڴ� = %c",ans);

}

void ex_25(void){
    char ch[4];

    for(int i=0; i<sizeof(ch)/sizeof(char); i++){
        printf("\n�����Է� : ");
        ch[i]=getche();
    }
    printf("\n�Էµ� ���� : ");
    for(int i=0; i<sizeof(ch)/sizeof(char); i++){
        printf("%c",ch[i]);
    
    }
}

void ex_26(void){
    char ch[50];

    printf("���ڿ��Է� : ");
    gets(ch);
    printf("�Էµ� ���ڿ� = %s",ch);
}

void ex_27(void){
    char str[50];
    int i;

    printf("���ڿ��Է� : ");
    gets(str);

    for(i=0; str[i]; i++);
    printf("�Է��� ���ڿ��� ����=%d",i);
}

void ex_28(void){
    char str[30];
    int i;

    do{
        printf("\n���ڿ��Է� : ");
        gets(str);
        
        if(str[0]=='\0')
            //printf("<enter>");
            break;
    
        for(i=0; str[i]; i++);
        printf("�Էµ� ���ڿ��� ����=%d",i);
        

    }while(1);
   printf("<enter>");
    
}

void ex_29(void){
    char str[30],ch;
    int in=0;
    
    do{
        printf("\n���ڿ��Է� : ");
        gets(str);
        if(str[0]=='\0'){
            printf("<enter>");
            break;
        }

        printf("\n�����Է� : ");
        ch=getche();
        
        for(int i=0; str[i]; i++){
            if(str[i]==ch){
                in++;
            }
        }
        printf("\n%s���� %c�� %d��",str,ch,in);
    }while(1);
}

void ex_30(void){
    char stra[30],strb[30];
    int i,j,count=0;

    printf("���ڿ��Է� : ");
    gets(stra);

    for(i=0; stra[i]; i++);

    for(j=0; j<i; j++){
        strb[j]=stra[i-j-1];   //�ε����� -1�̸� �ڿ������� ù��°��
    }
    strb[j]='\0';

    printf("\nstra=%s\nstrb=%s",stra,strb);
}

void ex_31(void){
    char stra[30],strb[30];
    int i,j,count=0;

    printf("���ڿ��Է� : ");
    gets(stra);
    
    printf("���ڿ��Է� : ");
    gets(strb);

    for(i=0; stra[i]; i++){
        for(j=0; strb[j]; j++){       
        }
    }
    if(i==j){
                printf("%s, %s, ����",stra,strb);
            }else if(i!=j){
                printf("%s, %s, �ٸ�",stra,strb);
            }else{
                printf("<enter>");
            }
}

void ex_32(void){
    int from[4],i,sum=0,max=0,min=0;

    for(i=0; i<sizeof(from)/sizeof(int); i++){
        printf("�����Է� : ");
        scanf("%d",&from[i]);
        sum+=from[i];
        
    }
    max=from[0];
    min=from[0];
        for(int i=0; i<sizeof(from)/sizeof(int); i++){
            max = (from[i]>max)?from[i]:max;
            min = (from[i]<min)?from[i]:min;
        }
    printf("��=%d\n���� ū ��=%d\n���� ���� ��=%d",sum,max,min);
    
}

void ex_33(void){
    int num[5];
    int *p = num; // �迭�� ù ��° ���Ҹ� ����Ű�� ������ p

    printf("�ټ� ���� ������ �Է��ϼ���: ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]); // ����ڷκ��� ���� �Է¹���
    }

    printf("�Է��� ������ ������ �����ϴ�:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", *p); // �����͸� ����Ͽ� �迭�� ���� ���
        p++; // �����͸� ���� ���ҷ� �̵�
    }
    
}

void ex_34(void){
    char *p,str[5];
    
    p=str;

    for(int i=0; i<sizeof(str)/sizeof(char); i++){
        printf("\n���ڸ� �Է��ϼ��� : ");
        str[i]=getche();
        
    }
    printf("\n");
    for(int i=0; i<sizeof(str)/sizeof(char); i++){
        printf("%c",*(p+i));
    }

}

void ex_35(void){
    char *p,strings[5][100]; 

    for(int i=0; i<5; i++) {
        printf("Enter string %d: ", i+1);
        scanf("%s", strings[i]);
        p = strings[i];
    }

    for(int i=0; i<5; i++) {
        printf("String %d: %s\n", i+1, *(p+i));
    }

}

void ex36(void){
    double source [] = {1.21, 3.43, 5.65, 7.87, 8.98};
    double *target;
    target=source;

    for(int i=0; i<sizeof(source)/sizeof(double); i++){
        target[i]=source[i];
    }
    printf("target = ");
    for(int i=0; i<sizeof(source)/sizeof(double); i++){
        printf("%.2lf,   ",target[i]);
    }
}

void ex37(void){
    double source [] = {1.21, 3.43, 5.65, 7.87, 8.98};
    double *target;
    double a;
    target=source;

    printf("source �� ���ҿ� ���� �� �Է� : " );
    scanf("%lf",&a);

    for(int i=0; i<sizeof(source)/sizeof(double); i++){
        target[i]+=a;
    }

    printf("\ntarget = %.2lf, ");
    for(int i=0; i<sizeof(source)/sizeof(double); i++){
        printf("%.2lf, ",target[i]);
    }

}

void ex38(void){
    char *p,str[30];
    int i=0;
    p=str;

    printf("���ڿ��Է� : %s",str);
    gets(str);

    while(1){
        str[i]=p[i];
        i++;
        if(str[i]=='\0') break;
    }

    for(i=0; *p; i++,p++);
    printf("�Էµ� ���ڿ� ���� = %d",i);
}

void ex39(void){
    char *p,str[100];
    
    do{
        p=str;
        printf("���ڿ��Է� : ");
        gets(str);
        int i=0;

        if(p[0] != '\0'){
            for(i=0; *p; i++,p++);
            printf("�Էµ� ���ڿ� ���� : %d\n",i);
        }else if(p[0]=='\0') break;
        
    }while(1);
    printf("<enter>");
}
    
void ex40(void){
    char *sa,*sb,stra[50],strb[50];
    int i=0,j=0,k=0;
    sa=stra;
    sb=strb;

    printf("���ڿ��Է� : ");
    gets(stra);
    printf("���ڿ��Է� : ");
    gets(strb);

    for(; *sa; sa++);

    for(; *sb; sa++,sb++){
        *sa=*sb;
    }
    *sa='\0';
    printf("\nsa+sb=%s",stra);
}

void ex41(void){
    char *pa,*pb,stra[50],strb[50];
    pa=stra;
    pb=strb;

    printf("���ڿ��Է�: ");
    gets(stra);

    for(; *pa; pa++,pb++){
        *pb=toupper(*pa);
    }
    printf("stra=%s, strb=%s",stra,strb);
}

void ex42(void){
    char *p1,*p2,str[2][50];

    p1=str[0];
    p2=str[1];

    printf("���ڿ��Է� : ");
    gets(str[0]);

    for(; *p1; p1++,p2++){
        *p2=toupper(*p1);
    }
    printf("str[0]=%s, str[1]=%s",str[0],str[1]);
}

void ex43(void){
    
}

int main() {
    ex_34();
    return 0;

}