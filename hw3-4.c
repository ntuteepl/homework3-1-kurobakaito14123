#include <stdio.h>

int main()
{
	char ans[5], str[5]; int a = 0, b = 0;
	scanf("%s", &ans);
	while (a != 4) {
		a = 0; b = 0;
		scanf("%s", &str);
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (str[i] == ans[j])
				{
					if (i == j) a++;
					else b++;
				}
			}
		}
		printf("%dA%dB\n", a, b);
	}
	while (a != 0) scanf("%d", &a);
}

