#include <stdio.h>
typedef struct BLAH {
        int cnt;
        int cnt2;
        char c;
} BLAH;
int display_blah(BLAH a_blah) {
        printf("struct is : %u, %u and %c\r\n", a_blah.cnt, a_blah.cnt2, a_blah.c);
        return(0);
}
int main(int argc, char *argv[])
{
        int i;
        BLAH one;
        for(i = 0; i < 5; i++) {
                if (argc >= 1)
                        printf("you entered something : %s\r\n", argv[1]);
        }
        one.cnt = 1;
        one.cnt2 = one.cnt + 1;
        one.c = ‘a’;
        display_blah(one);
        return (0);
}