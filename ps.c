#include <stdio.h>

int main() {
    char vowel;
    printf("Enter a vowel (a, e, i, o, or u): ");
    scanf("%c", &vowel);
    
    switch (vowel) {
        case 'a':
            printf("You entered 'a'.\n");
            break;
        case 'e':
            printf("You entered 'e'.\n");
            break;
        case 'i':
            printf("You entered 'i'.\n");
            break;
        case 'o':
            printf("You entered 'o'.\n");
            break;
        case 'u':
            printf("You entered 'u'.\n");
            break;
        default:
            printf("That's not a vowel!\n");
            break;
    }
    
    return 0;
}
