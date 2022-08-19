#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int t;
  cin >> t;
  while(t--)
  {
    int x,y;
    cin >> x >> y;
    if(__gcd(x,y)==1)
    {
      cout<<"1\n";
    }
    else
    {
      cout<< __gcd(x,y) <<"\n";
    }
  }
  return 0;
}