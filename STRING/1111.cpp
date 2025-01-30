#include<stdio.h>
int main(){
    int x, sum = 0; char str[20];
    scanf("%s", &str);
    if(strcmp(str, "donate") == 0){
        scanf("%d", &x);
        sum += x;
    }
    else
        printf("%d", sum);
        
    while(gets(str)){
        if(strcmp(str, "*") == 0)
            break;
        else if(strcmp(str, "Hajj") == 0)
            puts("Hazz-e-Akbar");
        else if(strcmp(str, "Umrah") == 0)
            puts("Hazz-e-Asghar")
    }
    
    gets(str);
    if(strlen(str) == 5)
        puts("3");
    else if((str[0] == 'o' && str[1] == 'n') || (str[0] == 'o' && str[1] == 'e') || (str[1] == 'n' && str[2] == 'e') || (str[0] == 'o' && str[2] == 'e') || (str[0] == 'o' && str[2] == 'n'))
        puts("1");
    else
        puts("2");
}
#include<stdio.h>
int main(){
    char str[100]; gets(str);
    int cnt = 0;
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        if((str[i] == 'a') || (str[i] == 'd') || (str[i] == 'g') || (str[i] == 'j') || (str[i] == 'm') || (str[i] == 'p') || (str[i] == 't') || (str[i] == 'w') || (str[i] == ' '))
            cnt += 1;
        else if((str[i] == 'b') || (str[i] == 'e') || (str[i] == 'h') || (str[i] == 'k') || (str[i] == 'n') || (str[i] == 'q') || (str[i] == 'u') || (str[i] == 'x'))
            cnt += 2;
        else if((str[i] == 'c') || (str[i] == 'f') || (str[i] == 'i') || (str[i] == 'l') || (str[i] == 'o') || (str[i] == 'r') || (str[i] == 'v') || (str[i] == 'y'))
            cnt += 3;
        else if((str[i] == 's') || (str[i] == 'z'))
            cnt += 4;
    }
    printf("%d", cnt);
}
