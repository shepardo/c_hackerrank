// https://www.hackerrank.com/challenges/pointer-in-c/problem
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int av = *a;
    *a = *a + *b;
    *b = av - *b;
    *b = *b < 0 ? *b * -1 : *b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
