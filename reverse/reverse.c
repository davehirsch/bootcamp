#include <stdio.h>

int get1line(char s[], int lim) {
  int c, i;
  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!= '\n'; ++i)
    s[i] = c;

  s[i] = '\0';
  return i;
}

int main() {
  char line[1000];
  int length, i;
  length = get1line(line, 1000);
  for (i = length - 1; i >= 0; i--) {
    printf("%c", line[i]);
  }
  printf("\n");
  return 0;
}

