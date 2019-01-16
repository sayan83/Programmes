/*
"I don't have any fancy quotes." - vijju123

Chef was reading some quotes by great people. Now, he is interested in classifying all the fancy quotes he knows. He thinks that all fancy quotes which contain the word "not" are Real Fancy; quotes that do not contain it are regularly fancy.

You are given some quotes. For each quote, you need to tell Chef if it is Real Fancy or just regularly fancy.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single string S denoting a quote.

Output
For each test case, print a single line containing the string "Real Fancy" or "regularly fancy" (without quotes).
*/

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	string te;
	getline(cin,te);
	while(t--)
	{
	    te="";
	    string s = "";
	    int st = 0,f=0;
	    getline(cin,s);
	    s[s.length()] =' ';
	    for(int i=0;i<=s.length();i++)
	    {
	        if(s[i] == ' ')
	        {
	            if(te == "not")
	            {
	                f = 1;
	                cout<<"Real Fancy"<<endl;
	                break;
	            }
	            else
	                te="";
	        }
	        else
	            te = te+s[i];
	    }
	    if(f == 0)
	        cout<<"regularly fancy"<<endl;
	}
	return 0;
}
