//#include <stdio.h>
//void ex_02(void) {
////���� ���α׷��� 2���� ex_02() ���ο� �ۼ��մϴ�
//}
//void ex_03(void) {
////printf("���� ���α׷��� 3���� ex_03() ���ο� �ۼ��մϴ�. }
//int main() {
//ex_02();
//ex_03();
//return 0;
//}

//sizeof(in)
//�̸��� �����ּ��̴�
//int in[5], in[1],*(in+1)       &in[1],in+1
//'a'=�Ϲݺ��� "a"=�迭����
//null(\0)
//���ڿ��� �Է¹ޱ����ؼ� char str[50] scanf("%s",�迭�̸�) <-scanf�������� ����ó�� ���ؼ� gets(str)��� fgets(str,sizeof(str),stdin)
//char str[]="abc" ���ڿ��迭�ʱ�ȭ

//1��
//#include <stdio.h>
//#include <conio.h>
//
//int main(){
//    char str[4];
//    for(char i=0; i<sizeof(str)/sizeof(char); i++){
//        printf("\n���� �Է�: ");
//        str[i] = getche();
//    }
//    printf("\n�Էµ� ����: ");
//    for(char i=0; i<sizeof(str)/sizeof(char); i++){
//        printf("%c",str[i]);
//    }
//}

//3��
//int main(){
//    char str[30];
//    int i;
//
//    printf("���ڿ� �Է� : ");
//    gets(str);
//
//    for(i=0;str[i];i++);   == for(i=0; str[i]!='\0'; i++);
//
//    printf("�Էµ� ���ڿ� ���� = %d",i);
//}

//5��
#include <stdio.h>

int main() {
    char ch, str[50];
    int i = 0,count = 0;

    do{
    printf("���ڿ��Է�: ");
    gets(str);
    if (str[0] == '\0') {
            printf("<EnterŰ>\n");
            break;
        }
        printf("�����Է�: ");
        ch = getchar();

        i=0;
        count=0;
    while(str[i]) {
        if(str[i]==ch){
            count++;
        }
        i++;
    }
    printf("%s���� %c�� %d��\n",str,ch,count);
    while(getchar() != '\n');   //ch=getchar���� ���ۿ� ���� ���͸� �����ֱ� ���ؼ�
    return 0;
}while(1);
}

//7��
#include <stdio.h>

int main() {
    char stra[100];
    char strb[100];
    int i = 0;

    printf("�����Է�: ");
    gets(stra);
    printf("�����Է�: ");
    gets(strb);

    while(stra[i]&&strb[i]){  //�ƴϸ� �������Ͷ�
        if (stra[i]!=strb[i]) break;
        i++;
    }
    if(stra[i]=='\0'&&strb[i]=='\0'){
    printf("%s,%s,����",stra,strb);
}else{
    printf("%s,%s,�ٸ�",stra,strb);
}
}

//9��

#include <stdio.h>

int main() {

int from[4];
int max;
int min;
int total=0;

for (int i=0; i<4; i++){
    printf("�����Է�: ");
    scanf("%d",from+i);
}
max=from[0];
min=from[0];

for(int i=0; i<4; i++){
    total+=from[i];
    max=(from[i]>max)?from[i]:max;
    min=(from[i]>max)?from[i]:min;
}
printf("\n��=%d\n",total);
printf("���� ū �� = %d\n",max);
printf("���� ���� �� = %d",min);
}