#include <iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"enter an number: \n";
	cin>>x;
	while(x!=1){
		if(x%2==0){
			y=x/2;
			cout<<y<<"\n";
		}
		else if(x%2!=0){
			y=3*x+1;
			cout<<y<<"\n";
		}
		x=y;
	}
}
