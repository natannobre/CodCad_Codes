#include <iostream>

using namespace std;

int main(){
	int x, i=1;
	
	cin >> x;
	
	while(i <= (x/2)){
		if(x%i==0){
			cout << i << " ";
		}
		i++;
	}
	cout << x << endl;
	
	return 0;
}