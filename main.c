#include <stdio.h>
int main(int argc, char *argv[])
{
        int i;
        for(i = 0; i < 5; i++) {
                if (argc >= 1)
                        printf("you entered something : %s\r\n", argv[1]);
        }
        return (0);
}