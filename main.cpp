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
      if(i==b || i==a)
      continue;
      z.push_back(i);
      count++;
    }

    int track = -1;

    for(int i=a;i<=n;i++)
    {
      if(count>=half)
      {
        count = 0;
        break;
      }
      if(i==b)      
      continue;
      track = i;
      count++;
      z.push_back(i);
    }

    count = 0;

    z.push_back(b);
    for(int i=1;i<a;i++)
    {
      if(count==half)
      break;
      if(i==b)
      continue;
      z.push_back(i);
      count++;
    }

    if(count<half)
    {
      if(track == -1)
      {
        for(int i=a+1;i<b;i++)
        {
          if(count>=half)
          break; 
          if(i==b)
          continue;   
          z.push_back(i);    
          count++; 
        }
      }
      else
      {
        for(int i=track+1;i<b;i++)
        {
          if(count>=half)
          break;
          if(i==b)
          continue;
          z.push_back(i);
          count++;
        }

      }
    }
    int size = z.size();

    int mini=INT_MAX,maxi=INT_MIN;

    for(int i=0;i<size/2;i++)
    {
      mini = min(z[i],mini);
    }

    for(int i=size/2;i<size;i++)
    {
      maxi = max(z[i],maxi);
    }

    if(mini!=a || maxi!=b || size%2!=0)
    {
      cout<<-1<<"\n";
    }

    else
    {
    for(int i=0;i<size;i++)
    {
      cout<<z[i]<<" ";
    }
    

    cout<<"\n";   
    }
  }
} 