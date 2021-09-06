#include <iostream>
#include <fstream>
#include <string>

void    create_new_file(std::string filename, std::string s1, std::string s2, std::ifstream &ifs)
{
    std::ofstream   ofs(filename + ".replace");
    std::string     line;
    int             pos;

    while (std::getline(ifs, line))
    {
        pos = 0;
        while (pos != -1)
        {
            pos = line.find(s1);
            if (pos != -1)
            {
                line.erase(pos, s1.length());
                line.insert(pos, s2);
            }
        }
        ofs << line << std::endl;
    }
    ofs.close();
}

int main(int argc, char **argv)
{
    std::string     filename(argv[1]);
    std::string     s1(argv[2]);
    std::string     s2(argv[3]);
    std::ifstream   ifs(filename);
    
    if (argc != 4)
    {
        std::cout << "Program takes 3 arguments" << std::endl;
        return (1);
    }
    if (filename.empty() || s1.empty() || s2.empty())
    {
        std::cout << "Strings can't be empty" << std::endl;
        return (1);
    }
    if (ifs.good() == 0)
    {
        std::cout << "File does not exist" << std::endl;
        return (1);
    }
    create_new_file(filename, s1, s2, ifs);
    ifs.close();
    return (0);
}