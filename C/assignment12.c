 #include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note: space before %c to consume any leftover newline

    // Calculate previous and next characters
    char prev = ch - 1;
    char next = ch + 1;

    // Output result
    printf("The previous character is %c\n", prev);
    printf("The next character is %c\n", next);

    return 0;
}
