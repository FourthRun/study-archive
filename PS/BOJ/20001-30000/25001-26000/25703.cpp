#include <cstdio>

int main() {
    int num;

    scanf("%d", &num);

    printf("int a;\nint *ptr = &a;\n");
    if(num >= 2) printf("int **ptr2 = &ptr;\n");

    for(int i = 2; i < num; i++) {
        printf("int ");

        for(int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("ptr%d = &ptr%d;\n", i + 1, i);
    }

    return 0;
}