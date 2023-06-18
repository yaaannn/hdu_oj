#include <stdio.h>
#include <string.h>

int main() {
    int n;
    
    char a[110];
    scanf("%d\n",&n);
    while(n--) {
        int num[5]={0};
        gets(a);
        for(int j = 0; j < strlen(a); j++) {
          if(a[j] == 'a') num[0]++;
          else if(a[j] == 'e') num[1]++;
          else if(a[j] == 'i') num[2]++;
          else if(a[j] == 'o') num[3]++;
          else if(a[j] == 'u') num[4]++;
        }
        printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",num[0],num[1],num[2],num[3],num[4]);
        if(n) puts("");
    }
    
}