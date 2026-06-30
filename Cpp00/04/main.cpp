#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

static std::string replaceAll(const std::string& content, const std::string& s1, const std::string& s2)
{
    std::string result;
    std::string::size_type pos = 0;
    std::string::size_type found;

    while ((found = content.find(s1, pos)) != std::string::npos)
    {
        result.append(content.substr(pos, found - pos));
        result.append(s2);
        pos = found + s1.length();
    }
    result.append(content.substr(pos));
    return result;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }

    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open())
    {
        std::cerr << "Error: could not open input file." << std::endl;
        return 1;
    }

    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile.is_open())
    {
        std::cerr << "Error: could not create output file." << std::endl;
        inFile.close();
        return 1;
    }

    std::ostringstream buffer;
    buffer << inFile.rdbuf();
    std::string content = buffer.str();

    outFile << replaceAll(content, s1, s2);

    inFile.close();
    outFile.close();
    return 0;
}