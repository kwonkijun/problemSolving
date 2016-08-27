#include<stdio.h>

int self [10001] = {0};

void d(int x){
	int i;
	int next = x;
	
	for(i=x; i>0; i/=10){
		next += i%10;
	}
	if(next <=10000){
		self[next] = 1;
		d(next);	
	} 
}

int main(){
	int i;
	
	for(i=1; i<=10000;i++){
		
		if(self[i]==0){
			d(i);			
		}else{
			//체 거르기	
		}
		
	}

	for(i=1; i<=10000;i++){
		if(self[i]==0){
			printf("%d\n", i);
		}
	}	
	
	return 0;
}
