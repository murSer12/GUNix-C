int engish_setted;
char language[] = "";
char en_US[] = "en_US.UTF8";
int root_pass_bool = 0;
char root_pass[] = "";

void language_show()
{
  char en_US[] = "en_US.UTF8";
  printf("[WARNING] This project supports only english!\n");
  printf("%s\n" , en_US);
}

void language_set()
{
  printf("Write language what you what to set (language-show)\n");
  printf("> ");
  scanf("%s" , language);
  if(strcmp(language , en_US) == 0){
    printf("Your language is already english\n");
  }
  else {
    printf("Cannot found language\n");
  }
}

void passwd()
{
  if(root_pass_bool == 1){
    printf("Root already has password!\n");
  }
  else {
    char root_pass_test[] = "";
    printf("Write your password : ");
    scanf("%s" , root_pass);
    printf("Retype your password : ");
    scanf("%s" , root_pass_test);
    if(strcmp(root_pass_test , root_pass) == 0){
      root_pass_bool = 1;
      printf("Root password successfully created!\n");
    }
    else {
      while(1){
       printf("Wrong password , retype password again!\n");
       printf("Retype your password : ");
       scanf("%s" , root_pass_test);
       if(strcmp(root_pass_test , root_pass) == 0){
         root_pass_bool = 1;
         printf("Root password successfully created!\n");
         break;
       }
      }
    }
  }
}
