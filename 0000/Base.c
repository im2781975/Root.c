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

