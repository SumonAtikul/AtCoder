#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c;
	d=(a*a)+(b*b);
	e=c*c;
	if(d<e)
	{
		cout<<"Yes"<<endl;
		
	}
	else
	{
		cout<<"No"<<endl;
	}
	return 0;
}