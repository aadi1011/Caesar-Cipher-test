#include <iostream>
#include <string.h>
using namespace std;

void main()
{
	char message[1000];
	int key, choice;
	cout << "Enter message to encrypt/decrypt" << endl;
	cin.getline(message, 1000);
	cout << endl << "Enter key: ";
	cin >> key;
	int length = strlen(message);
	cout << "Enter your choice: \n1. Encrypt\n2. Decrypt";
	cin >> choice;

	if (choice == 1)
	{
		char ch;
		for (int i = 0; message[i] != '\0'; i++)
		{
			ch = message[i];
			if (ch >= 'a' && ch <= 'z')					   //Lowercase Encryption
			{
				ch = ch + key;
				if (ch>'z')
				{
					ch = ch - 'z' + 'a' - 1;
				}
				message[i] = ch;
			}	
			else if (ch >= 'A' && ch <= 'Z')			  //Uppercase Encryption
			{
				ch = ch + key;
				if (ch > 'Z')
				{
					ch = ch - 'Z' + 'A' - 1;
				}
				message[i] = ch;
			}	
		}
		cout << "Encrypted message: " << message;
	}
	
	else if (choice == 2)
	{
		char ch;
		for (int i = 0; message[i] != '\0'; i++)
		{
			ch = message[i];
			if (ch >= 'a' && ch <= 'z')					//Lowercase Decryption
			{
				ch = ch - key;
				if (ch > 'z')
				{
					ch = ch + 'z' - 'a' + 1;
				}
				message[i] = ch;
			}
			else if (ch >= 'A' && ch <= 'Z')			//Uppercase Decryption
			{
				ch = ch - key;
				if (ch > 'Z')
				{
					ch = ch + 'Z' - 'A' + 1;
				}
				message[i] = ch;
			}
		}
		cout << "Encrypted message: " << message;
	}
}
