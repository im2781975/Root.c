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
void Sequential(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = n; j > 1; j--){
            if(i >= j)
                printf("%d", j);
            else
                printf("_");
        }
        for(int j = 1; j <= n; j++){
            if(i >= j)
                printf("%d", j);
            else
                printf(" ");
        }
        printf("\n");
    }
}
/***/
void PrintM(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((j == 0 || j == n - 1) || (i % 2 != 0 && j % 2 != 0 && i <= n/2) || (i % 2 == 0 && j % 2 == 0 && i <= n/2 && i != 0))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void PrintM(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((j == 0 || j == n - 1) || (i == j || j == n - 1 - i) && i < n/2 )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
/***/
void Rombo(){
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2*n; j++){
            if(j <= n - 2 - i || j >= 2*n - i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}
/***/
void Pattern(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j == 1)
                printf("%d ", i);
            else if(j == n)
                printf("%d ", n - i);
            else if(i == 1 || i == n)
                printf("+");
            else if(i == (n/2) + 1 && j == (n/2) + 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
