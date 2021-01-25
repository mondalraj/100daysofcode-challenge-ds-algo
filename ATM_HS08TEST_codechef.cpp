#include <iostream>
using namespace std;

int main() {
	int wd, bal;
	cin>>wd;
	cin>>bal;
	
	if(wd<=bal && wd%5==0)
	  {
	      cout<<bal-wd-0.50;
	  }
	else
	  cout<<bal;
	
	return 0;
}
