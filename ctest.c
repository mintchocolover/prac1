//#include <stdio.h>
//
//int main()
//{
//    char cha = "k";
//    int in = 5;
//    printf("input int : ");
//    scanf("%d",&in);
//    while(getchar() != '\n');
//    printf("input char :");
//    scanf("%c",&cha);
//    printf("ch=%c,in=%d\n",cha,in);
//}

//scanf���� �ּҿ�����(&)�� �� ���;���

//int main(){
//    char cha;
//    printf("input cha : ");
//    cha = getche();
//    printf("cha=%c",cha);
//    }

// while(getchar() != '\n');

#include <stdio.h>

void ex_01(void) {
    double source [] = {1.21, 3.43, 5.65, 7.87, 8.98};
    double target[sizeof(source)/sizeof(double)];
    double *p;

    p=source;

    for(int i=0; i<sizeof(source)/sizeof(double); i++){
        *(target+i)=*(p+i);
    }
    printf("source = ");
    for(int i=0; i<sizeof(source)/sizeof(double);i++){
        printf("%.2lf",source[i]);
    }
    printf("\ntarget = ");
    for(int i=0; i<sizeof(source)/sizeof(double); i++)
    printf("%.2lf",target[i]);
}




#include <stdio.h>

void ex_08(void) {
    char str [2][50];
    int n=0;

    do {
        int i=0;
        printf("\n���ڿ��Է�:");
        gets(str[0]);  //ù���� �����ּ�
        
        if(str[0][0]=='\0'){  //ù���� ���� NULL�̸� enter��ȯ�ϰ� break
            printf("<enter>");
            break;
        }
        printf("���ڿ��Է�:");
        gets(str[1]);

        for(i=0; str[0][i]!='\0'&&str[1][i]!='\0'&&str[0][i]==str[1][i]; i++);
        
        printf("%s,%s\n",str[0],str[1]);
        printf("%s,%s",str[0][i]==str[1][i]?"����":"�ٸ�");


    }while(1);
}

#include <stdio.h>

void ex_12(void){
    int in,i,j;
    char bin[33]={'\0'};
    do{
        printf("\n�����Է� :");
        scanf("%d",&in);
        if(in==0) break;

        printf("�Էµ� %d�� �������� ",in);
        i=0;
        while(in>0){
            bin[i]=in%2+'0';
            in=in/2;
            i++;
        }
        bin[i]='\0';
        for(j=i-1; j>=0; j--){
            printf("%c",bin[j]);
        }
    }while(1);
}


int main(){
    ex_01();
    return 0;
}
