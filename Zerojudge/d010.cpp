#include <iostream>
using namespace std;

int main(){
	int N;
	while(cin >> N){
		int sum = 0;
		for(int i = 1; i < N; i++)
			if(N % i == 0) sum += i;
		
		if(sum > N) cout << "盈數" << endl;
		else if(sum == N) cout << "完全數" << endl;
		else cout << "虧數" << endl;
	}
	return 0;
}