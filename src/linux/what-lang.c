#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char **argv) {


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


  }
}
