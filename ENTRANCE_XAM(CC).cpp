/*
The faculty of application management and consulting services (FAMCS) of the Berland State University (BSU) has 
always been popular among Berland's enrollees. This year, N students attended the entrance exams, but no more 
than K will enter the university. In order to decide who are these students, there are series of entrance exams. 
All the students with score strictly greater than at least (N-K) students' total score gets enrolled.

In total there are E entrance exams, in each of them one can score between 0 and M points, inclusively. 
The first E-1 exams had already been conducted, and now it's time for the last tribulation.

Sergey is the student who wants very hard to enter the university, so he had collected the information about
the first E-1 from all N-1 enrollees (i.e., everyone except him). Of course, he knows his own scores as well.

In order to estimate his chances to enter the University after the last exam, Sergey went to a fortune teller. 
From the visit, he learnt about scores that everyone except him will get at the last exam. 
Now he wants to calculate the minimum score he needs to score in order to enter to the university. 
But now he's still very busy with minimizing the amount of change he gets in the shops, so he asks you to help him.
*/
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	long long int t,n,k,e,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k>>e>>m;
        long long int mks[n][e];
        for(int i=0;i<n-1;i++)
        {
        	for(int j=0;j<e;j++)
        		cin>>mks[i][j];
        }
        for(int i=0;i<e-1;i++)
        	cin>>mks[n-1][i];
        mks[n-1][e-1]=0;
        long long int tm[n-1];
        for(int i=0;i<n;i++)
        {
        	tm[i] = 0;
        	for(int j=0;j<e;j++)
        		tm[i]=tm[i]+mks[i][j];
        }
        for(int i=0;i<n-2;i++)
    	{
	       for(int j=i+1;j<n-1;j++)
	       {
	            if(tm[i]>tm[j])
	            {
	                long long int temp = tm[i];
	                tm[i] = tm[j];
	                tm[j] = temp;
	            }
	        }
    	}
        long long int mks_n=tm[n-k-1]+1 - tm[n-1];
        if(mks_n > m)
            cout<<"Impossible"<<endl;
        else if(mks_n>=0)
            cout<<mks_n<<endl;
        else
            cout<<0<<endl;
	}
	return 0;
}
