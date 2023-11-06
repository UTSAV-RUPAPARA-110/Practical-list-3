#include<iostream>
using namespace std;
class Max
{
	private:
		int num1,num2;
	public:
		void input()
		{
			cout<<"Enter The Number 1 :: ";
			cin>>num1;
			cout<<"Enter The Number 2 :: ";
			cin>>num2;
		}
		void large()
		{
			if(num1>num2)
			{
				cout<<"max number"<<num1;
			}
			else
			{
				cout<<"max number"<<num2;
			}
		}
		
};
int main()
{
	Max m;
	
	m.input();
	m.large();
	
	return 0;
}
