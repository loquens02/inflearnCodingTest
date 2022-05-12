#include <iostream>
using namespace std;

int main() {
	string jumin;
	
//	freopen("input.txt", "rt", stdin);
	cin >> jumin;
	
	string yy= jumin.substr(0,2);
	int old= 2019- stoi(yy) +1; //2022-05 korean old
	
	int indexSplit= jumin.find("-");
	int gender= stoi(jumin.substr(indexSplit+1,1));
	string genderStr;
	switch (gender){
		case 1:
			old-= 1900;
			genderStr= "M";
			break;
		case 2:
			old-= 1900;
			genderStr= "W";
			break;
		case 3:
			old-= 2000;
			genderStr= "M";
			break;
		case 4:
			old-= 2000;
			genderStr= "W";
			break;
//		default:
//			cout<<gender;	
	}
	cout<< old << ' '<< genderStr;
}
