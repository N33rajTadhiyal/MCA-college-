#include<vector>
#include<stack>
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(100);v.push_back(80);v.push_back(60);v.push_back(70);v.push_back(60);v.push_back(75);v.push_back(85);
    
    vector<int>v1(v.size());
    cout<<v1.size()<<" \n";
    int n=v.size();    
    
     stack<pair<int, int> > s;
    
    for(int i =0;i<n;i++)
    {
    	if(s.size()==0)
    	{
    		v1[i]=i;
		}
		else if(s.size()>0 && s.top().first>v[i])
		{
				v1[i]=s.top().second;
		}
		else if(s.size()>0 && s.top().first<v[i])
		{
			while(s.size()>0 && s.top().first<v[i])
			{
				s.pop();
			}
		}
		
		if(s.size()==0)
		{
				v1[i]=i;
		}
		else{
				v1[i]=s.top().second;
		}
		s.push({v[i],i});
	}
	cout<<v1.size()<<" \n";
 int c=0;
   for(int i=0;i<v1.size();i++)
   {c++;
   	cout<<abs(v1[i]-i)<<" ";
   }
   
   cout<<"\n"<<c;
    return 0;
}
