#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n){
	int restArray=sorted(arr+1,n-1);
	return (arr[0]<arr[1] && restArray);
}
int main(){
	int arr[5]={1,2,3,4,5};
	cout<<sorted(arr,5);
	cout<<"hello world";
	return 0;
}