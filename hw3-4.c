#include <stdio.h>

int main()
{
	char ans[4],str[5]; int a = 0, b = 0;
	scanf("%s", &ans);
	while (a != 4) {
		a = 0; b = 0;
		gets(str);
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
		printf("%dA%dB", a, b);
	}
	do gets(str);
	while (ans[0]&0xf != 0) gets(str);
}

