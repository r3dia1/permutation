#include<iostream>
#include<vector>
using namespace std;

void permu(vector<int>& array, int digit){
	if(digit == 0)
	{
		int i;
		for(i=0; i<array.size(); i++)
			cout << array[i];
		cout << endl;
		return;
	}
	
	array.push_back(0);
	permu(array, digit-1);
	array.pop_back();
	
	array.push_back(1);
	permu(array, digit-1);
	array.pop_back();
}

int main(){
	int digit;
	cin >> digit;
	vector<int> array;
	
	permu(array, digit);
}