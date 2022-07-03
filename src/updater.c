#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>


void main( int argc, char *argv[]) {
     system("powershell Invoke-WebRequest https://raw.githubusercontent.com/what-language/interpreter/main/version.txt -OutFile \version.txt");
    FILE *fp = fopen(argv[1],"r");
  char line[BUFSIZ];
  while (fgets(line, sizeof line, fp)) {
  if (strstr(line, "1.1.0")) {
 
  printf("Version is up to data!");
   }
    else{
     
        system("start https://github.com/what-language/interpreter/releases/");
       
    }


  }
}
