//#include <stdio.h>
//
//int main(){
//    char cha;
//
//    //printf("���ڿ��� �Է¹����ÿ�\n");  
//
//    //printf("���� �Է� :");
//    //scanf("%c",&cha);
//    
//    do{
//    printf("���ڿ��� �Է¹����ÿ�\n");  //�й�, �̸� ���
//    
//    printf("���� �Է� :");
//    scanf("%c",&cha);    
//    }while(cha=="q");
//    break;
//    }

#include <stdio.h>

int main(){
    char cha='a';
    printf("�����Է�");
    while(cha='q'){
        cha=getche();
    }

    //while(getchar() != '\n');
    
    //printf("���� �Է� :");
    //scanf("%c",&chb);           
    
    //result = (cha - '0')+(chb - '0');

    //printf("�� = %d\n",result); 
}

#include <stdio.h>
#include <conio.h>

void ex_05(void){
    char ch;
    int frequency[10] = {0};

    printf("���ڰ� �ƴϸ� �ݺ��� ����˴ϴ�.");
    printf("0���� 9������ ������ �Է��ϼ���.");

    do{
        ch = getche();
        if(ch<'0'||ch>'9') break;
        frequency[ch-'0']++;
    }while(1);
    for(int i=0; i<10; i++){
        if(frequency[i])
        printf("\n%d�� %dȸ �Է��ϼ̽��ϴ�.",i,frequency[i]);
    }
}


int main() {
    ex_05();
    return 0;
}