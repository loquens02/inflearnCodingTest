#include <iostream>

int main() {
	int N, min=300, max=0, old;//int (-)2147000000
	freopen("input.txt", "rt", stdin); // when checking, comment-ize then compile(F9)
	scanf("%d", &N);

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

