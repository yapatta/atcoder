#include <iostream>
#include <stdlib.h>

using namespace std;

class stack
{
public:
	void input();
	int pop();
	void push(int x);
	int plus(char* x, char* y);
	int multiply(char* x, char* y);
	void print();
private:
	int s[1000];
	int top;
};
void stack::input()
{
	int a, b;
	char d[100];
	top = 1;
	while(scanf("%s", d) != EOF)
	{
		if(d[0] == '+')
		{
			a = pop();
			b = pop();
			push(a+b);
		} else if(d[0] == '*')
		{
			a = pop();
			b = pop();
			push(a*b);

		} else if(d[0] == '-')
		{
			b = pop();
			a = pop();
			push(a-b);
		} else
		{
			push(atoi(d));
		}
	}
}
int stack::pop()
{
	return s[--top];
}
void stack::push(int x)
{
	s[top++] = x;
}
void stack::print()
{
	cout << pop() << endl;
}

int main()
{
	stack stack;
	stack.input();
	stack.print();
	return 0;
}