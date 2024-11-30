// users.h
#ifndef USERS_H
#define USERS_H

#define BUFFER_NAME 32
#define BUFFER_PASS 10

// Complete definition of struct User
struct User {
  char name[BUFFER_NAME];
  char password[BUFFER_PASS];
};

// Function prototypes
void create_user(struct User *user);
int console(struct User *user);

#endif  // USERS_H
