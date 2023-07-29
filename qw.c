//?????????? 4??
//#include <stdio.h>
//#include <ctype.h>
//#include <conio.h>
//
//int main() {
//    char ch;
//
//    printf("????? ???????? : ");
//
//    do {
//        ch=getche();
//    } while(tolower(ch)!='q');
//
//}
//


//?????????? 6??
//#include <stdio.h>
//#include <ctype.h>
//#include <conio.h>
//
//int main() {
//    int num,count = 0;
//    do {
//    printf("\n?????? ??????? : ");
//    scanf("%d",&num);
//    if(num==0) break;
//
//    while(num>=1) {
//        (num&1)?count++:count;
//        num = num>>1;
//    }
//    printf("2?????? ???? ?? 1?? ??????? ??? = %d",count);
//
//}while(1);
//}


//?????????? 8??
//#include <stdio.h>
//#include <conio.h>
//#include <ctype.h>
//
//int main() {
//    char ch;
//    int count = 0;
//
//    do {
//        printf("??????? ????????: ");
//        ch=getche();
//        if(isalpha(ch)) break;
//    }while(1);
//    
//    ch=toupper(ch);
//    printf("\n");
//    do {
//        printf("%c%c",ch,(++count%5)?',':'\n');
//        ch++;
//
//    }while(ch<='z');
//}


//10??
//#include <stdio.h>
//#include <conio.h>
//#include <ctype.h>
//
//int main() {
//    char ch;
//    int sum = 0;
//
//    while(1){
//    printf("\n??? : ");
//    ch = getche();
//
//    if(isalpha(tolower(ch))){
//        printf("\n?????????.");
//    }else if(ch >= 'A'&&ch <= 'z'){
//        printf("\n?빮??????.");
//    }else if(ch>='0'&&ch <= '9'){
//        ch = ch - '0';
//        sum = sum + ch;
//        printf("\n????????. ??????? ??????? ?? = %d",sum);
//    }else{
//        printf("\n??????? ???? ????? ????? ?????? ????????.");
//        break;
//    }
//}
//}

// #include  <stdio.h>

// char mystrcat(const char *sa, const char *sb, char *p){
//     while(*sa){
//         *p=*sa;
//         sa++;
//         p++;
//     }
//     while(*sb){
//         *p=*sb;
//         sb++;
//         p++;
//     }
//     *p='\0';
// }

// int main(int argc,char *argv[]){
//     printf("20193219 박시우\n");
//     argc=3;
//     char plus[100];
//     mystrcat(argv[1],argv[2],plus);
//     printf("plus=%s",plus);
//     return 0;
// }

// #include <stdio.h>

// void mystrcat(const char *sa, const char *sb, char *p){
//     while(*sa){
//         *p = *sa;
//         sa++;
//         p++;
//     }
//     while(*sb){
//         *p = *sb;
//         sb++;
//         p++;
//     }
//     *p = '\0';
// }

// int main(int argc, char *argv[]){
//     printf("20193219 박시우\n");
//     argc = 3;
//     char plus[100];
//     mystrcat(argv[1], argv[2], plus);
//     printf("plus=%s", plus);
//     return 0;
// }

#include <stdio.h>

void mystrcat(const char *sa, const char *sb, char *p){
    while(*sa){
        *p = *sa;
        sa++;
        p++;
    }
    while(*sb){
        *p = *sb;
        sb++;
        p++;
    }
    *p = '\0';
}

int main(int argc, char *argv[]){
    printf("20193219 박시우\n");

    if (argc < 3) {
        printf("인수가 충분하지 않습니다.\n");
        return 1;
    }

    char plus[100];
    mystrcat(argv[1], argv[2], plus);
    printf("plus=%s\n", plus);

    return 0;
}
