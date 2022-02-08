#include <iostream>
#include <fstream>
#include <string>
int main()
{
	    int user = 0;
		std::string text;
		int lines = 0;
		do {
			std::string createuser;
			std::cout << "TEXT EDITOR {CONSOLE}";
			std::cout << "\n";
			std::cout << "CREATE NEW TXT FILE {CONSOLE} \n";
			std::cin >> user;
			if (user == 1) {
				std::ofstream readers;

				std::cout << "CREATE NEW TXT [MUST END WITH .TXT]: ";
				std::cout << "\n";
				std::cin >> createuser;
				std::cout << "HOW MANY LINES? ";
				std::cin >> lines;
				std::cout << "\n";
				std::cout << "PUT YOUR WORDS BELOW ";
				std::cout << "\n";
				readers.open(createuser, std::ios::app);
				readers.open(createuser, std::ios::app);
				if (readers.is_open()) {
					for (int i = 0; i < lines; i++) {
						std::cin >> text;
						readers << text << "\n";
					}
				}
			}

		} while (user != 4);
}