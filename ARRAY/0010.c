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
