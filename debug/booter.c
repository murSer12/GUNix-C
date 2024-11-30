#include <stdio.h>
#include <stdlib.h>
#include "../kernel/headers/users.h"
#include "../kernel/headers/con-test.h"
#include "../kernel/headers/p-con.h"
#include "../kernel/headers/time.h"
#include "../kernel/headers/shell.h"


#define BUFFER_NAME 32
#define BUFFER_PASS 10

// Define the User structure
struct User {
  char name[BUFFER_NAME];
  char password[BUFFER_PASS];
};

int main() {
  struct User *user = (struct User*) malloc(sizeof(struct User));

  if (user == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("All kernel's functions were loaded and ended [OK]\n");

  printf("Start Ethernet Test function [LOAD]\n");
  test_con();

  printf("\t\t!Welcome to My Operational System(GUNIX)!\n\n");

  create_user(user);

  printf("Shell [LOAD]\n\n");

  console(user);
  free(user);

  return 0;
}
