void String(){
    int n; scanf("%d", &n);
    char str[100][100];
    getchar();
    for(int i = 0; i < n; i++)
        fgets(str[i], sizeof(str[i]), stdin);
    for(int i = 0; i < n; i++)
        printf("%s", str[i]);
}
/***/
#define SZ 128
__main(){
    char str[10][10];
    int i = 0, total = 0;
    while(i < 10){
        printf("Input line %d: ", i + 1);
        if (fgets(str[i], SZ, stdin) != NULL){
            //Remove newline if present
            str[i][strcspn(str[i], "\n")] = '\0';
            i++;
        }
        else
            break;
    }
    total = i;
    for(int i = 0; i < total; i++)
        printf(" %s\n", str[i]);
    puts("\n");
}
/***/
