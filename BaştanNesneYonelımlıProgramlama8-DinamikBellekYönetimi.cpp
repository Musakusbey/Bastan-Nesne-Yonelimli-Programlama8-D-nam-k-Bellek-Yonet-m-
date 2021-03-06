#include <iostream>

using namespace std;

class deneme
{
	private:
		
		int x;
		
	public:
		
		deneme(int n)
		{
			x=n;
		}
		
		int goster()
		{
			return x;
		}
};

int main ()
{
	int i;
	
	deneme a[5]={1,2,3,4,5};
	
	deneme*p;
	
	p=a;
	
	for(i=0;i<5;i++)
	{
		cout<<p->goster()<<endl;
		p++;
	}
	
	return 0;
}
