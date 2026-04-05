#include <iostream>
#include <cstdlib>
#include <ctime>

// This code implements a navigable grid using C-style arrays
int main(){

    constexpr int y{3},x{5}; // y{rows},x{columns}
    // std::string grid[y][x] = {};
    int player_y{0}, player_x{0};
    int exit_y{y-1},exit_x{x-1};

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int key_y{std::rand() % y};
    int key_x(std::rand() % x);
    bool has_key{false};
    std::string input;

    // Sprites
    std::string grid_img = "| |";
    std::string player_img = "|o|";
    std::string exit_img = "|0|";
    std::string key_img = "|#|";
    std::string wall_img = "|||";

    
    std::cout << "Would you like to play? y/n   ";
    std::cin >> input;

    if (input != "n" && input != "no" && input != "y" && input != "yes"){
        std::cout << "Answer, yes or no.\n";
        return 0;
    }
    if (input == "n" || input == "no"){
        return 0;
    } 
    
    // Render grid as text
    while (true){
        std::cout << "player (x,y): (" << player_x << "," << player_y << ")\n";
        std::cout << "key (x,y): (" << key_x << "," << key_y << ")\n";
        for (int i = 0; i < y; ++i){
            for (int j = 0; j < x; ++j){
                if (i == player_y && j == player_x){
                    std::cout << player_img;
                }
                else if (i == exit_y && j == exit_x){
                    std::cout << exit_img;
                }
                else if (i == key_y && j == key_x && !has_key){
                    std::cout << key_img;
                }
                else std::cout << grid_img;
            }
            std::cout << "\n";
        }
        std::cout << "w,a,s,d to move; \n\n";
        std::cout << "------>   ";

        // Update game state
        std::cin >> input;
        if (input == "0" || input == "end") break; //   DON'T USE while(true) WITH NO BREAK CONDITION
        if (input == "w" && player_y > 0) --player_y;
        if (input == "s" && player_y < (y-1)) ++player_y;
        if (input == "a" && player_x > 0) --player_x;
        if (input == "d" && player_x < (x-1)) ++player_x;

        if (player_x == key_x && player_y == key_y) has_key = true;
        if (player_x == exit_x && player_y == exit_y && has_key){
            std::cout << "You Escaped !!!\n\n";
            break;
        }

        std::system("clear"); // Linux terminal
        std::system("cls"); // Windows terminal
    }

    return 0;
}

/*
// todo:
// Add static obstacle
// Add moving obstacle
// Add player attack
*/
