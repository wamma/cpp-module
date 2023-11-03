#include "Replace.hpp"

void Replace::replace(std::string filename, std::string s1, std::string s2) {
	std::ifstream inputFileStream(filename);

	if (!inputFileStream.is_open()) {
		std::cerr << "Error: could not open file " << filename << std::endl;
		return;
	}

	std::ofstream outputFileStream(filename + ".replace");
	if (!outputFileStream.is_open()) {
		std::cerr << "Error: could not open file " << filename << ".replace" << std::endl;
		return;
	}

	std::string line;
	while (std::getline(inputFileStream, line)) {
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
		outputFileStream << line << '\n';
	}
	inputFileStream.close();
	outputFileStream.close();
}