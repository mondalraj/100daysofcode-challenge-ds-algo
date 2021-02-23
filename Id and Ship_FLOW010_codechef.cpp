#include <bits/stdc++.h>
using namespace std;

int main() {
	char c;
	int t;
	cin>>t;
	while(t!=0)
	{
	    cin>>c;
	    if(c=='b' || c=='B')
	       cout<<"BattleShip"<<endl;
	    else if(c=='c' || c=='C')
	       cout<<"Cruiser"<<endl;
	    else if(c=='d' || c=='D')
	       cout<<"Destroyer"<<endl;
	    else if(c=='f' || c=='F')
	       cout<<"Frigate"<<endl;
	    
	    t--;
	}
	return 0;
}
