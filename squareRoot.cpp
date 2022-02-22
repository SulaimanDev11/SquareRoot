#include<iostream>
#include<windows.h>
#include<math.h>
int square(int);
using namespace std;
int main(){
	system("color 0C");
	const int s=3;
	int mat[s][s],sum=0;
	float result;
	for(int i=0;i<s;i++){
		for(int j=0;j<s;j++){
			cout<<"Enter element of ["<<i+1<<"]["<<j+1<<"] : ";
			cin>>mat[i][j];
		}
	}
	cout<<endl;
	
	for(int i=0;i<s;i++){
		for(int j=0;j<s;j++){
			sum+=(mat[i][j])*(mat[i][j]);
		}
	}
	result=sqrt(sum);
	cout<<"Result is: "<<result;
	return 0;
}
