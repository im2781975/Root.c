int printLeader(int *arr, int n){
    int j;
    for(int i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] <= arr[j])
                break;
        }
        if(j == n)
            printf("%d ", arr[i]);
    }
}
__main(){
    int n; scanf("%d", &n);
    int arr[n + 2];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printLeader(arr, n);
}
void Leader(){
    int n; scanf("%d", &n);
    int arr[n + 2];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++){
        int flag = 1;
        for(int j = i + 1; j < n; j++){
            if(arr[i] <= arr[j]){
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("%d ", arr[i]);
    }
}
/***/
void MatrixSum(){
    int row, col; scanf("%d%d", &row, &col);
    int arr[row][col], sec[row][col], res[row][col];
    puts("Enter First array: ");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    puts("Enter Second array: ");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("sec[%d][%d] = ", i, j);
            scanf("%d", &sec[i][j]);
        }
    }
    puts("Matrix sum is: ");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            res[i][j] = arr[i][j] + sec[i][j];
            printf("res[%d][%d] = %d\n", i, j, res[i][j]);
        }
    }
}
void MatrixSum(){
    int row, col; scanf("%d%d", &row, &col);
    int arr[row][col], sum = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
            printf("arr[%d][%d] = %d\n", i, j, sum);
        }
    }
}
/***/
__main(){
    int n, k; scanf("%d%d", &n, &k);
    int x = n - k;
    if(x > 0){
        switch(x){
            case 1:
                puts("Diffrence Less than or equal to 5");
                break;
            case 2:
                puts("Diffrence Less than or equal to 5");
                break;
            case 3:
                puts("Diffrence Less than or equal to 5");
                break;
            case 4:
                puts("Diffrence Less than or equal to 5");
                break;
            case 5:
                puts("Diffrence Less than or equal to 5");
                break;
            default:
                puts("x is greater than 5");
                break;
        }
    }
    else
        puts("____");
}
/***/
void swaprow(){
    int row, col; scanf("%d%d", &row, &col);
    int arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }/*
    for(int i = 0; i < row; i++){
        for(int j = col - 1; j >= 0; j--){
            printf("\narr[%d][%d] = %d", i, j, arr[i][j]);
        }
    }*/
    //swap 1st & last row
    for(int j = 0; j < col; j++){
        int tmp = arr[0][j];
        arr[0][j] = arr[row - 1][j];
        arr[row - 1][j] = tmp;
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            printf("\narr[%d][%d] = %d", i, j, arr[i][j]);
    }
}
void SwapCol(){
    int row, col; scanf("%d%d", &row, &col);
    int arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }/*
    for(int i = row - 1; i >= 0; i--){
        for(int j = 0; j < col; j++)
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
    }*/
    for(int i = 0; i < row; i++){
        int tmp = arr[i][0];
        arr[i][0] = arr[i][col - 1];
        arr[i][col - 1] = tmp;
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
}
/***/
int Oddsum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(*(arr + i) % 2 != 0)
            sum += *(arr + i);
    }
    return sum;
}
__main(){
    int arr[] = {10, 21, 35, 42, 57, 68, 73};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = Oddsum(arr, n);
    printf("oddSum is: %d", sum);
}
/***/
void SpiralMatrix(){
    int row = 3, col = 4;
    int arr[row + 2][col + 2];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == 0 && j != col - 1)
                printf("%d ", arr[i][j]);
            if(i!= row - 1 && j == col - 1)
                printf("%d ", arr[i][j]);
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = col - 1; j >= 0; j--){
            if(i == row - 1)
                printf("%d ", arr[i][j]);
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == row - 2 && j != col - 1 )
                printf("%d ", arr[i][j]);
        }
    }
}
/***/
void Jumparr(){
    int arr[4] = {3, 2, 1};
    int trv[4] = {10, 20, 30};
    int jump = 100;
    for(int i = 0; i < 3; i++){
        jump = arr[i] * 2;
        for(int j = 0; j < 3; j++){
            trv[i] = arr[i] + trv[i];
            jump = trv[i] / 2;
            printf("i = %d A[%d] = %d B[%d] = %d jump = %d\n", i, i, arr[i], i, trv[i], jump);
        }
    }
}
/***/
void sortArr(){
    int n, arr[100];
    while(scanf("%d", &n) == 1){
        if(n == 0)
            break;
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for(int i = 0; i < 120; i++){
            for(int j = 0; j < n; j++){
                if(arr[j] == i)
                    printf("%d ", i);
            }
        }
    }
}
