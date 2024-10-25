#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n_cointouses 40

int one_or_to() {
        return (rand() % 2);
}
int count(char str[], int len, char charakter) {
        int n = 0;
        for (int i = 0; i < len; i++) {
                if (str[i] == charakter)
                        n++;
        }
        return n;
}


int longest_secuenz_of(char coin[], char one, char two,  int len) {
        int longest_secuenz = 0;
        for (int i = 0; i < len - 1; i++)
                if ((coin[i] == one) && (coin[i + 1] == two))
                        longest_secuenz++;
                else longest_secuenz = 0;
        return longest_secuenz;
}

void longest_secuenz(int returnarry[], int len, char coin[]) {
        int max[2] = { 0 };
        returnarry[1] = coin[0];

        for (int i = 0; i < len-1; i++) {
                if ((returnarry[1] == coin[i]) && (returnarry[1] == coin[i + 1]))
returnarry[0]++;
                else {
                        if (max[0] < returnarry[0])
                                max[0], max[1] = returnarry[0], returnarry[1];
                        returnarry[1] = coin[i + 1];
                        returnarry[0] = 0;
                }
        }
        returnarry[0], returnarry[1] = max[0], max[1];

}

int main(void) {
        srand(time(0));

        char coin[n_cointouses];
        const char headOrtails[2] = {'K', 90};

        for (int i = 0; i < n_cointouses; i++) {
                coin[i] = headOrtails[one_or_to(0, 1)];
                printf("%c\t", coin[i]);
        }

        int returnarray[2] = {0}, nZ = count(coin, n_cointouses, 'Z');
        printf("There are %d 'Z' and %d 'K'\n", nZ, n_cointouses - nZ);
        printf("The sequenz of 'Z' and 'K' is %d\n", longest_secuenz_of(coin,
90, 75, n_cointouses));
        printf("The longest secuenz of 'Z' is %d\n", longest_secuenz_of(coin,
90, 90, n_cointouses));
        longest_secuenz(returnarray, n_cointouses, coin);
        printf("The longest secuenz is %d of %c", returnarray[0],
returnarray[1]);

        return 0;
}
