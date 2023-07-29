//#include <stdio.h>
//
//int main(){
//    char cha;
//
//    //printf("문자열을 입력받으시오\n");  
//
//    //printf("문자 입력 :");
//    //scanf("%c",&cha);
//    
//    do{
//    printf("문자열을 입력받으시오\n");  //학번, 이름 출력
//    
//    printf("문자 입력 :");
//    scanf("%c",&cha);    
//    }while(cha=="q");
//    break;
//    }

#include <stdio.h>

int main(){
    char cha='a';
    printf("문자입력");
    while(cha='q'){
        cha=getche();
    }

    //while(getchar() != '\n');
    
    //printf("문자 입력 :");
    //scanf("%c",&chb);           
    
    //result = (cha - '0')+(chb - '0');

    //printf("합 = %d\n",result); 
}

#include <stdio.h>
#include <conio.h>

void ex_05(void){
    char ch;
    int frequency[10] = {0};

    printf("숫자가 아니면 반복이 종료됩니다.");
    printf("0에서 9까지의 정수를 입력하세요.");

    do{
        ch = getche();
        if(ch<'0'||ch>'9') break;
        frequency[ch-'0']++;
    }while(1);
    for(int i=0; i<10; i++){
        if(frequency[i])
        printf("\n%d는 %d회 입력하셨습니다.",i,frequency[i]);
    }
}


int main() {
    ex_05();
    return 0;
}