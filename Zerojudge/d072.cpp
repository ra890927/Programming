#include <iostream>
using namespace std;

int main(){
	int k, t;
	cin >> t;
	for(int i = 1; i <= t; i++){
		cin >> k;
		cout << "Case " << i << ": ";
		if(!(k % 4)){
			if(!(k % 100)){
				if(!(k % 400))
					cout << "a leap year" << endl;
				else cout << "a normal year" << endl;
			}
			else cout << "a leap year" << endl;
		}
		else cout << "a normal year" << endl;
	}
	return 0;
}
