//#include <stdio.h>
//#include <conio.h>
//
//int main() {
//    char cha, chb;
//    int result;
//
//    printf("20193219 �ڽÿ�\n");
//    
//    printf("���� �Է� : ");
//    cha = getche();
//    printf('%c\n',cha);
//    
//    printf("���� �Է� : ");
//    chb = getche();
//    printf('%c\n',chb);
//    
//    result = (cha - '0') + (chb - '0');
//
//    printf("�� = %d\n" , result);
//
//    return 0;
//}

#include <stdio.h>

int main() {
    char ch;
    
    printf("20193219 �ڽÿ�\n");

    do {
        printf("k������ ���ĺ��Է�(q�� ����, k�̻��� �ٽ� �Է�) : ");
        scanf(" %c", &ch);

        if (ch >= 'a' && ch <= 'k') {
            //printf("%c", ch);
            for (char i = 'a'; i <= ch; i++) {
                printf("%c", i);
            }
            printf("\n");
        }
        else if (ch == 'q') {
            printf("q�Է����� ����\n");
        }
        else {
            continue;
        }
        while (getchar() != '\n');
    } while (ch != 'q');

    return 0;
}
