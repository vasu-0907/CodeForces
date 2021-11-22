#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;

  while(t--)
  {
    int n,a,b;
    cin>>n>>a>>b;
    
    int half = n/2;
    vector<int> z;
    int count = 0;

    for(int i=b+1;i<=n;i++)
    {
      if(count==half-1)
      {
        break;
      }
      z.push_back(i);
      count++;
    }

    for(int i=a;i<b;i++)
    {
      if(count>=half)
      {
        break;
      }
      z.push_back(i);
    }

  }
} 