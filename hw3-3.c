#include <stdio.h>

int main()
{
	char str1[10], str2[10];
	int i = 0, n1 = 0, n2 = 0;
	scanf("%s %s", &str1, &str2);
	while (str1[i] != 0 || str2[i] != 0) {
		n1 += str1[i] & 0xf;
		n2 += str2[i] & 0xf;
		i++;
	}
	if (n1 < n2) printf("%s", str1);
	else printf("%s", str2);
}


