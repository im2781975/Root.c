// given array will be beautiful if half or more of the numbers in the array have 7 digits.
int IsBeautiful(int *arr, int n){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        while(arr[i] != 0){
            int dig = arr[i] % 10;
            if(dig == 7){
                cnt++;
                break;
            }
            arr[i] /= 10;
        }
    }
    return cnt;
}
int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int x = IsBeautiful(arr, n);
    if(n % 2 != 0)
        n += 1;
    (x >= n / 2) ? puts("Beautiful") : puts("ugly");
}
// Provide the user with a list of conflict-free, valid marked positions.
int main(){
    int row = 8, col = 8;
    int chess[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            chess[i][j] = 0;
    }
    int n; scanf("%d", &n);
    while(n--){
        int r, c; scanf("%d%d", &r, &c);
        chess[r][c] = 1;
    }
    for(int i = 0; i < row; i++){
        int cnt = 0;
        for(int j = 0; j < col; j++){
            if(chess[i][j] == 1)
                cnt++;
        }
        if(cnt > 1){
            for(int j = 0; j < col; j++)
                chess[i][j] = 0;
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(chess[i][j] != 0)
                printf("%d %d\n", i, j);
        }
    }
}
//calculates and prints the number of "safe rooks" on a chessboard and their positions.
//A rook is considered "safe" if no other rook shares the same row or column with it.
void safeRock(int n, int *arr, int *ray){
    int flag = 0, mark[1000];
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(arr[i] == arr[j] || ray[i] == ray[j]){
                mark[i] = 1; mark[j] = 1;
            }
        }
        if(mark[i] == 0)
            flag++;
    }
    printf("Safe rooks = %d\n", flag);
    for(int i = 1; i <= n; i++){
        if(mark[i] == 0)
            printf("%d %d\n", arr[i], ray[i]);
    }
    printf("\n");
}
int main(){
    int n; scanf("%d", &n);
    int arr[10005], ray[10005];
    for(int i = 1; i <= n; i++){
        int x, y; scanf("%d%d", &x, &y);
        arr[i] = x; ray[i] = y;
    }
    safeRock(n, arr, ray);
}
//matrix multiplication
int main(){
    int row, col; scanf("%d%d", &row, &col);
    int mat1[row][col], mat2[row][col];
    int res, ans[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            scanf("%d", &mat1[i][j]);
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            scanf("%d", &mat2[i][j]);
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            res = 0;
            for(int k = 0; k < row; k++){
                res += mat1[k][i] * mat2[j][k];
                ans[j][i] = res;
            }
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            printf("%d ", ans[i][j]);
        printf("\n");
    }
}
//Median
int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n - 1; i++){
        int flag = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
    if(n % 2 != 0)
        printf("%d\n", arr[n / 2]);
    else {
        float median = ((arr[n / 2] * 1.0) + arr[(n / 2) - 1]) / 2;
        printf("%.3f", median);
    }
}
// Firstly print all the even numbers from 1 to n and followed by those even print all the odd numbers
//in the same range. Finally, find the k-th number in the sequence that you just printed.
int main(){
    int n, k; scanf("%d%d", &n, &k);
    int arr[n], idx = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0)
            arr[idx++] = i;
    }
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0)
            arr[idx++] = i;
    }
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("%dth element in this sequence is %d", k, arr[k - 1]);
}
//If the index & the value is odd or even at the same time then 
//sum the index and value.Return the total sum from the function.
int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0 && arr[i] % 2 == 0)
            sum += i + arr[i];
        else if(i % 2 != 0 && arr[i] % 2 != 0)
            sum += i + arr[i];
    }
    printf("%d", sum);
}
// given a positive integers & contain Q queries,every query will contain two values
//Now need to swap two values and print modified array.
int swapp(int *arr){
    int q; scanf("%d", &q);
    for(int i = 1; i <= q; i++){
        int x, y; scanf("%d%d", &x, &y);
        int tmp = arr[x]; 
        arr[x] = arr[y];
        arr[y] = tmp;
    }
}
float avgEven(int *arr, int n){
    int sum = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            sum += arr[i];
            cnt++;
        }
    }
    float avg = sum / cnt;
    return avg;
}
int primes(int *arr, int n){
    int prime = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1 || arr[i] == 2)
            prime++;
        else{
            int flag = 1;
            for(int j = 2; j < arr[i]; j++){
                if(arr[i] % j == 0){
                    flag = 0; break;
                }
            }
            if(flag == 1)
                prime++;
        }
    }
    return prime;
}
int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    printf("Prime numbers: %d", primes(&arr, n));
    printf("\nAverage of All Even positive integers: %0.2f", avgEven(&arr, n));
    swapp(arr);
    puts();
    for(int i = 1; i <= n; i++)
        printf("%d ", arr[i]);
}
// how many numbers are divisible by 3 and by 5. if there are no such numbers then return -1
int div3(int *arr, int n){
    int cnt3 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 3 == 0 && arr[i] > 0){
            cnt3++;
            arr[i] = 1;
        }
    }
    if(cnt3 == 0)
        return -1;
    else
        return cnt3;
}
int div5(int *arr, int n){
    int cnt5 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 5 == 0 && arr[i] > 0){
            cnt5++;
            arr[i] = 1;
        }
    }
    if(cnt5 == 0)
        return -1;
    else
        return cnt5;
}
int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int x = div3(&arr, n);
    int y = div5(&arr, n);
    if (x == -1 && y == -1)
        printf("-1");
    else if (x == -1 && y > 0)
        printf("Total count = %d", y);
    else if (x > 0 && y == -1)
        printf("Total count = %d", x);
    else
        printf("Total count = %d", x + y);
}
//check Diagonal
int main(){
    int row, col; scanf("%d%d", &row, &col)
    int arr[row][col], flag = 1;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);
            
    }/*
    if(row == col){
        int res = 1;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(i == j)
                    continue;
                if(arr[i][j] != 0)
                    flag = 0;
            }
        }
        (flag == 0) ? puts("Not Diagonal"): puts("Diagonal");
    }*/
    if(row == col){
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(i + j == 2)
                    continue;
                if(arr[i][j] != 0)
                    flag = 0;
            }
        }
        (flag == 0) ? puts("Not Diagonal"): puts("Diagonal");
    }
    else
        puts("Not Diagonal");
}
//Identity matrix
int main(){
    int row, col; scanf("%d%d", &row, &col);
    int arr[row][col], flag = 1;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);
    }
    if(row == col){
        int res = 1;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(i == j)
                    continue;
                if(arr[i][j] == 0)
                    flag = 0;
            }
        }
        (flag == 1)? puts("identity") : puts("Not identity");
    }/*
    if(row == col){
        int res = 1;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(i + j == 2)
                    continue;
                if(arr[i][j] != 0)
                    flag = 0;
            }
        }
        (flag == 1)? puts("identity") : puts("Not identity");
    }*/
    else
        puts("Not identity");
}
