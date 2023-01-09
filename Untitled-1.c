#include<stdio.h>
#include<string.h>

int main() {
    char c;
    char s[100];
    int count = 0;
    scanf("%c", &c);
    scanf("%s", s);
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == c){
           count += i;
            break;
        }
    }
    if(count != 0){
        printf("%d", count);
    }else
        printf("-1");
    return 0;
}
