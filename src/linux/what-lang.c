#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char **argv) {

if (strcmp(argv[1], "--version") == 0){
  printf("5.0.0, to make sure that your what-language interpreter is in the latest version run wli with the --update on windows");
} 
if (strcmp(argv[1], "--about") == 0){
  printf("What-Language is a toy programming language. Website: https://what-language.github.io/ | GitHub: https://github.com/what-language/");
} 
if (strcmp(argv[1], "--help") == 0){
  printf("Run a file:./wli <filename> | Get Version : ./wli --version | About: ./wli --about");
} 


  FILE *fp = fopen(argv[1], "r");
  char line[BUFSIZ];
  while (fgets(line, sizeof line, fp)) {
    if (strstr(line, "tell:")) {
      fgets(line, sizeof line, fp);
      fputs(line, stdout);
    }
    if (strstr(line, "shell:")) {
      fgets(line, sizeof(line), fp);

      system(line);
    }
    if (strstr(line, "inter.gen.console.wait-")) {
      fgets(line, sizeof(line), fp);
      system("read NOTHING");
    }
    
   if (strstr(line, "inter.gen.exit-")) {
        fgets(line, sizeof(line), fp);
exit(0);
}
   if (strstr(line, "inter.gen.shtdwn-")) {
        fgets(line, sizeof(line), fp);
system("shutdown now");




}


  }
}
