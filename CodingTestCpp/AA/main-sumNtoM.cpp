#include <iostream>
using namespace std;

int main() {
	int N,M,tot=0;
	scanf("%d %d", &N,&M);
	
	for(int i=N; i<=M; i++){
		tot+=i;
		printf("%d",i);
		if(i!=M){
			printf("+");
		}
	}
	printf("=%d",tot);

	// success. but 1.6sec
//	string sumfn="";
//	cin>>N>>M;
//		
//	for(int i=N; i<=M; i++){
//		tot+=i;
//		sumfn.append(to_string(i));
//		if(i!=M){
//			sumfn.append("+");
//		}
//	}
//	sumfn.append("=");
//		
//	cout<<sumfn<<tot; 
}

// 형태는 일치하지만 wrong answer

