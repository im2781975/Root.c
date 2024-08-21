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

//Bubble Sort
#define SIZE 10
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b; *b = tmp;
}
void BubbleSort(int *arr, size_t size){
    for(unsigned int pass = 0; pass < size - 1; pass++){
        for(size_t j = 0; j < size - 1; j++){
            if(arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}
__main(){
    int arr[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    BubbleSort(arr, SIZE);
    for(size_t i = 0; i < SIZE; i++)
        printf("%u ", arr[i]);
}
