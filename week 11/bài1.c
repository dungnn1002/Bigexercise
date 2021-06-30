#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Ham xoa ky tu khoang trang
void XoaKyTu(char *s, int i)
{
	int j;
	for (j = i; j < strlen(s); j++)
		s[j] = s[j + 1];
}
int main()
{
	char *s;
	s = (char *)malloc(sizeof(char));
	int i;
	printf("Nhap chuoi:");
	gets(s);
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == ' ' && s[i + 1] == ' ')
		{
			XoaKyTu(s, i);
			i--;
		}
	}
	if (s[0] == ' ')
		XoaKyTu(s, 0);
	if (s[strlen(s) - 1] == ' ')
		s[strlen(s) - 1] == '\0';
	printf("Chuoi la:%s", s);
	free(s);
	return 0;
}
