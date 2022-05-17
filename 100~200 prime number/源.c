#include <stdio.h>
int main()
{
	int a = 100;
	int b;
	while (a < 200)
	{
		a++;
		b = 1;
		while (b < a)
		{
			b++;
			if (a % b == 0)
			{
				break;
			}
		}
		if (a == b)
		{
			printf("%d\n", a);
		}
	}

	return 0;
}