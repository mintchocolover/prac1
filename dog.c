#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#define PI 3.141592

void ex_01(void) {
    int a;

    printf("정수 입력 : ");
    scanf("%d",&a);

    printf("8진수=%#o,\n",a);
    printf("10진수=%d, \n",a);
    printf("16진수=%#X",a);
    

}

void ex_02(void) {
    double a;

    printf("실수를 입력하세요 : ");
    scanf("%lf",&a);

    printf("입력하신 실수를 소수 한자리만 출력하면 : %.1lf",a);
}

void ex_03(void) {
    double mid,final,sum=0,avg=0;

    printf("중간고사 성적 입력 : ");
    scanf("%lf",&mid);
    printf("기말고사 성적 입력 : ");
    scanf("%lf",&final);

    sum=mid+final;
    avg=(mid+final)/2;

    printf("합 = %.3lf\n",sum);
    printf("평균 = %.3lf",avg);
}

void ex_04(void) {
    double r,area,out;

    printf("원반지름입력 : ");
    scanf("%lf",&r);

    area=PI*r*r;
    out=2*PI*r;

    printf("\n원면적 : %.2lf",area);
    printf("\n원둘레 : %.2lf",out);
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

    printf("정수 두 개를 입력하세요 : ");
    scanf("%d",&num1);
    scanf("%d",&num2);

    small=(num1>num2)?num2:num1;
    big=(num1>num2)?num1:num2;

    printf("\n큰 수 = %d",big);
    printf("\n작은 수 = %d",small);
    printf("\n큰 수를 작은 수로 나눈 몫과 나머지 = %d,%d",big/small,big%small);
}

void ex_07(void) {
    char ch;
    
    printf("문자를 입력하세요 : ");
    ch=getche();

    printf(" -> %c",((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))?'Y':'N');
}

void ex_08(void) {
    char ina,inb;

    printf("숫자를 입력하세요 : ");
    ina=getche();
    printf("\n숫자를 입력하세요 : ");
    inb=getche();

    ina=('0'<=ina&&ina<='9')?ina-'0':1;
    inb=('0'<=inb&&inb<='9')?inb-'0':1;

    printf("\n두 수의 곱은 = %d",ina*inb);

}

void ex_09(void) {
    int in;

    printf("정수를 입력하세요 : ");
    scanf("%d",&in);

    printf("2배 = %d",in<<1);
    printf("\n4배 = %d",in<<2);
    printf("\n8배 = %d",in<<3);
}

void ex_10(void) {
    int in;

    printf("정수를 입력하세요 : ");
    scanf("%d",&in);

    ((in>>1)>10)?printf("ok"):printf("nok");
}

void ex_11(void) {
    int in;

    printf("정수를 입력하세요 : ");
    scanf("%d",&in);

    ((in<<1)>0)?printf("양수입니다."):printf("음수입니다.");
}

void ex_12(void) {
    int in;

    printf("정수를 입력하세요 : ");
    scanf("%d",&in);

    if(in>0){
        printf("\n양수입니다.");
    }else(printf("음수입니다."));

}

void ex_13(void) {
    int in;

    printf("정수를 입력하세요 : ");
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
        printf("숫자를 입력하세요 : ");
        scanf("%d",&in);
        printf("숫자를 입력하세요 : %d\n",sum);
    }while(-100>in||in<100);
    printf("-100이상 100이하 숫자들의 합 = %d",sum);
}

void ex_15(void) {
    char ch;
    
    printf("문자를 입력하세요 : ");

    do{
        ch=getche();
    //printf("%c",ch);  문자열 무한대로 받다가 q받으면 끝
    
    }while(tolower(ch)!='q');
}

void ex_16(void){
    int in,result=0;

    printf("정수를 입력하세요 : ");
    scanf("%d",&in);

    printf("2진수는 = ");

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

    printf("10진수 정수를 입력하세요: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        remainder = decimal % 2;
        binary = binary + (remainder * place);
        place *= 10;
        decimal = decimal / 2;
    }

    printf("2진수로 변환한 결과: %d\n", binary);

}//10진수 2진수로 변환하기 while사용해서


void ex_18(void) {
    int in,count;

    do{
        count=0;
        printf("\n정수를 입력하세요 : ");
        scanf("%d",&in);
        if(in==0)break;

        while(in>=1){
            (in&1)?count++:count;
            in=in>>1;
        }
        printf("2진수로 만들 때 1이 나타나는 횟수 = %d",count);
}while(1);
}

