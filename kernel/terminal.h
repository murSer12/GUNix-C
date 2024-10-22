void terminal()
{
  while (1) {
    char input[] = "";
    printf("root@gunix : ");
    scanf("%s" , input);
    if(input == "exit"){
      break;
    }
    else if(strcmp(input , "language-show") == 0){
      language_show();
    }
    else if(strcmp(input , "language-set") == 0){
      language_set();
    }
    else if(strcmp(input , "passwd") == 0){
      passwd();
    }
  }
}
