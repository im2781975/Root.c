int printLeader(int *arr, int n){
    int j;
    for(int i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] <= arr[j])
                break;
        }
        if(j == n)
            printf("%d ", arr[i]);
    }
}
__main(){
    int n; scanf("%d", &n);
    int arr[n + 2];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printLeader(arr, n);
}
void Leader(){
    int n; scanf("%d", &n);
    int arr[n + 2];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++){
        int flag = 1;
        for(int j = i + 1; j < n; j++){
            if(arr[i] <= arr[j]){
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("%d ", arr[i]);
    }
}
/***/
