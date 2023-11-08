#include <iostream>

enum Sequence{
    Launch,
    Abort,
    Hold
};

enum State{
    Engine_failure = 1,
    Incremental_Weather = 2,
    Nominal = 3
};

enum class Whale{
    Blue,
    Humpback,
    Sperm
};

enum class Sharek{
    Blue,
    Hammerhead,
    Tiger
};

std::istream &operator>>(std::istream & in, State &state){

    std::underlying_type_t<State> user_input;

    in >> user_input;

    switch (user_input)
    {
    case Engine_failure:
        state = Engine_failure;
        break;
    case Incremental_Weather:
        state = Incremental_Weather;
        break;
    case Nominal:
        state = Nominal;
        break;
    default:
        std::cout << "User input is not valid" << std::endl;

    }

    return in;
}

std::ostream& operator<<(std::ostream& os, State state)
{
    switch (state)
    {
    case Engine_failure:
        os << "Engine has failured";
        break;
    case Incremental_Weather:
        os << "Incremental weather failure";
        break;
    
    case Nominal:
        os << "I don't know what is a nominal error";
        break;
    }

    return os;

}

// cout operator for Whale
std::ostream& operator<<( std::ostream& os, Whale whale)
{
    switch (whale)
    {
    case Whale::Blue:
        os << "Blue whale";
        break;
    case Whale::Humpback:
        os << "Humpback whale";
        break;
    case Whale::Sperm:
        os << "Sperm whale";
        break;
    }

    return os;
}

// cout operator for Sharek
std::ostream& operator<<( std::ostream& os, Sharek sharek)
{
    switch (sharek)
    {
    case Sharek::Blue:
        os << "Blue shark";
        break;
    case Sharek::Hammerhead:
        os << "Hammerhead shark";
        break;
    case Sharek::Tiger:
        os << "Tiger shark";
        break;
    }

    return os;
}

// Fake initialite function
void initialize(Sequence s) {
    switch (s) {
        case Launch:
            std::cout << "Launch" << std::endl;
            break;
        case Abort:
            std::cout << "Abort" << std::endl;
            break;
        case Hold:
            std::cout << "Hold" << std::endl;
            break;
    }
}

int main() {

    // The structure of a enum
    // enum_key enum_name : enum_type {enum_value1, enum_value2, ...};
    // enum_key: enum, enum class
    // enum_type: int, char, short, long, long long
    // enum_value: 0, 1, 2, 3, ...
    // enum_name: name of the enum

    // First example
    enum {red, green, blue}; // Implicit initialization
    //     0    1      2

    enum {red1 = 5, green1 = 1, blue1 = 1}; // Explicit initialization

    enum {red2 = 5, green2, blue2}; // Implicit / explicit initialization

    // Second example
    enum {yellow, pink, organge}; // The type of the enum is int if not specified

    enum : long long {yellow1, pink1, organge1}; // The type of the enum is long long

    int my_color;

    my_color = red; // this is valid
    my_color = 1; // this is valid too

    enum Color { red3, green3, blue3 }; // enum Color is a type now

    Color my_color1;

    my_color1 = red3; // this is valid
    //my_color1 = 1; // this is not valid


    //*****************************************************************

    State my_state;

    std::cout << "Please enter the state: " << std::endl;
    std::cin >> my_state;

    std::cout << "The state that you selected is: " << my_state << std::endl;

    switch (my_state)
    {
    case Engine_failure:
        initialize(Abort);
        break;
    case Incremental_Weather:
        initialize(Hold);
        break;
    
    case Nominal:
        initialize(Launch);
        break;
    }
    //*****************************************************************

    Whale whale(Whale::Blue);
    Sharek sharek(Sharek::Blue);

    std::cout << "The whale is: " << whale << std::endl;
    std::cout << "The sharek is: " << sharek << std::endl;

    return 0;
}