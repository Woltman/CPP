//
// Created by administrator on 25-10-17.
//

#include "../../Headers/State/Haven_state.h"
#include "../../Libs/String.h"

void Haven_state::show() {
    std::cout << "Show()" << std::endl;
}

void Haven_state::handle_input(Game &game) {


}

void Haven_state::run(Game *game) {
    char input[15];

    std::cin >> input;

    String i(input);

    if(i.equals("quit")){
        std::cout << "true" << std::endl;
    }
    else{
        std::cout << "false" << std::endl;
    }

    std::cout << "run haven" << std::endl;
}

