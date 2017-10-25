#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
    	if(moves.length() == 0)  return true;
    	if(moves.length() %2 != 0)  return false;
        
        int x=0; 
        int y=0;
        for (int i=0; i < moves.length(); i++)
        {   
            if (moves[i] == 'U') y++;
            if (moves[i] == 'D') y--;
            if (moves[i] == 'L') x--;
            if (moves[i] == 'R') x++;
        }
        if (x==0 && y==0) return true;
        return false;
        
    }
};



