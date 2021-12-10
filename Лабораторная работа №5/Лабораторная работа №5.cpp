#include <iostream>
#include <stack>
#include <time.h>
#include <algorithm>

using namespace std;

class func
{
public:
	float summa(float a, float b)
	{
		return a + b;
	}

	float minus(float a, float b)
	{
		return a - b;
	}

	float plusOne(float a)
	{
		a++;
		return a;
	}

};

class Stack
{
public:
	int create(int count)
	{
		int i;
		stack <int> test;
		srand(time(NULL));
		for (i = 0; i < count; i++)
		{
			test.push(rand() % 100);
			cout << "[" << i << "]= " << test.top() << endl;
		}
		cout << endl;
		return 0;
	}

	int copy(stack <int> a)
	{
		int i ,size;
		stack <int> b,z;
		size = a.size();
		int* c = new int[size];
		for (i = 0; i < size; i++)
		{
			c[i] = a.top();
			a.pop();
		}

		for (i = 0; i < size / 2; i++)
		{
			swap(c[i], c[size - i - 1]);
		}

		for (i = 0; i < size; i++)
		{
			z.push(c[i]);
			cout << "z[" << i << "]= " << z.top() << endl;
		}
		cout << endl;

		return 0;
	}
};

int main()
{
	int count;
	cout << "Vvedite kolichestvo elementov" << endl;  
	cin >> count;

	Stack testo;
	testo.create(count);

	stack <int> a;
	a.push(1);
	a.push(2);
	a.push(3);
	a.push(4);
	a.push(5);

	Stack testoB;
	testoB.copy(a);

	func test;
	cout <<"3 + 4 ="<< test.summa(3, 4) << endl;
	cout <<"3 - 4 ="<< test.minus(3, 4) << endl;
	cout <<"3++ ="<< test.plusOne(3) << endl;
}