#include <iostream>
using namespace std;

int main() {
	int N,tot=0;//tot=1
	scanf("%d",&N);

	printf("1");
	for(int i=2; i<N; i++){
		if(N%i==0){
			printf(" + %d",i);
			tot+=i;
		}		
	}
	printf(" = %d",tot+1);//tot
}

//	int lastOne;
//	for(int i=1; i<N; i++){
//		if(N%i==0){
//			lastOne= i;
//		}
//	}
//	for(int i=1; i<N; i++){
//		if(N%i==0){
//			printf("%d",i);
//			tot+=i;
//			if(i!=lastOne){
//				printf(" + ");
//			}
//		}		
//	}
