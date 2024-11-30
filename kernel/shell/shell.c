#include <stdio.h>
#include <string.h>
#include "../headers/shell.h"

#define BUFFER 32
#define TRUE 1

int console(struct User *user) {
  while(TRUE) {
    char console_input[BUFFER];
    printf("%s_CONSOLE$ ", user->name);
    scanf("%31s", console_input);

    if (strcmp(console_input, "exit") == 0) {
      printf("Exiting from GUNIX!\n\n");
      return 0;
    }
    else {
      printf("Cannot find this command: %s\n", console_input);
    }
  }
}
