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

    int new_pos_x = pos_x;
    int new_pos_y = pos_y;

    int exit_location_x = 5;
    int exit_location_y = 1;

    while (new_pos_x != exit_location_x || new_pos_y != exit_location_y) {
        printf("Please enter a direction w/a/s/d\n");

        scanf("  %c", &direction);

        printf("You have choosen %c\n" , direction);

        player_movement(direction , &new_pos_x , &new_pos_y);

        printf("New Pos X is: %d , New Pos Y is: %d\n" , new_pos_x , new_pos_y);

        map[new_pos_y][new_pos_x] = 'P';
        map[pos_y][pos_x] = '.';

        pos_x = new_pos_x;
        pos_y = new_pos_y;

    drawing_map(map);
    }


    
    return 0;
}