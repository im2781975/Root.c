#include<stdio.h>
enum week{sat, sun, mon, tue, wed, thu, fri};
int main(){
    enum week day; day = tue;
    printf("%d", day);
}
#include<stdio.h>
int func(int num){
    if(num > 0){
        func(--num);
        printf("%d ", num);
        func(--num);
    }
}
int main(){
    int num; scanf("%d", &num);
    func(num);
}
#include<stdio.h>
int a, b, c = 5, d = 7;
int func1(int a, int b){
    c = a + b;
    return c * 2;
}
int func2(int c){
    c += a; a *= 2;
    return c;
}
int func3(int d){
    c = d + 10;
    b = func2(c);
}
int main(){
    int a = 1, b = 3; 
    printf("%d %d %d %d\n", a, b, c, d);
    a = func1(a, b);
    printf("%d %d %d %d\n", a, b, c, d);
    d = func2(c);
    printf("%d %d %d %d\n", a, b, c, d);
    func3(b);
    printf("%d %d %d %d\n", a, b, c, d);
}
