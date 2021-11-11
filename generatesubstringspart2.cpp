#include <iostream>
using namespace std;

void substrings2(string s,string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}
	char ch=s[0];
	int code=s[0];
	string ros=s.substr(1);
	substrings2(ros,ans);
	substrings2(ros,ans+ch);
	substrings2(ros,ans+to_string(code));
}
int main(){
 substrings2("AB","");
 return 0;
}