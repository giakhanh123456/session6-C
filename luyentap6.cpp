#include<stdio.h>

int main(){
	for(int i = 1; i <= 100; i++){
		if(i % 3 == 0 && i % 5 == 0){
			printf("%s\n", "FizzBuzz");
		}else if(i % 3 == 0){
			printf("%s\n", "Fizz");
		}else if(i % 5 == 0){
			printf("%s\n", "Buzz");
		}else{
			printf("%d\n", i);
		}
	}
	return 0;
}
