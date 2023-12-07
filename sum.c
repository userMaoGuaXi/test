#include <stdio.h>

int main(int argc, char* argv[]){
    int sum = 0;
    int count = 0;
    int num;
    printf("input a number: ");
    scanf("%d", &num);
    while (num != -1){
        printf("input a number: ");
        sum += num;
        count++;
        scanf("%d", &num);
    }
    float avg = (float)sum/count; 
    printf("avg is %f\n", avg);
    return 0;

}