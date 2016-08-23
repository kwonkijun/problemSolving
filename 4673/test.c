#include<stdio.h>
#include<string.h>

#define MAX_SIZE 10000

int state [MAX_SIZE];

void selfNumber (int n){
	int nextNum = 0 ; 
	
	if(n/10000 > 0){
		
	}else if(n/1000 >0){
		
	}else if(n/100 >0){
		nextNum = n + n/100 + (n - (n/100) * 100)/10 + n%10;
	}else if(n/10 >0){
		nextNum = n + n/10 + n%10;
	}else{
		nextNum = n + n;
	}
	state[nextNum] = 1;
	selfNumber(nextNum);
}

int main(){
	int i=0;
	selfNumber(1);
	
	for(i=0 ; i < 100 ; i++){
		printf("%d", state[i]);
	}	
	return 0;
}
