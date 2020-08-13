// https://www.hackerrank.com/challenges/playing-with-characters/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 100

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char ch;
    char buf[MAX_LEN];
    scanf("%c", &ch);
    getchar();
    printf("%c\n", ch);
    fgets(buf, sizeof(buf), stdin);
    //getchar();
    printf("%s", buf);
    buf[0] = '\0';
    fgets(buf, sizeof(buf), stdin);
    printf("%s", buf);
    return 0;
}
