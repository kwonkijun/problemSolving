#include<stdio.h>

int main(){
	
	int x, cnt = 0;
	int i=100;
	int a, b, c;
	
	scanf("%d", &x);
	
	if(x < 100){
		// 100�̸� �� ��� �Ѽ� 
		cnt = x;
	}else{
		// ���ڸ� ��( + 1000) �� �Ѽ����� Ȯ���ϸ�ȴ�.
		cnt +=99;
		while(1){
			a = i/100;
			b = (i - a*100)/10;
			c = i%10;
			if((b-a)==(c-b)){
				cnt ++;
			}
			if(i==x) break;
			i++;
		}  
	}
	
	printf("%d", cnt);
	
	return 0;
}
