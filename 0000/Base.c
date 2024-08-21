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
