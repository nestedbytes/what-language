#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main( int argc, char *argv[]) {
    FILE *fp = fopen(argv[1],"r");
  char line[BUFSIZ];
  while (fgets(line, sizeof line, fp)) {
  if (strstr(line, "tell:")) {
      fgets(line, sizeof line, fp);
     fputs(line, stdout);
    }
   


  }
}