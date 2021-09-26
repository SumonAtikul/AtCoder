#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int a, b;
    cin >> a >> b;
    string u;
    cin >> u;
    if(u == s)
    {
        printf("%d %d\n", a-1, b);
    }
    else if(u == t)
    {
        printf("%d %d\n", a, b-1);
    }
    return 0;
}
