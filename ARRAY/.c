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
