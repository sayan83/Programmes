/*
Chef is a very experienced and well-known cook. 
He has participated in many cooking competitions in the past — so many that he does not even remember them all.

One of these competitions lasted for a certain number of days. The first day of the competition was day 
S of the week (i.e. Monday, Tuesday etc.) and the last day was day E of the week. 
Chef remembers that the duration of the competition (the number of days between the first and last day, inclusive)
was between L days and R days inclusive. Is it possible to uniquely determine the exact duration of the competition? 
If so, what is this duration?
*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string start,end;
	    int d1,d2,diff,s=-1,e=-1;
	    string days[] = {"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
	    cin>>start>>end>>d1>>d2;
	    for(int i =0;i<7;i++)
	    {
	        if(days[i] == start && s==-1)
	            s = i;
	        if(days[i]==end && e==-1)
	            e=i;
	        if(s!=-1 && e!=-1)
	            break;
	    }
	    if(s > e)
	        diff = 8-(s-e);
	    else
	        diff = e-s+1;
	    int x=(d1-diff)>0?ceil((d1-diff)/7.0):0;
	    if((diff+(7*x))<=d2 && (diff+(7*x))+7<=d2)
	        cout<<"many";
	    else if((diff+(7*x))<=d2)
	        cout<<(diff+(7*x));
	    else
	        cout<<"impossible";
	    cout<<endl;
	}
	return 0;
}
