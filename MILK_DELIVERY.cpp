#include<iostream>
#include<algorithm>
using namespace std;
long int morning_route_volumes[10000];
long int evening_route_volumes[10000];
long int n;
long int p;
long int f;
long int low;
long int high;
long int cost=0;
int main()
{
	cin>>n>>p>>f;
	for(int i=0;i<n;i++)
	cin>>morning_route_volumes[i];
	for(int i=0;i<n;i++)
	cin>>evening_route_volumes[i];
	sort(morning_route_volumes,morning_route_volumes+n);
	sort(evening_route_volumes,evening_route_volumes+n);
for(low=0,high=n-1;low!=n;low++,high--)
{
	if((morning_route_volumes[low]+evening_route_volumes[high])>p)
	{
		cost+=(((morning_route_volumes[low]+evening_route_volumes[high])-p)*f);
	}
	
}
	cout<<cost<<"\n";
return 0;	
}