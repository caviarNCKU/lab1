#include <iostream>
using namespace std;
int main(){
	int n=0;
	cin>>n;

	while(n!=1){
		cout<<n<<" ";
		if(n%2==1){
			n=3*n+1;
		}
		else{
			n=n/2;
			if(n==1){
				cout<<n;
			}
		}
	};
	return 0;
}
