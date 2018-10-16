#include<stdio.h>

int main()
{
	char mesaj[100], p;
	int i, key;

	printf("Introduceti mesajul pentru criptare: ");
	gets(mesaj);
	printf("Introduceti cheia: ");
	scanf_s("%d", &key);

	for (i = 0; mesaj[i] != '\0'; ++i) {
		p = mesaj[i];

		if (p >= 'a' && p <= 'z') {
			p = p + key;

			if (p > 'z') {
				p = p - 'z' + 'a' - 1;
			}

			mesaj[i] = p;
		}
		else if (p >= 'A' && p <= 'Z') {
			p = p + key;

			if (p > 'Z') {
				p = p - 'Z' + 'A' - 1;
			}

			mesaj[i] = p;
		}
	}

	printf("Mesajul criptat este: %s", mesaj);

	return 0;
}