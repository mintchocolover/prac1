//#include <stdio.h>
//#include <conio.h>
//
//int main() {
//    char cha, chb;
//    int result;
//
//    printf("20193219 박시우\n");
//    
//    printf("문자 입력 : ");
//    cha = getche();
//    printf('%c\n',cha);
//    
//    printf("문자 입력 : ");
//    chb = getche();
//    printf('%c\n',chb);
//    
//    result = (cha - '0') + (chb - '0');
//
//    printf("합 = %d\n" , result);
//
//    return 0;
//}

#include <stdio.h>

int main() {
    char ch;
    
    printf("20193219 박시우\n");

    do {
        printf("k이하의 알파벳입력(q는 종료, k이상은 다시 입력) : ");
        scanf(" %c", &ch);

        if (ch >= 'a' && ch <= 'k') {
            //printf("%c", ch);
            for (char i = 'a'; i <= ch; i++) {
                printf("%c", i);
            }
            printf("\n");
        }
        else if (ch == 'q') {
            printf("q입력으로 종료\n");
        }
        else {
            continue;
        }
        while (getchar() != '\n');
    } while (ch != 'q');

    return 0;
}
