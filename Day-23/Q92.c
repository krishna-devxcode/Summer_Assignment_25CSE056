#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i = 0, max = 0;
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0') {
        freq[(unsigned char)str[i]]++;
        i++;
    }

    for(i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            ch = (char)i;
        }
    }

    printf("Maximum occurring character = %c\n", ch);
    printf("Frequency = %d", max);

    return 0;
}