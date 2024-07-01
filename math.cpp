int addition(int x, int y)
{
	return x + y;
}

int diff(int x, int y)
{
	return x - y;
}

int multipl(int x, int y)
{
	return x * y;
}

float division(int x, int y)
{
	return x / y;
}

int degree(int x, int y)
{
	int result = x;

	for (int i = 0; i < y - 1; i++)
	{
		result *= result;
	}

	return result;
}