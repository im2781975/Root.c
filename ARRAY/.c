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
