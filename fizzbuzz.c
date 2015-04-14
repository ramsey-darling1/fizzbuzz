#include <stdio.h>
//example of fizzbuzz in C
//@rdar


int main(){
    //loop through and display numbers 1 to 100 
    //if number is / 3 output fizz
    //if number is / by 5 output buzz
    //if both, output fizzbuzz

    int count = 0;
    
    while(count <= 100){
        printf("%d",count);
        if(count % 3 == 0){
            printf(" fizz");
        }
        if(count % 5 == 0){
            printf(" buzz"); 
        }
        printf("\n");
        count = count + 1; 
    }
    return 0;
}
