#include <iostream>
#include <string>

std::string encrypt(std::string s, char& key)
{
 
    for (int i = 0; i < s.length(); i++)
    {
        s[i] ^= key;
    }
    return s;

}

std::string decrypt(std::string s, char& key)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] ^= key;
    }
    return s;
}

int main()
{
    std::string some_random_string{ "Hello world" };

    char key = ')';

    std::string encryptedText{ encrypt(some_random_string, key) };
    std::string decryptedText{ decrypt(encryptedText, key) };

    std::cout << "original text is => " << some_random_string << '\n';
    std::cout << "encrypted text is => " << encryptedText << '\n';
    std::cout << "decyrpted text is => " << decryptedText << '\n';
}
