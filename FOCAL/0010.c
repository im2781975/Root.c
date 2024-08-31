void Sequential(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = n; j > 1; j--){
            if(i > n - j + 1)
                printf("_");
            else
                printf("%d", j);
        }
        for(int j = 1; j <= n; j++){
            if(j >= n - i + 2)
                printf(" ");
            else
                printf("%d", j);
        }
        printf("\n");
    }
}
