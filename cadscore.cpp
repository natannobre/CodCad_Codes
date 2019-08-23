#include <iostream>

using namespace std;

int main(){
	int atual, vezes, x;
	
	cin >> atual >> vezes;
	
	int i=0;
	for(i=0; i<vezes; i++){
		cin >> x;
		if((atual+x)>100){
			atual= 100;
		}else if((atual+x)<0){
			atual= 0;
		}else{
			atual+= x;
		}
	}
	cout << atual << endl;
	
	
	return 0;
}