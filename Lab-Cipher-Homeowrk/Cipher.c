#include <stdio.h>

void cipher(char m[], int s);
void decipher(char e[], int s);

int main()
{
	char message[100];
	int shift = 0;
	printf("input your message without space\n");
	scanf("%s", &message);
	printf("input the number of shifts\n");
	scanf("%d", &shift);
	cipher(message, shift);

	return 0;
}

void cipher(char m[], int s)
{
	char encoded[100];
	int i = 0;
	printf("your encoded message is: ");
	while( m[i] != '\0')
	{
		m[i] -= 97;
		m[i] = (m[i] + s) % 26;
		m[i] += 97;
		printf("%c", m[i]);
		encoded[i] = m[i];
		i++;
	}
	printf("\n");
	decipher(encoded, s);
}

void decipher(char e[], int s)
{
	printf("your decoded message is: ");

	int i = 0;
	while( e[i] != '\0')
	{
		e[i] - s;
		if (e[i] < 'a')
		{
			e[i] = 97 - e[i];
			e[i] = 'z' - e[i];
		}
		printf("%c", e[i]);
		i++;
	}
}
