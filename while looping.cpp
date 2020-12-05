//while looping
#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	int limit;
	
	cout <<"Enter a limit";
	cin >> limit;//10
	
	while(i<=limit){
		cout << i << "not beyond to the given limit. \n";
		i++;
		
	}
	cout << "limit reached. \n";
	
	return 0;
	
}
