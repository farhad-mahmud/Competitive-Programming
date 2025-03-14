#include <stdio.h>

int main() {
  int n, anton = 0, danik = 0;
  char s[100000];
  scanf("%d", &n);
  scanf("%s", s);

  for (int i = 0; i < n; i++) {
    if (s[i] == 'A') {
      anton++;
    } else {
      danik++;
    }
  }

  if (anton > danik) {
    printf("Anton\n");
  } else if (anton < danik) {
    printf("Danik\n");
  } else {
    printf("Friendship\n");
  }

  return 0;
}
