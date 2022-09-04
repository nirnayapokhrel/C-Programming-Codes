#include<stdio.h>
#include<string.h>
#include<math.h>

int factorial(int n){
	if(n != 1){
		return n * factorial(n-1);
	}else{
		return 1;
	}
}
float func(int n, int x){
	int odd = n*2-1;
	int p;
	if(n % 2 == 0){ // n odd thiyo vane positive le add vairaako thiyo  natra negative le so
		p = -1;
	}else{
		p = +1;
	}
	if(odd > 1){
		return (p*((float)((pow(x, odd))/factorial(odd))))+ func(((odd-1)/2), x);
	}else{
		return x;
	}
	
}
int main(){
	int n,x;
	printf("Enter number of termths and a number\n");
	scanf("%d %d", &n, &x);
	printf("Sum is %f", func(n,x));
}

