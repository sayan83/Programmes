#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    long int t,n,p,subs=0,chance=0,cw;
	cin>>t;
	int k = t;
	while(t--)
	{
	    cin>>n>>p;
	    string ar[p];
	    for(int i =0;i<p;i++)
	    {
	        cin>>ar[i];
	    }
	    for(int i=0;i<p-1;i++)
	    {
	        if(ar[i]!=" "){
	        for(int j =i+1;j<p;j++)
	        {
	            if( ar[i].length() == ar[j].length() || ar[j]==" ")
	               continue;
	            int str_g = ar[i].length() > ar[j].length()?i:j;
	            int str_s = ar[i].length() < ar[j].length()?i:j;
	            if(ar[str_g].substr(0,ar[str_s].length()) == (ar[str_s]))
	            {
	               // subs = subs + pow(2,(n-str_g.length()));
	               ar[str_g] = " ";
	            }
	            if(ar[i] == " ")
	                break;
	        }}
	    }
	    for(int i =0;i<p;i++)
	    {
	        if(ar[i]==" ")
	            continue;
	        chance = chance + pow(2,(n-ar[i].length()));
	    }
	   // chance = chance - subs;
	    cw = pow(2,n) - chance;
	    cout<<"Case #"<<(k-t)<<": "<<cw<<endl;
	    chance = 0;
	   // subs = 0;
	}
	return 0;
}

