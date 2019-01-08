/*
All submissions for this problem are available.You've built some robots and placed them on an one dimensional grid with n 
cells. Their arrangement is given by a string s of length n. Each character of the string is either '.' or a digit in
the range '0' to '9'. A '.' represents that there is no robot at that cell initially.
A digit represents a robot initially in that cell. Specifically, the digit x denotes that the range of the robot
is from x cells to the left of its starting point to x cells to the right of its starting point.

For example, suppose the 7th character of the string is 3, then that means that there is a robot starting from
the 7th cell, and its range is from the 4th cell (7 - 3 = 4) to the 10th cell (7 + 3 = 10) (both end points inclusive). 
The robots can move only within their range, and even if their range allows it, they cannot move out of the grid.

You want to play a game with these robots. Before starting the game, you can give each robot a starting direction 
(either left or right). When the robot is initialized with a direction, it will move in that direction until it
can (ie. it can't go past its range, and neither can it go outside the grid) and will reverse its direction and 
go as far as possible in that direction, and then reverse, and so. It will keep going like this forever. 
Assume that the change of direction happens instantaneously.

But the catch is that each of the robots can start their journey at any time. They don't all have to start at 
the same second. It won't stop once it starts moving though. And they all move at the same speed of one cell 
per second, once they start.

The robots have gained consciousness, and have begun questioning their purpose in life. So given a chance, they
will collide with each other and end their misery. They can coordinate with each other as well and decide when 
they should start their journeys. Two robots are said to have collided if they are at the same cell at the same moment.

You are wondering whether it is possible to give the robots the initial directions in such a way that no robots collide 
with each other (ie. they'll all be safe), or if no matter what initial directions you give, some of them will end up 
colliding with each other (ie. unsafe).

Input:-
The first line of the input contains an integer T denoting the number of test cases. The description of the test 
cases follows.
The only line of each test case contains a string s.
Output:- 
For each test case, output a single line containing "safe" or "unsafe" (without quotes).
*/

#include <iostream>
using namespace std;

int main() {
	int t,chk;
	cin>>t;
	while(t--)
	{
	    chk=1;
	    string s;
	    cin>>s;
	    for(int i=0;i<s.length()-1;i++)
	    {
	        if(s[i]=='.')
	            continue;
	        for(int j=i+1;j<s.length();j++)
	        {
	            if(s[j]=='.')
	                continue;
	            if((i+(int)s[i]-48) >= (j-(int)s[j]+48))
	            {
	                chk=0;
	                break;
	            }
	        }
	        if(chk == 0)
	            break;
	    }
	    if(chk == 1)
	        cout<<"safe"<<endl;
	    else 
	        cout<<"unsafe"<<endl;
	}
	return 0;
}
