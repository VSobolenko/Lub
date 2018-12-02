#include <stdio.h>
#include <string.h>
 
#define DELIM " \t\n"
 
int main(void) {
    char buf[BUFSIZ], * shortest, * current;
    
    while ( printf("String: ") && fgets(buf, BUFSIZ, stdin) && *buf != '\n' ) {
        shortest = strtok(buf, DELIM);
        while ( current = strtok(NULL, DELIM) ) {
            if ( strlen(shortest) > strlen(current) )
                shortest = current;
        }
        printf("First shortest: %s\n", shortest);
    }
    
    return 0;
}
