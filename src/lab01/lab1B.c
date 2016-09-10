#include <stdin.h>
#include <stdlib.h>


void test(int user_input, int hardcoded_input) {
  int result = user_input - hardcoded_input;

  if (result >= 21) {
    decrypt(rand());
  } else {
    result = result << 0x2;
    result = result + 0x8048d30;
    decrypt(result);
  }
}


void decrypt (int num) {
  char ct[16] = "Q}|u`sfg~sf{}|a3";
  int len = strlen(&ct);

  for (int i = 0; i < len; i++) {
    char c = ct[i];
    ct[i] = c ^ num;
  }

  if (strcmp("Congratulations!", ct)) {
    system("/bin/sh");
  } else {
    puts("\nInvalid Password!");
  }

}

int main ( ) {
  int pass;
  char * buff[28];
  // use unix epoch as seed for PRNGp
  time_t seed = time(0);
  srand(seed);

  puts('-----------------------------\n');
  puts('--- RPISEC - CrackMe v2.0 ---\n');
  puts('-----------------------------\n'
  printf("Password:");
  scanf("%d", buffer);

  pass = 0x1337d00d;
  test(buff, pass);

  return 0;
}
