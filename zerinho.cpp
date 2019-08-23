#include <iostream>

using namespace std;

int main(){
	  char a, b, c;
	  
	  cin >> a >> b >> c;
	  
	  if(a != b && b == c){
		  cout << "A" << endl;
	  }else if(a == c && b != c){
		  cout << "B" << endl;
	  }else if(a == b && b != c){
		  cout << "C" << endl;
	  }else{
		  cout << "*" << endl;
	  }
	  
	return 0;
}