#include <iostream>
#include <string>
using namespace std;

class Solution{
public:
	bool judgeCircle(string moves){
		int vertical=0;
		int horizontal=0;
		for (char ch:moves){
			if(ch=='U') vertical++;
			if(ch=='D') vertical--;
			if(ch=='R') horizontal++;
			if(ch=='L') horizontal--;
		}
		return vertical==0&&horizontal==0;
	}
}; 

int main(){
	Solution s;
	bool ans=s.judgeCircle("UDUDUDUDU");
	return ans;
}
