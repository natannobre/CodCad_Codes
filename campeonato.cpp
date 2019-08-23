#include<iostream>

using namespace std;

int main(){
	int c_vit, c_emp, c_sal, f_vit, f_emp, f_sal, C_ponto, F_ponto;
	
		cin >> c_vit >> c_emp >> c_sal;
		cin >> f_vit >> f_emp >> f_sal;
		
		C_ponto= (c_vit*3) + (c_emp);
		F_ponto= (f_vit*3) + (f_emp);
	
		if(C_ponto > F_ponto){
			cout << "C" << endl;
		}else if(F_ponto > C_ponto){
			cout << "F" << endl;
		}else{
			if(c_sal > f_sal){
				cout << "C" << endl;
			}else if(f_sal > c_sal){
				cout << "F" << endl;
			}else{
				cout << "=" << endl;
			}
		}
	return 0;
}