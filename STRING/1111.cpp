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
