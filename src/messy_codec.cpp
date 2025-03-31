#include <iostream>

void _title() 
{
    std::cout << "\t MESSY_CODEC_Console version-1.000 \t" << std::endl;
    std::cout << "-----------------------------------------------------------" << std::endl;
    std::cout << "Press 'c' to continue, 'q' to quit: " << std::endl;
}

void _admin_title()
{
    std::cout << "\t MESSY_CODEC_Console-Admin Mode version-1.000 \t" << std::endl;
    std::cout << "-----------------------------------------------------------" << std::endl;
    std::cout << "Press 'c' to continue, 'q' to quit: " << std::endl;
}

void _console() 
{
    std::string _pass_ = "0001";
    char input; 
    for (;;) {
        input = getchar();

        if(input == 'c') 
        {
            std::cout << "The loop will continue..\n";
        } 
        else if (input == 'q') 
        {
            std::cout << "Loop is stopping...\n";
            return; 
        }
        else if(input == 'a')
        {
            std::string userInput;
            std::cin >> userInput;

            if (userInput == _pass_) 
            {
                _admin_title();
            } 
            else 
            {
                std::cout << "ERROR:\tAccess denied.\n";
            }
        }
    }
}

int main() {
    _title();
    _console();
    return 0;
}
