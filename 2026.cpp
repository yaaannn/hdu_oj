#include <stdio.h>

int main() {
    char t[110];
    
    while(gets(t)) {
        t[0] -= ' ';
        for(int i = 1; t[i]; i++) {
            if(t[i] == ' ') t[i+1] -= ' '; 
        }
        
        puts(t);
    }
    
    // printf("%c",'a' - ' ');
}
