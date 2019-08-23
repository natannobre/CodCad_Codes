#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	  char op;
	  double a, b;
	  
	  cin >> op >> a >> b;
	  
	  if(op=='M'){
		  printf("%.2lf\n", (a*b));
	  }else{
		  printf("%.2lf\n", (a/b));
	  } 	
	
	return 0;
}