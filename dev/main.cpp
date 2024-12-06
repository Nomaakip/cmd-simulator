#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

std::string input_roll;

void gamea();
void game();

int fork;
int cat;
int num;
int luck;

void gambling() {


    if (luck >= 10) {
        srand(time(NULL));
        num = rand() % 1001;
        if (num <= 300) {
            std::cout << "you rolled a pet fork!(common)\n" << "DEBUG : NUMBER " << num << ".\n";
            fork = fork + 1;
            gamea();
        }

        if (num <= 1000) {
            std::cout << "you rolled a pet cat(rare)\n" << "DEBUG : NUMBER " << num << ".\n";
            luck = luck + 10;
            std::cout << "+10% luck\n";
            cat = cat + 1;
            gamea();
        }
        else {
            std::cout << "soon\n";
            gamea();
        }
    }
    else {
        srand(time(NULL));
        num = rand() % 1001;
        if (num <= 500) {
            std::cout << "you rolled a pet fork!(common)\n" << "DEBUG : NUMBER " << num << ".\n";
            fork = fork + 1;
            gamea();
        }

        if (num <= 1000) {
            std::cout << "you rolled a pet cat(rare)\n" << "DEBUG : NUMBER " << num << ".\n";
            luck = luck + 10;
            std::cout << "+10% luck\n";
            cat = cat + 1;
            gamea();
        }
        else {
            std::cout << "soon\n";
            gamea();
        }
    }
}

void gamea() {
    std::cin >> input_roll;
    if (input_roll == "roll") {
        gambling();
    }
    if (input_roll == "pets") {
        std::cout << "You currently have : \n";
        std::cout << cat << " Cats\n";
        std::cout << fork << " Forks\n";
        gamea();
    }
    else {
        gamea();
    }
    }


void game() {
    std::cout << "Welcome to cmd simulator.type roll to continue.\n";
    std::cin >> input_roll;

    if (input_roll == "roll") {
        gambling();
    }
    else {
        gamea();
    }
}


int main() {
    game();
}
