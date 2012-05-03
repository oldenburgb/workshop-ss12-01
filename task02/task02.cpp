#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cout << "How many numbers? " << flush;
	cin >> n;
	int c,b=1,a=0;
	
	for(int i=0;i<n;i++)
	{
		c=a+b;
		cout << c << endl;
		a=b;
		b=c;
	}
	
	return 0;
}
