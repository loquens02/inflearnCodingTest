#include <stdio.h>

int main() {
	char a[100];
	
//	freopen("input.txt", "rt", stdin);
	scanf("%s",a); // %s �յڿ� space ���� �ʱ� 
	int res=0;
	
	// no int[] temp !
	// no pow !
	// no additory prefix-zero eliminate!
	for(int i=0; a[i] != '\0'; i++){
		if(48 <= a[i] && a[i] <= 57){
			res= res*10+ (a[i] - 48);
			// 0*10 + 0= 0
			// 0*10 + 2= 2
			// 2*10 + 5= 25
			// 25*10+ 8= 258
		}
	}
	printf("%d\n",res);
	
	int cnt=0;
	for(int i=1; i<= res; i++){
		if(res % i ==0) cnt++;
	}
	printf("%d", cnt);

	return 0;
}


//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	char str1[50];
//	
////	freopen("input.txt", "rt", stdin);
//	scanf("%s",str1);
//	
//	//str1 sizeof == �׻� 50 
//	int N[9]= {-1,-1,-1,-1,-1,-1,-1,-1,-1}; //std::fill_n(array, 9, -1);
//	int realSize= 0;
//	for(int i=0; i< 50; i++){
//		if(48 <= str1[i] && str1[i] <= 57){
//			N[realSize++]= str1[i] - 48;
//		}
//	}
//	// 0���� ���������� realSize �� �´�. 
//	
//	int count0= 0;
//	for(int i=0; i<9; i++){
//		if(N[0]==0 && N[i]==0) count0++;
//	}
//	
//	double realN=0.0;
//	for(int i= count0; i < realSize; i++){
//		realN += N[i] * pow(10.0, realSize-i-1); // 10^0 
////		printf("%d %d %d %.f\n",i,N[i], realSize-i, realN);
//	}
//	printf("%.f\n", realN); // ���� - �ǵ����  �� ���� 
//	int natureN= (int)realN;
////	printf("%d\n", natureN); // ������. ��?? 
//
//	int countFactor=0;
//	for(int i=1; i<= natureN; i++){
//		if(natureN % i ==0) countFactor++;
//	}
//	printf("%d", countFactor);
//
//
////	printf("%d %d ", realSize, count0);
////	for(int i=0; i<9; i++){
////		printf("%d",N[i]);
////	}
//
//	return 0;
//}




