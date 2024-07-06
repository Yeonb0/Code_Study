#include <stdio.h>

int CheckLength(const char str[]);
void CheckPalindrome(const char str[], int len);

int main() {
  char str[100];
  int len;
  printf("문자열 입력: ");
  scanf("%s", str);

  len = CheckLength(str);
  CheckPalindrome(str, len); 
  return 0;
}

int CheckLength(const char str[]) {
  int count = 0;
  while (str[count]!= '\0') {
    count++;
  }
  return count;
}

void CheckPalindrome(const char str[], int len) {
  int i;
  for (i = 0; i < len / 2; i++) {
    if (str[i]!= str[len - i - 1]) {
      printf("회문이 아닙니다.\n");
      return;
    }
  }
  printf("회문입니다.\n");
}