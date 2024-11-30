#include <stdio.h>
#include <string.h>
#include "../headers/users.h"

#define BUFFER_NAME 32
#define BUFFER_PASS 10

void create_user(struct User *user) {
   char name[BUFFER_NAME];
   printf("Write GUNIX login : ");
   scanf("%s", name);
   strcpy(user->name, name);
   char password[BUFFER_PASS];
   printf("Write GUNIX password : ");
   scanf("%s", password);
   strcpy(user->password, password);
   printf("User Created!\n\n");
}
