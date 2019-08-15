#pragma once
#define ENCRYPT 0
#define DECRYPT 1

class Encryptor
{
public:
	Encryptor();
	Encryptor(string, const int&);
	~Encryptor();

	//Functions:
	string output();

protected:
	string text;
	const int MODE;
};

