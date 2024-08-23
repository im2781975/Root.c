//Find cube of x using pointer
void cubeByRef(int *ptr){
    *ptr = (*ptr) * (*ptr) * (*ptr);
}
int cubeByval(int num){
    return num * num * num;
}
__main(){
    int num; 
    scanf("%d", &num);
    int x = num;
    cubeByRef(&num);
    printf("Cube of(ByRef): %d is %d ", x, num);
    int ans = cubeByval(num);
    printf("\nCube of(Byval): %d is %d", num, ans);
}

//Access Element
__main(){
    int x = 7;
    int *ptr = &x;
    printf("Address of x is: %p", &x);
    printf("\nvalue of ptr is: %p", ptr);
    printf("\nvalue of x is: %d", x);
    printf("\nvalue of ptr is: %d", *ptr);
    printf("\n&*ptr = %p", &*ptr);
    printf("\n*&ptr = %p", *&ptr);
}

//Find Fib series
unsigned long long int fib(unsigned int n){
    if(n == 0 || n == 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}
__main(){
    unsigned int num;
    printf("Enter number: ");
    scanf("%u", &num);
    unsigned long long int res = fib(num);
    printf("Fib[%u] = %llu ", num, res);
}

//Factorial
unsigned long long int fact(unsigned int n){
    if(n <= 1)
        return 1;
    return (n * fact(n - 1));
}
__main(){
    for(unsigned int i = 1; i <= 21; ++i)
        printf("%u! = %llu\n", i, fact(i));
}
