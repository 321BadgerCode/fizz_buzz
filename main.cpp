#include <iostream>
#include <cstring>

using namespace std;

int main(){
	for(int a=1;a<100;a++){
		string ans="";
		if(a%3==0){ans="Fizz";}
		if(a%5==0){ans+="Buzz";}
		cout<<(ans==""?to_string(a):ans)<<endl;
	}
	return 0;
}