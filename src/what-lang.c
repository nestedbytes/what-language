#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("No command-line argument provided, to run please mention a file name after the executable in the command line eg: ./wli <filename>\n");
        return 1;
    }
    

        
      if (strcmp(argv[1], "--version") == 0) {
        printf("6.0.0. To make sure that your what-language interpreter is in the latest version, run wli with the --update flag on Windows.\n");
    } else if (strcmp(argv[1], "--about") == 0) {
        printf("What-Language is a toy programming language.\n");
        printf("GitHub: https://github.com/shourdev/what-language\n");
    } else if (strcmp(argv[1], "--help") == 0) {
        printf("Run a file: ./wli <filename>\n");
        printf("Get Version:  --version\n");
        printf("About:  --about\n");
 
    } else if (strcmp(argv[1], "--credits") == 0) {
        printf("Designed and made and maintained by Shourjjo Majumder (github.com/shourdev).\n");
   
    } else {
        FILE *fp = fopen(argv[1], "r");
        
        if (fp == NULL) {
            printf("Failed to open file: %s\n", argv[1]);
            return 1;
        }
        
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
                if (strstr(line, "run-")) {
                    fgets(line, sizeof(line), fp);
                    system(line);
                }
                
                if (strstr(line, "exit-")) {
                    fgets(line, sizeof(line), fp);
                    exit(0);
                }
            }
            fclose(fp);
            return (0);
        }
        }
    
    
  
