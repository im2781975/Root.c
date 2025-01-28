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
void MatrixSum(){
    int row, col; scanf("%d%d", &row, &col);
    int arr[row][col], sec[row][col], res[row][col];
    puts("Enter First array: ");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    puts("Enter Second array: ");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("sec[%d][%d] = ", i, j);
            scanf("%d", &sec[i][j]);
        }
    }
    puts("Matrix sum is: ");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            res[i][j] = arr[i][j] + sec[i][j];
            printf("res[%d][%d] = %d\n", i, j, res[i][j]);
        }
    }
}
void MatrixSum(){
    int row, col; scanf("%d%d", &row, &col);
    int arr[row][col], sum = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
            printf("arr[%d][%d] = %d\n", i, j, sum);
        }
    }
}
/***/
__main(){
    int n, k; scanf("%d%d", &n, &k);
    int x = n - k;
    if(x > 0){
        switch(x){
            case 1:
                puts("Diffrence Less than or equal to 5");
                break;
            case 2:
                puts("Diffrence Less than or equal to 5");
                break;
            case 3:
                puts("Diffrence Less than or equal to 5");
                break;
            case 4:
                puts("Diffrence Less than or equal to 5");
                break;
            case 5:
                puts("Diffrence Less than or equal to 5");
                break;
            default:
                puts("x is greater than 5");
                break;
        }
    }
    else
        puts("____");
}
/***/
void swaprow(){
    int row, col; scanf("%d%d", &row, &col);
    int arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }/*
    for(int i = 0; i < row; i++){
        for(int j = col - 1; j >= 0; j--){
            printf("\narr[%d][%d] = %d", i, j, arr[i][j]);
        }
    }*/
    //swap 1st & last row
    for(int j = 0; j < col; j++){
        int tmp = arr[0][j];
        arr[0][j] = arr[row - 1][j];
        arr[row - 1][j] = tmp;
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            printf("\narr[%d][%d] = %d", i, j, arr[i][j]);
    }
}
void SwapCol(){
    int row, col; scanf("%d%d", &row, &col);
    int arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }/*
    for(int i = row - 1; i >= 0; i--){
        for(int j = 0; j < col; j++)
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
    }*/
    for(int i = 0; i < row; i++){
        int tmp = arr[i][0];
        arr[i][0] = arr[i][col - 1];
        arr[i][col - 1] = tmp;
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
}
/***/
int Oddsum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(*(arr + i) % 2 != 0)
            sum += *(arr + i);
    }
    return sum;
}
__main(){
    int arr[] = {10, 21, 35, 42, 57, 68, 73};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = Oddsum(arr, n);
    printf("oddSum is: %d", sum);
}
/***/
void SpiralMatrix(){
    int row = 3, col = 4;
    int arr[row + 2][col + 2];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == 0 && j != col - 1)
                printf("%d ", arr[i][j]);
            if(i!= row - 1 && j == col - 1)
                printf("%d ", arr[i][j]);
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = col - 1; j >= 0; j--){
            if(i == row - 1)
                printf("%d ", arr[i][j]);
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == row - 2 && j != col - 1 )
                printf("%d ", arr[i][j]);
        }
    }
}
/***/
void Jumparr(){
    int arr[4] = {3, 2, 1};
    int trv[4] = {10, 20, 30};
    int jump = 100;
    for(int i = 0; i < 3; i++){
        jump = arr[i] * 2;
        for(int j = 0; j < 3; j++){
            trv[i] = arr[i] + trv[i];
            jump = trv[i] / 2;
            printf("i = %d A[%d] = %d B[%d] = %d jump = %d\n", i, i, arr[i], i, trv[i], jump);
        }
    }
}
/***/
void sortArr(){
    int n, arr[100];
    while(scanf("%d", &n) == 1){
        if(n == 0)
            break;
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for(int i = 0; i < 120; i++){
            for(int j = 0; j < n; j++){
                if(arr[j] == i)
                    printf("%d ", i);
            }
        }
    }
}
//prints the middle element of the array a number of times equal to the size of the array
void print(){
    int t, n, arr[200];
    while(scanf("%d", &t) == 1){
        for(int i = 0; i < t; i++){
            scanf("%d", &n);
            for(int j = 0; j < n; j++){
                scanf("%d", &arr[j]);
                printf("case %d = %d\n", i, arr[j / 2]);
            }
        }
    }
}
//compute the number of ways to choose 2 items out of x items (since ans = x * (x - 1) 
//corresponds to the combinatorial x * (x−1), often divided by 2 to avoid counting permutations of the same pair). 
void FindWays(){
    int n, x; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &x);
        long long ans = (long long)x * (x - 1);
        printf("Case %d: ", i);
        (ans % 4 == 0)? printf("%lld\n", ans / 4) : printf("%lld/2\n", ans/2);
    }
}
//counting the number of swaps required to sort an array
int arr[100];
void sortarr(){
    int n, x;
    int cnt = 0;
    while(scanf("%d", &n) == 1){
        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            arr[x] = i;
        }
        int swap = 0, pos = -1;
        for(int i = 0; i < n; i++){
            if(arr[i] < pos){
                swap++;
                pos = n + 1;
            }
            else
                pos = arr[i];
        }
        printf("case %d = %d\n", ++cnt, swap);
    }
}
/***/
void FibSeries(){
    int arr[60], n;
    while(scanf("%d", &n) == 1){
        if(n == 0)
            break;
        arr[0] = 1; arr[1] = 1;
        for(int i = 2; i <= n + 1; i++)
            arr[i] = arr[i - 1] + arr[i - 2];
        printf("%d", arr[n + 1]);
    }
}
/***/
void SelectionSort(){
    int num, arr[100]; scanf("%d", &num);
    for(int i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    for(int i = 1; i < num; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for(int i = 0; i < num; i++)
        printf("%d ", arr[i]);
}
/***/
void sortAge(){
    int n, age[1000];
    while(true){
        scanf("%d", &n);
        if(n == 0) break;
        for(int i = 0; i < n; i++)
            scanf("%d", &age[i]);
        sort(age, age + n);
        for(int i = 0; i < n; i++)
            printf("%d ", age[i]);
    }
}
/***/
void ReverseAndAdd(){
    int t, num;
    while(scanf("%d", &t) == 1){
        for(int i = 1; i <= t; ++i){
            scanf("%d", &num);
            long long int original = num;
            int step = 0;
            while(true){
                int rev = 0;
                while(num != 0){
                    rev = rev * 10 + num % 10;
                    num /= 10;
                    if(num == original)
                        break;
                    else{
                        num = rev + original;
                        original += rev;
                        steo++;
                        
                    }
                }
            }
            printf("%d %d", step, original);
        }
    }
}
/***/
__main(){
    int n; 
    while(scanf("%d", &n) == 1){
        int sum = 0;
        if(n == 0) break;
        for(int i = 1; i <= n/2; i++){
            if(n % i == 0){
                sum += i;
                printf("%d ", sum);
            }
            if(sum == n) printf("Perfect\n");
            else if(sum < n) printf("Deficient\n");
            else printf("Abundent\n");
        }
    }
}
/***/
void CntSwap(){
    int n, swaped = 0; scanf("%d", &n);
    int arr[n + 5];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
                swaped++;
            }
        }
    }
    printf("Total Swap takes: %d", swaped);
}
/***/
void TOSS(){
    int n; scanf("%d", &n);
    char ch;
    int head = 0, tail = 0;
    for(int i = 0; i < n; i++){
        scanf(" %c", &ch);
        if(ch == 'H') head++;
        else tail++;
    }
    if(head > tail) puts("England");
    else puts("Pakistan");
}
/***/
void ClosestToCentury(){
    int t; scanf("%d", &t);
    while(t--){
        int n, min; scanf("%d", &n);
        int left[10], right[10];
        while(n--){
            scanf("%d", &left[i]);
            right[i] = abs(left[i] - 100);
        }
        min = right[0];
        for(int i = 0; i < n; i++){
            if(right[i] < min) min = right[i];
        }
        printf("%d", abs(min - 100));
    }
}
/***/
void HelpICC(){
    int t; scanf("%d", &t);
    while(t--){
        int arr[6], cnt = 0;
        for(int i = 0; i < 6; i++)
            scanf("%d", &arr[i]);
        for(int i = 0; i < 6; i++){
            if(arr[i] > 0)
                cnt++;
        }
        (cnt > 0) ? puts("No") : puts("Yes");
    }
}
/***/
void PerfectSquare(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        int cnt = 0, arr[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for(int i = 0; i < n; i++){
            int r = sqrt(arr[i]);
            if(arr[i] = r * r)
                cnt++;
        }
        (cnt != 0)?printf("%d", cnt) : printf("-1");
    }
}
/***/
void WhiteWalkerAndCandies(){
    int t; scanf("%d", &t);
    while(t--){
        int n, x; scanf("%d%d", &n, &x);
        int sum = 0, arr[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for(int i = 0; i < n; i++)
            sum += arr[i] * 2;
        (sum > x) ? puts("No") : puts("Yes");
    }
}
/***/
void Pattern(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        printf("%d", i);
    printf("\n");
    for(int i = 2; i <= n - 1; i++){
        printf("%d", i);
        for(int j = 1; j <= n - 2; j++)
            printf(" ");
        printf("%d\n", n - i + 1);
    }
    for(int i = n; i >= 1; i--)
        printf("%d", i);
}
/***/
__main(){
    int a, b; scanf("%d%d", &a, &b);
    if(a > b) puts("Arg");
    else if(b > a) puts("Brasil");
    else {
        char x[6], y[6];
        int ans = 0, res = 0;
        while(true){
            scanf("%s%s", x, y);
            for(int i = 0; i < 5; i++){
                if(x[i] == '1') ans++;
                else if(y[i] == '1') res++;
            }
            if(ans > res){
                printf("Arg");
                break;
            }
            else if(ans < res){
                printf("Brasil");
                break;
            }
        }
    }
}
/***/
void Transpose(){
    int row, col; scanf("%d%d", &row, &col);
    int arr[row][col], ans[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            ans[i][j] = arr[j][i];
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            printf("%d ", ans[i][j]);
        printf("\n");
    }
}
/***/
void AddToIdx(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int Q, idx, val; scanf("%d", &Q);
    while(Q--){
        scanf("%d%d", &idx, &val);
        arr[idx] += val;
    }
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
/***/
//There's a chessboard of size 3×3 have placed R rooks  on it. 
//others cells are empty. Now  need to tell the total empty cells and their position (row,col)
void FindEmptyCell(){
    int n; scanf("%d", &n);
    int arr[4][4];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            arr[i][j] = 0;
    }
    for(int i = 0; i < n; i++){
        scanf("%d%d", &x, &y);
        arr[x][y] = 1;
    }
    printf("Total empty cell - %d", 9 - n);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] == 0)
                printf("%d%d\n", i, j);
        }
    }
}
/***/
//print "Yes" or "No",if the array contain Duplicate value or not
void Duplicate(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int val = arr[0], cont = 1;
    for(int i = 1; i < n; i++){
        if(val != arr[i]){
            cont = 0;
            break;
        }
    }
    (cont == 1) ? puts("Yes") : puts("No");
} 
/***/
//count the prime number from the array & print them
void CountPrime(){
    int n; scanf("%d", &n);
    int arr[n], ans[n], k = 0;
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i > n; i++){
        int sum = 0;
        for(int j = 2; j <=(arr[i]/2); j++){
            if(arr[i] % j == 0)
                sum++;
        }
        if(sum == 0){
            ans[k] = arr[i];
            k++;
        }
    }
    printf("%d\n", k);
    for(int i = 0; i < k; i++)
        printf("%d ", ans[i]);
}
/***/
void CountFib(){
    int n; scanf("%d", &n);
    int fib = 0, first = 0, second = 1;
    for(int i = 0; i < n; i++){
        if(i <= 1)
            fib = i;
        else{
            fib = first + second;
            first = second;
            second = fib;
        }
        printf("fib[%d] = %d\n", i, fib);
    }
    
}
/***/
void NthSmallest(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int x; scanf("%d", &x);
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j]; arr[j] = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(i == x)
            printf("%d", arr[x - 1]);
    }
}
/***/
void FreqArr(){
    int arr[8] = {7, 8, 6, 3, 9, 5, 3, 1};
    int max = INT_MIN;
    for(int i = 0; i < 8; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    int freq[max + 1];
    for(int i = 0; i <= max; i++)
        freq[i] = 0;
    for(int i = 0; i < 8; i++)
        freq[arr[i]]++;
    for(int i = 0; i <= max; i++){
        /*if(freq[i] != 0)
            printf("freq[%d] = %d\n", i, freq[i]);*/
        for(int j = 1; j <= freq[i]; j++)
            printf("%d ", i);
    }
}
/***/
void unique(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int unique[n], idx = 0;
    for(int i = 0; i < n; i++){
        int select = arr[i], found = 0;
        for(int j = 0; j < n; j++){
            if(unique[j] == select)
                found = 1;
        }
        if(found == 0){
            unique[idx] = arr[i];
            idx++;
        }
    }
    for(int i = 0; i < idx; i++)
        printf("%d ", unique[i]);
}
/***/
int reverse(int *arr, int n){
    for(int i = 0, int j = n - 1; i < n / 2; i++, j++){
        int tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp;
    }
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int reverse(int *arr, int n){
    int rev[n + 1];
    for(int i = n - 1, int j = 0; i >= 0; i--, j++)
        rev[j] = arr[i];
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int reverse(int *arr, int n){
    for(int i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
}
/***/
__main(){
    int t; scanf("%d", &t);
    while(t--){
        int i = 0;
        int n; scanf("%d", &n);
        int arr[n], l = 0, r = 0;
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for(int i = 0; i < n - 1; i++)
            (arr[i] < arr[i + 1]) ? l++: r++;
        printf("case %d : %d %d\n", ++i, l, r);
    }
}
/***/
void Allocation(){
    int n; scanf("%d", &n);
    int *ptr = (int*)malloc(n * sizeof(int));
   //int *ptr = (int*)calloc(n, sizeof(int));
    printf("Memory Address is: %p\n", ptr);
    if(ptr == NULL)
        puts("Allocation Failed");
    else {
        for(int i = 0; i < n; i++)
            scanf("%d", (ptr + i));
        for(int i = 0; i < n; i++)
            printf("%d - %d\n", i, *(ptr + i));
    }
    ptr = (int*)realloc(ptr, (n + 5) * sizeof(int));
    printf("Memory Address is: %p\n", ptr);
    if(ptr == NULL)
        puts("Allocation Failed");
    else {
        for(int i = n; i < n + 5; i++)
            scanf("%d", (ptr + i));
        for(int i = n; i < n + 5; i++)
            printf("%d - %d\n", i, *(ptr + i));
    }
    free(ptr);
}
/***/
// is it possible to make target by adding any two different values from a array.
void MakeTarget(){
    int n; scanf("%d", &n);
    int arr[n + 5];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int trg; scanf("%d", &trg);
    int cnt = 0;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] + arr[i + 1] == trg)
            cnt++;
    }
    (cnt > 0) ? puts("Yes") : puts("No");
}
/***/
int solve(int arr[], int n){
    for(int i = 1; i <= n; i++)
        arr[i - 1] = i - 1;
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

int solve(int arr[], int n){
    for(int i = 1; i <= n; i++)
        arr[i - 1] = i;
    for(int i = 1; i <= n; i++)
        sum += arr[i - 1];
    printf("%d ", sum);
}
/***/
//an array need to print the values and for every value, you need to print other values than that
void PrintVal(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++){
        printf("%d - ", arr[i]);
        for(int j = 0; j < n; j++){
            if(i != j)
                printf("%d ", arr[j]);
        }
        printf("\n");
    }
}
/***/
void printarr(){
    int i = 1, j = 0;
    int arr[2][3] = {
        {10, 20, 30}, {40, 50, 60}
    };
    arr[j][i] = arr[i][j];
    printf("arr[%d][%d] = %d\narr[%d + 1][%d + 1] = %d", i, j, arr[i][j], j, i, arr[j + 1][i + 1]);
}
/***/
void printarr(){
    int arr[5] = {1, 2, 3, 4, 5};
    int i = 5, j;
    while(i >= 1){
        arr[i - 1] -= 1;
        while(true){
            arr[i - 1] += i;
            break;
        }
        i--;
    }
    for(int j = 0; j < 5; j++)
        printf("%d ", arr[j]);
}
/***/
//sort the arrays in ascending & discending order and print difference
main(){
    int n; scanf("%d", &n);
    int arr[n], tmp[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++)
        scanf("%d", &tmp[i]);
    int min, max;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[i]){
                min = arr[i]; arr[i] = arr[j]; 
                arr[j] = min;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(tmp[j] > tmp[i]){
                max = tmp[i]; tmp[i] = tmp[j];
                tmp[j] = max;
            }
        }
    }
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i] - tmp[i]);
}
/***/
void selectionSort(){
    int n; scanf("%d", &n);
    int arr[n], sorted[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++){
        int min = INT_MAX, idx = -1;
        for(int j = 0; j < n; j++){
            if(arr[j] != INT_MAX && arr[j] < min){
                min = arr[j];
                idx = j;
            }
        }
        sorted[i] = min;
        arr[idx] = 999;
        for(int k = 0; k < n; k++)
            printf("%d ", arr[k]);
        puts("");
    }
    for(int i = 0; i < n; i++)
        printf("%d ", sorted[i]);
}
/***/
void NthLargest(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int maxi = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > maxi)
            maxi = arr[i];
    }
    int sorted[maxi + 1], UniqueDup[maxi + 1];
    for(int i = 0; i < maxi; i++){
        sorted[i] = 0;
        UniqueDup[i] = 0;
    }
    for(int i = 0; i < n; i++){
        sorted[arr[i]] += 1;
        UniqueDup[arr[i]] += 1;
    }
    int cnt = 0, Unique = 0, Dup = 0;
    for(int i = maxi; i >= 0; i--){
        if(sorted[i] > 0)
            cnt++;
        if(cnt == 3){
            printf("3rd Largest Element is: %d", i);
            break;
        }
    }
    for(int i = 0; i <= maxi; i++){
        if(UniqueDup[i] == 1)
            Unique++;
        else if(UniqueDup[i] > 1)
            Dup++;
    }
    printf("\nDuplicate: %d\nUnique: %d", Unique);
}
/***/
void BubbleSort(){
    int n; scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < (n - 1); j++){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j]; arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
/***/
void LinearSearch(){
    int n; scanf("%d", &n);
    int arr[n], flag = 0;
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int data; scanf("%d", &data);
    for(int i = 0; i < n; i++){
        if(arr[i] == data)
            flag = 1;
    }
    (flag == 1) ? puts("Found"): puts("Not Found");
}
/***/
