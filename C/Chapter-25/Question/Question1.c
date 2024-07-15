#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int len;
    char *str;

    printf("Enter the max length of the String: ");
    scanf("%d", &len);
    getchar();  // \n 삭제

    str = (char*)malloc((len + 1) * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the string: ");
    fgets(str, len + 1, stdin);

    // Remove trailing newline character if present
    size_t length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Print words in reverse order
    for (int i = length - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            printf("%s ", &str[i + 1]);
            str[i] = '\0';
        }
    }
    printf("%s", str);

    free(str);
    return 0;
}
