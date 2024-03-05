#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a = 0;
	int* prta = &a;

	for (int i = 0; i < 10; i++)
	{
		a += i;
	}
}