
#include <stdlib.h>
#include <stdio.h>

int global_count_loop =0;

void printSmt();
void looper();

int main(){

    looper();

    return 0;
}

void looper(){

    while(global_count_loop < 5){
        global_count_loop++;
        printSmt();
    }

}