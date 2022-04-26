#include <iostream>
//using namespace std;

int main() {
	int N,M,tot=0;
	std::cin>>N>>M;
	
	for(int i=1; i<=N; i++){
		if(i % M == 0){
			tot+=i;
		}
	}
		
	std::cout<<tot;
	
}
