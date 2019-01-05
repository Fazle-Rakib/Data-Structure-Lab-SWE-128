#include <stdio.h>
#include <string.h>

int match(char [], char []);

int main() {
  char a[100], b[100];
  int position;

  printf("Enter The string: ");
  gets(a);

  printf("Enter the substring to find: ");
  gets(b);

  position = match(a, b);

  if(position != -1) {
    printf("Found at location %d\n", position + 1);
  }
  else {
    printf("Not found.\n");
  }

  return 0;
}

int match(char str[], char sub[]) {
  int c, d, e, ln1, ln2, position = -1;

  ln1    = strlen(str);
  ln2 = strlen(sub);

  if (ln2 > ln1) {
    return -1;
  }

  for (c = 0; c <= ln1 - ln2; c++) {
    position = e = c;

    for (d = 0; d < ln2; d++) {
      if (sub[d] == str[e]) {
        e++;
      }
      else {
        break;
      }
    }
    if (d == ln2) {
      return position;
    }
  }

  return -1;
}
