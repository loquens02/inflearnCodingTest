#include <iostream>
using namespace std;

int main() {
	int N, min=300, max=0, old;
	scanf("%d", &N);
//	int *old= new int[N];
	for(int i=0; i<N; i++){
		scanf("%d",&old);
		if(old < min){
			min= old;
		}
		if(old > max){
			max= old;
		}
	}
	printf("%d",max-min);
}
