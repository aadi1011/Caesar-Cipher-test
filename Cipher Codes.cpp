// Caesar Cipher by ProxyHydra (https://github.com/ProxyHydra)

// Declaring header files
#include <iostream>
#include <string.h>
using namespace std;

void main()
{
start:
	char message[1000];
	int key;
	cout << "Enter message to encrypt/decrypt\n\n--> ";
	cin.getline(message, 1000);
	system("cls");
	cout << "Message: " << message << endl;
	cout << endl << "Enter key: ";
	cin >> key;
	int length = strlen(message);
	system("cls");
	cout << "Message: " << message << "\nkey: " << key << endl;
	goto choice;						

choice:
	int choice;
	cout << "\nEnter your choice: \n1. Encrypt\n2. Decrypt\n\n--> ";
	cin >> choice;
	goto sort;
	
sort:
	if (choice == 1)
	{
		char ch;
		for (int i = 0; message[i] != '\0'; i++)
		{
			ch = message[i];
			if (ch >= 'a' && ch <= 'z')					 //Lowercase Encryption
			{
				ch = ch + key;
				if (ch>'z')
				{
					ch = ch - 'z' + 'a' - 1;
				}
				message[i] = ch;
			}	
			else if (ch >= 'A' && ch <= 'Z')			  	//Uppercase Encryption
			{
				ch = ch + key;
				if (ch > 'Z')
				{
					ch = ch - 'Z' + 'A' - 1;
				}
				message[i] = ch;
			}	
		}
		cout << "Encrypted message: " << message;				//outputs encrypted message
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
			else if (ch >= 'A' && ch <= 'Z')				//Uppercase Decryption
			{
				ch = ch - key;
				if (ch > 'Z')
				{
					ch = ch + 'Z' - 'A' + 1;
				}
				message[i] = ch;
			}
		}
		cout << "Decrypted message: " << message;				//outputs decrypted message
	}
}
