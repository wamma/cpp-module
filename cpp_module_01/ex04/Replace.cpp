#include "Replace.hpp"

void Replace::replace(std::string filename, std::string s1, std::string s2) {
	std::ifstream inputFileStream(filename);

	if (!inputFileStream.is_open()) {
		std::cerr << "Error: could not open file " << filename << std::endl;
		return;
	}

	// std::string line;
	std::string contents;
	// while (std::getline(inputFileStream, line, '\0')) {
	// 	contents += line + '\n';
	// }

	std::getline(inputFileStream, contents, '\0');

	// inputFileStream.close();

	size_t pos = 0;
	while ((pos = contents.find(s1, pos)) != std::string::npos) {
		contents.replace(pos, s1.length(), s2);
		pos += s2.length();
	}
	if (pos == 0) {
		std::cout << "Could not find the string to replace" << std::endl;
	}

	std::ofstream outputFileStream(filename);

	if (!outputFileStream.is_open()) {
		std::cerr << "Error: could not open file " << filename << std::endl;
		return;
	}
	outputFileStream << contents;

	// outputFileStream.close();
}