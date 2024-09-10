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
/***/
void AccessElement(){
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
#define SIZE 5
void AccessElement(){
    int arr[SIZE] = {32, 27, 64, 18, 95};
    /*for(size_t i = 0; i < SIZE; ++i)
        arr[i] = 2 * i + 2;*/
    printf("%s%13s", "Element", "value\n");
    for(size_t i = 0; i < SIZE; ++i)
        printf("%5u%12d\n", i, arr[i]);
}
/***/
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
/***/
#define SIZE 10
void sortElement(){
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
/***/
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
/***/
void staticArr(){
    static int arr[3];
    puts("\nAfter Entering Static Func: ");
    for(size_t i = 0; i <= 2; ++i)
        printf("arr[%u] -> %d\n", i, arr[i]);
    puts("\nBefore Exiting Static Func: ");
    for(size_t i = 0; i <= 2; ++i)
        printf("arr[%u] -> %d\n", i, arr[i] += 5);
}
void NonstaticArr(){
    int arr[3] = {1, 2, 3};
    puts("\nAfter Entering NonStatic Func: ");
    for(size_t i = 0; i <= 2; ++i)
        printf("arr[%u] -> %d\n", i, arr[i]);
    puts("\nBefore Exiting NonStatic Func: ");
    for(size_t i = 0; i <= 2; ++i)
        printf("arr[%u] -> %d\n", i, arr[i] += 5);
}
__main(){
    puts("First call ");
    staticArr();
    NonstaticArr();
    puts("Second call ");
    staticArr();
    NonstaticArr();
}
/***/
void print2Darray(){
    int row, col;
    scanf("%d%d", &row, &col);
    int arr[row][col];
    for(int i =0; i < row; i++){
        for(int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}
void Printarray(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("\nElements are: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nSum Of the First two elements are: %d", arr[0] + arr[1]);
    printf("\nFirst Element is: %d", arr[0]);
}
/***/
__main(){
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    printf("%p\n%p\n%d\n", arr, (arr + 1), *(arr + 1));
    printf("Address of elements: ");
    for(int i = 0; i < 9; i++)
        printf("%p\n", &arr[i]);
    int b = 420;
    int *p, *q;
    p = &b;
    printf("Pointer in hexDecimal: %p\nPointer in Decimal: %d\nvalue is: %d\n", p, p, *p);
    *p = 421;
    printf("value after change: %d\n", *p);
    q = p; *q = 422;
    printf("After Swap value is: %d\n", b);
    int **r = &p; **r = 423;
    printf("After Using double pointer value is: %d", **r);
}
/***/
