#include <stdio.h>

int main() {
    char vocales[5] = {'a', 'e', 'i','o', ' u'};  
    char *ptr;

    ptr = &vocales[0];

    for (size_t i = 0; i < 5; i++)
    {
        printf("%c", vocales[i]);
    }
    return 0;
}