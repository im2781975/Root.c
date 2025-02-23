#include<stdio.h>
#define sz 2
size_t getsize(float *ptr){
    return sizeof(*ptr);
}
int main(){
    float arr[sz];
    printf("%u", sizeof(arr));
    printf("%u", getsize(arr));
}
#include<stdio.h>
//Access Elements
int main(){
    int arr[] = {2, 3, 1, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    for(size_t i = 0; i < n; i++)
        printf("arr[%u] = %d\t", i, arr[i]);
    puts("");
    for(size_t i = 0; i < n; i++)
        printf("ptr[%u] = %d\t", i, ptr[i]);
    puts("");
    for(size_t i = 0; i < n; i++)
        printf("*(arr + %u) = %d\t", i, *(arr + i));
    puts("");
    for(size_t i = 0; i < n; i++)
        printf("(ptr + %u) = %d\t", i, *(ptr + i));
    puts("");
    for(size_t i = 0; i < n; i++)
        printf("(ptr + %u) = %d\t", (ptr + i), ptr[i]);
}
#include<stdio.h>
//Access Values
#define SZ 5
int main(){
    int arr[SZ] = {2, 3, 1, 5, 4};
    printf("%s%13s", "Element", "value\n");
    for(size_t i = 0; i < SZ; ++i)
        printf("%4u%13d\n", i, arr[i]);
}
#include<stdio.h>
//Bubble sort
void swap(int *a, int *b){
    int tmp = *a; *a = *b; *b = tmp;
}
int bubbleSort(int *arr, size_t n){
    for(size_t pass = 0; pass < n - 1; pass++){
        for(size_t j = 0; j < n - 1; j++){
            if(arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}
int main(){
    int arr[] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for(size_t i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
#include<stdio.h>
// sort elements
int main(){
    int arr[] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(size_t i = 1; i < n; i++){
        for(size_t j = 0; j < n - 1; j++){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for(size_t i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
#include<stdio.h>
// print 2D array
void print(int arr[2][3]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}
int main(){
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int seq[2][3] = {1, 2, 3, 4, 5};
    int mat[2][3] = {{1, 2}, {4}};
    print(arr); print(seq); print(mat);
    
    int row, col; scanf("%d%d", &row, &col);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}
#include<stdio.h>
//static & non static
void statik(){
    static int arr[3];
    for(size_t i = 0; i < 3; i++)
        printf("arr[%u] = %u\t", i, arr[i]);
    puts("");
    for(size_t i = 0; i < 3; i++)
        printf("arr[%u] = %u\t", i, arr[i] += 5);
    puts("");
}
void staticNo(){
    int arr[3] = {0, 0, 0};
    for(size_t i = 0; i < 3; i++)
        printf("arr[%u] = %u\t", i, arr[i]);
    puts("");
    for(size_t i = 0; i < 3; i++)
        printf("arr[%u] = %u\t", i, arr[i] += 5);
    puts("");
}
int main(){
    statik(); statik();
    staticNo(); staticNo();
}
#include<stdio.h>
// sum of first two elements
int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d", arr[0] + arr[1]);
}
#include<stdio.h>
// Address of value
int main(){
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%p\t%p\t%d\n", arr, (arr + 1), *(arr + 1));
    for(int i = 0; i < 9; i++)
        printf("%p\t", &arr[i]);
    int *p, *q, b = 420;
    p = &b;
    printf("Pointer in hexDecimal: %p\nPointer in Decimal: %d\nvalue is: %d\n", p, p, *p);
    *p = 421;
    printf("value after change: %d\n", *p);
    q = p; *q = 422;
    printf("After Swap value is: %d\n", b);
    int **r = &p; **r = 423;
    printf("After Using double pointer value is: %d", **r);
}
#include<stdio.h>
// given array will be beautiful if half or more of the numbers in the array have 7 digits.
int IsBeauti(int *arr, int n){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        while(arr[i] != 0){
            if(arr[i] % 10 == 7){
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
        scanf("%d", &n);
    int x = IsBeauti(arr, n);
    if(n % 2 != 0) n += 1;
    (x >= n / 2) ? puts("Beautiful") : puts("Ugly");
}
#include<stdio.h>
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
                printf("%d %d", i, j);
        }
    }
}
#include<stdio.h>
//calculates the number & positions of "safe rooks" on a chessboard 
//A rook is considered "safe" if no other rook shares the same row or column with it.
int safeRock(int n, int *arr, int *ray){
    int flag = 0, mark[1000];
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(arr[i] == arr[j] || ray[i] == ray[j]){
                mark[i] = 1;
                mark[j] = 1;
            }
        }
        if(mark[i] == 0) flag++;
    }
    printf("Safe rooks = %d\n", flag);
    for(int i = 1; i <= n; i++){
        if(mark[i] == 0)
            printf("%d %d\n", arr[i], ray[i]);
    }
    puts("");
}
int main(){
    int n; scanf("%d", &n);
    int arr[1000], ray[1000];
    for(int i = 1; i <= n; i++){
        int x, y; scanf("%d%d", &x, &y);
        arr[i] = x; ray[i] = y;
    }
    safeRock(n, arr, ray);
}
#include<stdio.h>
int main(){
    int row, col; scanf("%d%d", &row, &col);
    int mat[row][col], rix[row][col], res[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            scanf("%d", &mat[i][j]);
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            scanf("%d", &rix[i][j]);
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < row; j++){
            for(int k = 0; k < col; k++){
                res[i][j] += mat[i][k] * rix[k][j];
            }
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            printf("%d ", res[i][j]);
        puts("");
    }
}
#include<stdio.h>
//Print median
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
    if (n % 2 != 0)
        printf("%d\n", arr[n / 2]);
    else {
        double median = (arr[n / 2] + arr[(n / 2) - 1]) / 2.0;
        printf("%.3f\n", median);
    }
}
#include<stdio.h>
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
#include<stdio.h>
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
#include<stdio.h>
float avgEven(int *arr, int n){
    int sum = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            sum += arr[i];
            cnt++;
        }
    }
    return (cnt == 0) ? 0.0 : float(sum) / cnt;
}
int prime(int *arr, int n){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < 2)
            continue;
        int flag = 1;
        for(int j = 2; j * j <= arr[i]; j++){
            if(arr[i] % j == 0){
                flag = 0; break;
            }
        }
        if(flag) cnt++;
    }
    return cnt;
}
void swapp(int *arr, int n){
    int q; scanf("%d", &q);
    for(int i = 0; i < q; i++){
        int x, y; scanf("%d%d", &x, &y);
        if(x >= 0 && x < n && y >= 0; y < n){
            int tmp = arr[x]; 
            arr[x] = arr[y]; arr[y] = tmp;
        }
    }
}
int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Prime numbers: %d\n", prime(arr, n));
    printf("Average of All Even positive integers: %0.2f\n", avgEven(arr, n));
    swapp(arr, n);
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
#include<stdio.h>
// how many numbers are divisible by 3 and by 5. if there are no such numbers then return -1
int div3(int *arr, int n){
    int cnt3 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 3 == 0 && arr[i] > 0)
            cnt3++;
    }
    return (cnt3 == 0) ? -1 : cnt3;
}
int div5(int *arr, int n){
    int cnt5 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 5 == 0 && arr[i] > 0)
            cnt5++;
    }
    return (cnt5 == 0) ? -1 : cnt5;
}
int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int x = div3(arr, n), y = div5(arr, n);
    if (x == -1 && y == -1) puts("-1")
    else if (x == -1) printf("Total count = %d\n", y);
    else if (y == -1) printf("Total count = %d\n", x);
    else printf("Total count = %d\n", x + y);
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
#include<stdio.h>
int Leader(int *arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] <= arr[j])
                break;
        }
        if(j == n)
            printf("%d ", arr[i]);
    }
}
int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Leader(arr, n);
    for(int i = 0; i < n; i++){
        int flag = 1;
        for(int j = i + 1; j < n; j++){
            if(arr[i] <= arr[j]){
                flag = 0; break;
            }
        }
        if(flag)
            printf("%d ", arr[i]);
    }
}
#include<stdio.h>
//sum of the matrixes & sum of the elements of a matrix
int main(){
    int row, col; scanf("%d%d", &row, &col);
    int mat[row][col], rix[row][col]; 
    int res[row][col], sum = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            scanf("%d", &mat[i][j]);
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            scanf("%d", &rix[i][j]);
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            res[i][j] = mat[i][j] + rix[i][j];
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            printf("%d ", res[i][j]);
        puts("");
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            sum += mat[i][j];
    }
    printf("%d", sum);
}
#include<stdio.h>
int main(){
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
#include<stdio.h>
int main(){
    int row, col; scanf("%d%d", &row, &col);
    int mat[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            scanf("%d", &mat[i][j]);
    }
    //swap column
    for(int i = 0; i < row; i++){
        for(int j = col - 1; j >= 0; j--)
            printf("%d ", mat[i][j]);
        puts("");
    }
    //swap row
    for(int i = row - 1; i >= 0; i--){
        for(int j = 0; j < col; j++)
            printf("%d ", mat[i][j]);
        puts("");
    }
    // swap first & last row
    for(int j = 0; j < col; j++){
        int tmp = mat[0][j];
        mat[0][j] = mat[row - 1][j];
        mat[row - 1][j] = tmp;
    }
    //swap first & last column
    for(int i = 0; i < row; i++){
        int tmp = mat[i][0];
        mat[i][0] = mat[i][col - 1];
        mat[i][col - 1] = tmp;
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            printf("%d ", mat[i][j]);
        puts("");
    }
}
#include<stdio.h>
//OddSum
int main(){
    int arr[] = {10, 21, 35, 42, 57, 68, 73};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(*(arr + i) % 2 == 0)
            sum += *(arr + i);
    }
    printf("%d ", sum);
}
#include<stdio.h>
//spiral matrix
int main(){
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
            if(i != row - 1 && j == col - 1)
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
            if(i == row - 2 && j != col - 1)
                printf("%d ", arr[i][j]);
        }
    }
}
#include<stdio.h>
// Linear Search
int main(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int data, flag = 0; scanf("%d", &data);
    for(int i = 0; i < n; i++){
        if(arr[i] == data)
            flag = 1;
    }
    (flag) ? puts("Found") : puts("Not Found");
}
#include<stdio.h>
int main(){
    int arr[3] = {3, 2, 1};
    int trv[3] = {10, 20, 30};
    int jump = 100;
    for(int i = 0; i < 3; i++){
        jump = arr[i] * 2;
        for(int j = 0; j < 3; j++){
            trv[i] += arr[i];
            jump = trv[i] / 2;
            printf("i = %d, arr[%d] = %d, trv[%d] = %d, jump = %d\n",
                   i, i, arr[i], i, trv[i], jump);
        }
    }
}
#include<stdio.h>
//sort array
int main(){
    int n, arr[100];
    while(scanf("%d", &n) == 1){
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
#include<stdio.h>
//prints the middle element of the array 
//a number of times equal to the size of the array
int main(){
    int t, arr[20];
    while(scanf("%d", &t) == 1){
        while(t--){
            int n; scanf("%d", &n);
            for(int i = 0; i < n; i++){
                scanf("%d", &arr[i]);
                printf("case %d = %d\n", i, arr[i / 2]);
            }
        }
    }
}
