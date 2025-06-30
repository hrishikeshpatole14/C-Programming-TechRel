 #include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note: space before %c avoids input issues

    // Display ASCII value
    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
