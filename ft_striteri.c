#include <stdio.h>

void print_char(unsigned int index, char *c) {
    printf("Caractere %d: %c\n", index, *c);
}

void ft_striteri(char *s, void (*f)(unsigned int, char *)) {
    unsigned int i = 0;
    while (s[i]) {
        (*f)(i, &(s[i]));
        i++;
    }
}

int main() {
    char str[] = "Hello, world!";
    ft_striteri(str, print_char);
    return 0;
}