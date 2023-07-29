//#include <stdio.h>
//void ex_02(void) {
////응용 프로그래밍 2번은 ex_02() 내부에 작성합니다
//}
//void ex_03(void) {
////printf("응용 프로그래밍 3번은 ex_03() 내부에 작성합니다. }
//int main() {
//ex_02();
//ex_03();
//return 0;
//}

//sizeof(in)
//이름이 시작주소이다
//int in[5], in[1],*(in+1)       &in[1],in+1
//'a'=일반변수 "a"=배열변수
//null(\0)
//문자열을 입력받기위해선 char str[50] scanf("%s",배열이름) <-scanf쓰지마라 공백처리 못해서 gets(str)써라 fgets(str,sizeof(str),stdin)
//char str[]="abc" 문자열배열초기화

//1번
//#include <stdio.h>
//#include <conio.h>
//
//int main(){
//    char str[4];
//    for(char i=0; i<sizeof(str)/sizeof(char); i++){
//        printf("\n문자 입력: ");
//        str[i] = getche();
//    }
//    printf("\n입력된 문자: ");
//    for(char i=0; i<sizeof(str)/sizeof(char); i++){
//        printf("%c",str[i]);
//    }
//}

//3번
//int main(){
//    char str[30];
//    int i;
//
//    printf("문자열 입력 : ");
//    gets(str);
//
//    for(i=0;str[i];i++);   == for(i=0; str[i]!='\0'; i++);
//
//    printf("입력된 문자열 길이 = %d",i);
//}

//5번
#include <stdio.h>

int main() {
    char ch, str[50];
    int i = 0,count = 0;

    do{
    printf("문자열입력: ");
    gets(str);
    if (str[0] == '\0') {
            printf("<Enter키>\n");
            break;
        }
        printf("문자입력: ");
        ch = getchar();

        i=0;
        count=0;
    while(str[i]) {
        if(str[i]==ch){
            count++;
        }
        i++;
    }
    printf("%s에서 %c는 %d개\n",str,ch,count);
    while(getchar() != '\n');   //ch=getchar에서 버퍼에 남은 엔터를 지워주기 위해서
    return 0;
}while(1);
}

//7번
#include <stdio.h>

int main() {
    char stra[100];
    char strb[100];
    int i = 0;

    printf("문자입력: ");
    gets(stra);
    printf("문자입력: ");
    gets(strb);

    while(stra[i]&&strb[i]){  //아니면 빠져나와라
        if (stra[i]!=strb[i]) break;
        i++;
    }
    if(stra[i]=='\0'&&strb[i]=='\0'){
    printf("%s,%s,같음",stra,strb);
}else{
    printf("%s,%s,다름",stra,strb);
}
}

//9번

#include <stdio.h>

int main() {

int from[4];
int max;
int min;
int total=0;

for (int i=0; i<4; i++){
    printf("정수입력: ");
    scanf("%d",from+i);
}
max=from[0];
min=from[0];

for(int i=0; i<4; i++){
    total+=from[i];
    max=(from[i]>max)?from[i]:max;
    min=(from[i]>max)?from[i]:min;
}
printf("\n합=%d\n",total);
printf("가장 큰 수 = %d\n",max);
printf("가장 작은 수 = %d",min);
}