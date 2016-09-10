#include <stdio.h>
#include <stdlib.h>


int main ( ) {
  int input;

  puts('-----------------------------\n');
  puts('--- RPISEC - CrackMe v1.0 ---\n');
  puts('-----------------------------\n');
  printf('Password:');
  scanf("%d", input);

  if (input != 5274) {
    puts("Invalid Password...");
  } else {
    puts("Authenticated!");
    system('/bin/sh');
  }
}
