#include <string.h>
#include <stdio.h>

void getNameAge(char str[], char **name, char **age) {
    int i = 0;
    while (str[i] != ' ' && str[i] != '\0') {
        i++;
    }
    if (str[i] == ' ') {
        str[i] = '\0'; // 이름과 나이를 구분하기 위해 공백을 널 문자로 대체
        *name = str; // 이름은 문자열의 시작부터 공백 전까지
        *age = &str[i + 1]; // 나이는 공백 다음부터
    } else {
        *name = str;
        *age = "";
    }
}

int main() {
    char str1[20];
    char str2[20];
    
    char *name1;
    char *name2;
    char *age1;
    char *age2;

    printf("첫 번째 사람의 이름과 나이를 입력해주세요: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // fgets로 입력 받은 문자열의 개행 문자 제거

    printf("두 번째 사람의 이름과 나이를 입력해주세요: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // fgets로 입력 받은 문자열의 개행 문자 제거

    getNameAge(str1, &name1, &age1);
    getNameAge(str2, &name2, &age2);

    printf("첫 번째 사람: 이름 = %s, 나이 = %s\n", name1, age1);
    printf("두 번째 사람: 이름 = %s, 나이 = %s\n", name2, age2);

    if (!strcmp(name1, name2)) {
        printf("이름이 같습니다.\n");
    } else {
        printf("이름이 다릅니다.\n");
    }
    if (!strcmp(age1, age2)) {
        printf("나이가 같습니다.\n");
    } else {
        printf("나이가 다릅니다.\n");
    }

    return 0;
}
