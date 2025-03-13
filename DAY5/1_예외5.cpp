class network_error {};

void f3()
{
	network_error e;
	throw e;
}
void f2() 
{
	f3();
}
void f1()
{
	f2();
}
int main()
{
	try
	{
		f1();
	}
	catch (...)
	{
	}
}