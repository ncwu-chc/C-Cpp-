#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#pragma warning(disable:4996)
	//void erase(char text[], char del)
	//{
	//	int len = strlen(text);
	//	int count = 0;
	//	char* copy = (char*)malloc(len + 1);
	//	for (int i = 0; i < len; i++)
	//	{
	//		char ch = text[i];
	//		if (ch != text[i])
	//		{
	//			copy[count] = ch;
	//			count++;
	//		}
	//	}
	//	copy[count] = 0;
	//	strcpy(text, copy);
	//	free(copy);
	//}
	//
	//int main()
	//{
	//	char str[] = "China is a great country with a long history";
	//	erase(str, 'a');
	//
	//	return 0;
	//
	//}
void insert(char text[], int index, char ins)
{
	int len = strlen(text);
	for (int i = len; i > index; i--)
	{
		text[i] = text[i - 1];
	}
	text[index] = ins;
}

int main()
{
	char str[10] = "hello";
	insert(str, 1, 'X');

	return 0;
}