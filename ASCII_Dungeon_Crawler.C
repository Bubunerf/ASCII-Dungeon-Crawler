#include <stdio.h>

void drawing_map(char current_map[5][7]) {
    int rows, collumns;

    for (rows = 0; rows < 5; rows++) {
        for (collumns = 0; collumns < 7 ; collumns++) {
            printf("%c" , current_map[rows][collumns]);
        }
        printf("\n");
    }
}

void player_movement(char direction, int *position_x, int *position_y) {
    switch (direction) {
        case 'w':
            printf("Moving Up\n");
            *position_y -= 1;
            break;

        case 's':
            printf("Moving Down\n");
            *position_y += 1;
            break;

        case 'a':
            printf("Moving to the left\n");
            *position_x -= 1;
            break;

        case 'd':
            printf("Moving to the right\n");
            *position_x += 1;
            break;

        default:
            printf("You have given invalid input\n");
            break;

    }
}

/*
Do a check based set up in which the input for movement in taken and the tile that we will go
Then we check wheteher the tile we are moving has something such as a wall
if so we block movement if not we move
 */ 
bool check_wall(int pox_x , int pos_y, int current_X, int current_Y) {



}


int main(void) 
{

    char map[5][7] = {
        {'#','#','#','#','#','#','#'},
        {'#','.','.','.','.','E','#'},
        {'#','.','#','.','#','.','#'},
        {'#','P','.','.','.','.','#'},
        {'#','#','#','#','#','#','#'}
    };
    // Defining the map
    drawing_map(map);
   
    // printing the current map
    char direction;
    
    int pos_x = 1;
    int pos_y = 3;

    int current_x = pos_x;
    int current_y = pos_y;

    int exit_location_x = 5;
    int exit_location_y = 1;

    while (current_x != exit_location_x || current_y != exit_location_y) {
        printf("Please enter a direction w/a/s/d\n");

        scanf("  %c", &direction);

        printf("You have choosen %c\n" , direction);

        player_movement(direction , &current_x , &current_y);

        printf("New Pos X is: %d , New Pos Y is: %d\n" , current_x , current_y);

        map[current_y][current_x] = 'P';
        map[pos_y][pos_x] = '.';

        pos_x = current_x;
        pos_y = current_y;

    drawing_map(map);
    }



    return 0;
}