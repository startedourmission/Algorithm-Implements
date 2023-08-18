#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STACK_SIZE 10001

void push(int);
int pop();

int stack[STACK_SIZE];
int stack_i;

int main(){
    int inputnum = 0;
    char* inputstr = malloc(10);
    while(1){
        printf("please input : push or pop or q\n");
        scanf("%s", inputstr);
        if(!strcmp(inputstr, "q")) break;
        if(!strcmp(inputstr, "pop")){
            printf("%d\n", pop());
            continue;
        } 

        printf("num\n");
        scanf("%d", &inputnum);
        if(!strcmp(inputstr, "push")) push(inputnum);
        
        else printf("error\n");
        //printf("%s %d\n", inputstr, inputnum);

        for(int i=0; i<stack_i; ++i){
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
    free(inputstr);
    return 0;
}

void push(int n){
    stack[stack_i] = n;
    ++stack_i;
}
int pop(){
    if(stack_i == 0){
        printf("stack is empty\n");
        return 0;
    }
    --stack_i;
    int tmp = stack[stack_i];
    stack[stack_i] = 0;
    return tmp;
}