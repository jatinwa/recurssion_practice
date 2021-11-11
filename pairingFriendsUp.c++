#include <iostream>
using namespace std;

int PairingFriends(int n){   //n=number of friends to check ways for//


if(n==0 || n==1 || n==2){    //if n=0 no friend left //
	return n;                //if n=1 1 person left so 1 way only to left him/her//
}                            //if n=2 2 persons left  ways whether to make friends or not//
   return PairingFriends(n-1)      +     PairingFriends(n-2)*(n-1);
}         //ways when not paired//     //ways when paired and n-1 is for the ways to whom paired with//


int main(){
  cout<<PairingFriends(4);
  return 0;
}