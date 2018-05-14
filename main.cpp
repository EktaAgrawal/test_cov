#include <iostream>
using namespace std;


class a
{
	public:
	int i;
	void init();	
	a()
	{
		init();
		std::cout<<"hello"<<endl;
	}
};
void a::init()
{
	i=0;
	std::cout<<"init"<<endl;
}
int main(int argc, char** argv) {
	a A;
	return 0;
}
