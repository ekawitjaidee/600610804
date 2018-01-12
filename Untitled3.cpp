#include<iostream>
#include<string>
using namespace std;

int main(){
	string t1,t2;
	int N,count=0;
	cout<<"Enter the first text:";
	cin>>t1;
	cout<<"Enter the second text:";
	cin>>t2;
	cout<<"Enter N";
	cin>>N;
	while (count<N)
	{
		if(count%2==0){
				cout<<t1<<" ";
		}
	
	    else{
			cout<<t2<<" " ;
		}
		count=count+1;
		
	}
	return 0;
}
