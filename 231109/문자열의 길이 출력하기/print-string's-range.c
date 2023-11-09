#include <stdio.h>
#include <string.h>

int main() {
    char array1[101];
    char array2[101];

    int len1, len2;

    scanf("%s", array1);
    scanf("%s", array2);

    len1=strlen(array1);
    len2=strlen(array2);

    printf("%d", len1+len2);


    return 0;
}