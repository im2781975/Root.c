//use of sizeof keyword
#define SIZE 20
size_t GETSIZE(float *ptr){
    return sizeof(*ptr);
}
__main(){
    float arr[SIZE];
    printf("size of arr is: %u", sizeof(arr));
    printf("\nsizeof getsize is: %u", GETSIZE(arr));
}

//Access Element
__main(){
    int arr[] = {2, 3, 1, 5};
    int *ptr = arr;
    for(size_t i = 0; i < SIZE; ++i)
        printf("arr[%u] = %d\n", i, arr[i]);
    for(size_t i = 0; i < SIZE; ++i)
        printf("*(arr + %u) = %d\n", i, *(arr + i));
    for(size_t i = 0; i < SIZE; ++i)
        printf("ptr[%u] = %d\n", i, ptr[i]);
    for(size_t i = 0; i < SIZE; ++i)
        printf("(ptr + %u) = %d\n", i, *(ptr + i));
    for(size_t i = 0; i < SIZE; ++i)
        printf("(ptr + %u) = %d\n", (ptr + i), ptr[i]);
}
