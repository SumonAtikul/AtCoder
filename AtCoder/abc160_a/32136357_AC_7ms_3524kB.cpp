#include<iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	if(s[2]==s[3] && s[4]==s[5])
	printf("Yes\n");
	else
	printf("No\n");
	return 0;
}