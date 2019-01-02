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
