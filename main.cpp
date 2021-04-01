#include <iostream>
#include <string>

int main() {
    const char *introAscii = "\n"            
"            _       \n"
"           | |      \n"
"   ___  ___| |__    \n"
"  / _ \\/ __| '_ \\   \n"
" |  __/\\__ \\ | | |  \n"
"  \\___||___/_| |_|  \n"
"                    \n";                  
    printf("%s", introAscii);

    while (true) {
        std::string input; 
        std::cout << "> ";
        std::getline (std::cin,input);
        std::cout << input << std::endl;
    }
}
