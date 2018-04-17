// Date: 4/17/2018
// Program: Ceaser Cipher
// Author: Austin Richards

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string cipher(string encryptedMessage, int shift)
{
	string result = "";

	for (int i = 0; i < encryptedMessage.length(); i++)
	{
		//encrypts uppercase letters and applys transformation or cipher
		if (isupper(encryptedMessage[i]))
			result += char(int(encryptedMessage[i] + shift - 65) % 26 + 65);
		else
			//encrypt lowercase letters
			result += char(int(encryptedMessage[i] + shift - 97) % 26 + 97);

	}
	return result;
}

int main()
{
	string encryptedMessage = "";
	std::cout << "Enter the test answers to be ciphered!" << std::endl;
	std::cin >> encryptedMessage;
	int shift = 3;
	cout << "Text: " << encryptedMessage;
	cout << "\nShift: " << shift;
	cout << "\nCipher: " << cipher(encryptedMessage, shift) << std::endl;

	system("pause");
	return 0;
}


