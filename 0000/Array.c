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

//Sort Elements
#define SIZE 10
__main(){
    int arr[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    puts("Elements Before Sort: ");
    for(size_t i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    for(unsigned int i = 1; i < SIZE; ++i){
        for(unsigned int j = 0; j < SIZE - 1; ++j){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    puts("\nElements after sort: ");
    for(size_t i = 0; i < SIZE; ++i)
        printf("%d ", arr[i]);
}

//print 2D
void print(int arr[][3]){
    for(size_t i = 0; i <= 1; i++){
        for(size_t j = 0; j <= 2; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
__main(){
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    puts("Array is: ");
    print(arr);
    int seq[2][3] = {1, 2, 3, 4, 5};
    puts("Seq is: ");
    print(seq);
    int matrix[2][3] = {{1, 2}, {4}};
    puts("Matrix is: ");
    print(matrix);
}
