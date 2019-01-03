/*
Abhineet the Chess master of NIT Kurukshetra got bored of 8x8 chess board and invented the new variation of Chess,
the one on an infinite chess board. There is only a white king and N black knights. 
The white king has to avoid checkmate as long as it can.

A situation is given. Determine if white king is in checkmate or not. The white king is in checkmate if 
and only if it is in check and it is not able to move to any of its neighboring positions which is not in check.

INPUT :-
The first line will contain T, number of test cases. Then the test cases follow.
The first line of each test case contains a single integer N.
The next N line contains 2 space-separated integers Xi and Yi denoting the position of knights.
The next line contains 2 space-separated integers A and B denoting the position of king

OUTPUT :-
Print a single line corresponding to each test case — “YES” (without quotes) – if the king is in checkmate 
and “NO” (without quotes) – if the king is not in checkmate.
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	long int n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long long int ar[n+1][2];
	    for(int i=0;i<n+1;i++)
	        cin>>ar[i][0]>>ar[i][1];
	    long long int x=ar[n][0],y=ar[n][1];
	    int chk = 0;
	    for(int i=1;i<=8;i++)
	    {
	        if(i==1 || i==7 || i==8)
	            y++;
	        else if(i==3 || i==4)
	            y--;
	        else if(i==5 || i==6)
	            x--;
	        else
	            x++;
	        for(int j=0;j<n;j++)
	        {
	            if((ar[j][0] ==x+1 && ar[j][1]==y+2 ) || (ar[j][0]==x-1 && ar[j][1]==y+2) || (ar[j][0]==x+1 && ar[j][1]==y-2) || (ar[j][0] ==x-1 && ar[j][1]==y-2) || (ar[j][0] ==x+2 && ar[j][1]==y+1 ) || (ar[j][0] ==x+2 && ar[j][1]==y-1 ) || (ar[j][0] ==x-2 && ar[j][1]==y+1) || (ar[j][0] ==x-2 && ar[j][1]==y-1))
	            {
	                chk++;
	                break;
	            }
	        }
	    }
	    if(chk==8)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
