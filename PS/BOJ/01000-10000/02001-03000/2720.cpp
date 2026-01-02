#include <cstdio>

int main() {
    int t;
    int q = 25;
    int d = 10;
    int n = 5;
    int p = 1;

    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int c;

        scanf("%d", &c);

        printf("%d %d %d %d\n", c / q, (c % q)/ d, ((c % q) % d) / n, (((c % q) % d) % n)/ p);
    }

    return 0;
}