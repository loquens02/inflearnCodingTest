#include<stdio.h>

int main(){
	//freopen("input.txt", "rt", stdin);
	char str[101]= {'0'};
	scanf("%[^\n]%*c", str);
	
	int j=0;
	for(int i=0; str[i] != '\0' ; i++){
		if(65<= str[i] && str[i] <= 90){
			str[j++]= str[i] + 32;
		} else if(97<= str[i] && str[i] <= 122){
			str[j++]= str[i];
		}
	}
	str[j]= '\0';
	
	printf("%s",str);
	return 0;
}
