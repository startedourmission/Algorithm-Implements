#include<stdio.h>
#define N 10
#define LEN 100

int fibo(int k){                    //recursion function
    if(k <= 1) return 1;
    return fibo(k-2) + fibo(k-1);
}
 
int fibo2(int k, int* array){       //recursion function with array
    if(array[k]) return array[k];
    else return array[k] = fibo2(k-1, array) + fibo2(k-2, array);
}

int main(){

    //use recursion
    printf("%d\n",fibo(N));         //print single value

    for(int i = 0; i <= N; ++i){    //print sequence
        printf("%d ", fibo(i));
    }
    printf("\n------------------------------\n");
    //use recursion with array
    int arr[LEN] = {1, 1, 0,};
    printf("%d\n", fibo2(N, arr));  //print single value

    for(int i = 0; i <= N; ++i){    //print sequence
        printf("%d ", arr[i]);
    }
    printf("\n------------------------------\n");


    return 0;
}