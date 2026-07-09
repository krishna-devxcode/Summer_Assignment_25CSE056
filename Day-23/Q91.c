#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int i = 0, len1 = 0, len2 = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while(str1[len1] != '\0') len1++;
    while(str2[len2] != '\0') len2++;

    if(len1 != len2) {
        printf("Strings are not anagrams.");
        return 0;
    }

    while(str1[i] != '\0') {
        freq1[(unsigned char)str1[i]]++;
        freq2[(unsigned char)str2[i]]++;
        i++;
    }

    for(i = 0; i < 256; i++) {
        if(freq1[i] != freq2[i]) {
            printf("Strings are not anagrams.");
            return 0;
        }
    }

    printf("Strings are anagrams.");

    return 0;
}