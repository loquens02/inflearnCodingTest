#include <iostream>
using namespace std;

int main() {
	int N,tot=0,lastOne;
	scanf("%d",&N);
	for(int i=1; i<N; i++){
		if(N%i==0){
			lastOne= i;
		}
	}
	for(int i=1; i<N; i++){
		if(N%i==0){
			printf("%d",i);
			tot+=i;
			if(i!=lastOne){
				printf(" + ");
			}
		}		
	}
	printf(" = %d",tot);
}