void ex_19(void) {
    int num,count=0;

    do{
        printf("정수를 입력하세요 : ");
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
        printf("알파벳 입력 : ");
        ch=getche();
        ch=toupper(ch);
        printf("\n");
    }while(!isalpha(ch));

    for(char i=ch; i<='Z'; i++){
        printf("count의 값 : %d",count);
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

//디버깅
//프로그램 실행 중 메모리의 변화를 관찰하는 방법

void ex_21(void) {
    char ch;
    int in;

    do{
        printf("\nk이하의 알파벳입력(q는 종료, k이상은 다시 입력) : ");
        ch=getche();
        printf("\n");
        if(tolower(ch)=='q') break;
        if(tolower(ch)>='k') continue;

        
        for(char i='a'; i<=ch; i++){
        
            printf("%c",i);
        }
    }while(1);
    printf("q입력으로 종료.");
}

void ex_22(void){
    char ch;
    int sum = 0;

    while(1){
    printf("\n문자입력(알파벳과 숫자 이외의 문자 입력 시 종료) : ");
    ch = getche();

    if(ch>='a'&&ch<='k'){
        printf("\n소문자입니다.");
    }else if(ch >= 'A'&&ch <= 'z'){
        printf("\n대문자입니다.");
    }else if(ch>='0'&&ch <= '9'){
        ch = ch - '0';
        sum = sum + ch;
        printf("\n숫자입니다. 지금까지 숫자들의 합 = %d",sum);
    }else{
        printf("\n알파벳과 숫자 이외의 문자를 입력하여 종료합니다.");
        break;
    }
}
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ex_23(void) {
    int n;
    printf("몇 행으로 만드시겠습니까? ");
    scanf("%d", &n);

    int max = 2 * n - 1;
    int** arr = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(sizeof(int) * max);
    }

    // 숫자탑 초기화
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

    // 숫자탑 출력
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

    // 메모리 해제
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

}

void ex_24(void){
    int in,i=0;
    char cha,ans;

    printf("반복횟수입력 : ");
    scanf("%d",&in);
    do{
        printf("\n문자입력 : ");
        cha=getche();
        ans+=cha;
        i++;
    }while(i<in);


printf("\nm과 가장 가까운 문자는 = %c",ans);

}

void ex_25(void){
    char ch[4];

    for(int i=0; i<sizeof(ch)/sizeof(char); i++){
        printf("\n문자입력 : ");
        ch[i]=getche();
    }
    printf("\n입력된 문자 : ");
    for(int i=0; i<sizeof(ch)/sizeof(char); i++){
        printf("%c",ch[i]);
    
    }
}

void ex_26(void){
    char ch[50];

    printf("문자열입력 : ");
    gets(ch);
    printf("입력된 문자열 = %s",ch);
}

void ex_27(void){
    char str[50];
    int i;

    printf("문자열입력 : ");
    gets(str);

    for(i=0; str[i]; i++);
    printf("입력한 문자열의 길이=%d",i);
}

void ex_28(void){
    char str[30];
    int i;

    do{
        printf("\n문자열입력 : ");
        gets(str);
        
        if(str[0]=='\0')
            //printf("<enter>");
            break;
    
        for(i=0; str[i]; i++);
        printf("입력된 문자열의 길이=%d",i);
        

    }while(1);
   printf("<enter>");
    
}

void ex_29(void){
    char str[30],ch;
    int in=0;
    
    do{
        printf("\n문자열입력 : ");
        gets(str);
        if(str[0]=='\0'){
            printf("<enter>");
            break;
        }

        printf("\n문자입력 : ");
        ch=getche();
        
        for(int i=0; str[i]; i++){
            if(str[i]==ch){
                in++;
            }
        }
        printf("\n%s에서 %c는 %d개",str,ch,in);
    }while(1);
}

void ex_30(void){
    char stra[30],strb[30];
    int i,j,count=0;

    printf("문자열입력 : ");
    gets(stra);

    for(i=0; stra[i]; i++);

    for(j=0; j<i; j++){
        strb[j]=stra[i-j-1];   //인덱스가 -1이면 뒤에서부터 첫번째임
    }
    strb[j]='\0';

    printf("\nstra=%s\nstrb=%s",stra,strb);
}

void ex_31(void){
    char stra[30],strb[30];
    int i,j,count=0;

    printf("문자열입력 : ");
    gets(stra);
    
    printf("문자열입력 : ");
    gets(strb);

    for(i=0; stra[i]; i++){
        for(j=0; strb[j]; j++){       
        }
    }
    if(i==j){
                printf("%s, %s, 같음",stra,strb);
            }else if(i!=j){
                printf("%s, %s, 다름",stra,strb);
            }else{
                printf("<enter>");
            }
}

void ex_32(void){
    int from[4],i,sum=0,max=0,min=0;

    for(i=0; i<sizeof(from)/sizeof(int); i++){
        printf("정수입력 : ");
        scanf("%d",&from[i]);
        sum+=from[i];
        
    }
    max=from[0];
    min=from[0];
        for(int i=0; i<sizeof(from)/sizeof(int); i++){
            max = (from[i]>max)?from[i]:max;
            min = (from[i]<min)?from[i]:min;
        }
    printf("합=%d\n가장 큰 수=%d\n가장 작은 수=%d",sum,max,min);
    
}

void ex_33(void){
    int num[5];
    int *p = num; // 배열의 첫 번째 원소를 가리키는 포인터 p

    printf("다섯 개의 정수를 입력하세요: ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]); // 사용자로부터 정수 입력받음
    }

    printf("입력한 정수는 다음과 같습니다:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", *p); // 포인터를 사용하여 배열의 원소 출력
        p++; // 포인터를 다음 원소로 이동
    }
    
}

void ex_34(void){
    char *p,str[5];
    
    p=str;

    for(int i=0; i<sizeof(str)/sizeof(char); i++){
        printf("\n문자를 입력하세요 : ");
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

    printf("source 각 원소에 더할 값 입력 : " );
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

    printf("문자열입력 : %s",str);
    gets(str);

    while(1){
        str[i]=p[i];
        i++;
        if(str[i]=='\0') break;
    }

    for(i=0; *p; i++,p++);
    printf("입력된 문자열 길이 = %d",i);
}

void ex39(void){
    char *p,str[100];
    
    do{
        p=str;
        printf("문자열입력 : ");
        gets(str);
        int i=0;

        if(p[0] != '\0'){
            for(i=0; *p; i++,p++);
            printf("입력된 문자열 길이 : %d\n",i);
        }else if(p[0]=='\0') break;
        
    }while(1);
    printf("<enter>");
}
    
void ex40(void){
    char *sa,*sb,stra[50],strb[50];
    int i=0,j=0,k=0;
    sa=stra;
    sb=strb;

    printf("문자열입력 : ");
    gets(stra);
    printf("문자열입력 : ");
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

    printf("문자열입력: ");
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

    printf("문자열입력 : ");
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