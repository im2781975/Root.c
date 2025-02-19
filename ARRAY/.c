#include<stdio.h>
#define sz 2
size_t getsize(float *ptr){
    return sizeof(*ptr);
}
int main(){
    float arr[sz];
    printf("%u", sizeof(arr));
    printf("%u", getsize(arr));
}
