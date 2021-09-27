#include <iostream>

using namespace std;

typedef enum { wood, stone, player } material;
int ppx, ppy;

struct tile {
    int x, y;
    bool isWall;
    material type;
};
    
#define NROWS 12
#define NCOLS 16

tile playground[NROWS][NCOLS];

void printmap(){
    for (int i = 0; i < NROWS; i++) {
        string row;
        for (int j = 0; j < NCOLS; j++) {
            if (playground[i][j].isWall) {
                row += "*";
            } 
            if (playground[i][j].type == wood) {
                row += " ";
            }
            if (playground[i][j].type == player){
                row += "O";
            }
        }
        cout << row << endl;
    }
}

void playpos(int y, int x){
    // Remove player from old possition and set player at new possition 
    playground[ppy][ppx].type = wood;
    playground[y][x].type = player;

    // Update global player position knowledge
    ppx = x;
    ppy = y;

    // Print game stage
    printmap();
}

int game(){
    string input;

    // Ini game state
    printmap();

    // Until player quits take inputs
    while(true){
        cin >> input;

        for (int i = 0; i < input.length(); i++)
        {
            // Quit condition
            if(input[i] == 'q'){
                return 0;
            }

            // Move left
            if(input[i] == 'l'){
                if(!playground[ppy][ppx - 1].isWall){
                    playpos(ppy, ppx - 1);
                } else {
                    playpos(ppy, ppx);
                }  
            }

            // Move right
            if(input[i] == 'r'){
                if(!playground[ppy][ppx + 1].isWall){
                    playpos(ppy, ppx + 1);
                } else {
                    playpos(ppy, ppx);
                }  
            }

            // Move up
            if(input[i] == 'u'){
                if(!playground[ppy - 1][ppx].isWall){
                    playpos(ppy - 1, ppx);
                } else {
                    playpos(ppy, ppx);
                }  
            }

            // Move down
            if(input[i] == 'd'){
                if(!playground[ppy + 1][ppx].isWall){
                    playpos(ppy + 1, ppx);
                } else {
                    playpos(ppy, ppx);
                }  
            }
        }
    }
}

int main() {
    // Generate map and set player pos
    for (int i = 0; i < NROWS; i++) {
        for (int j = 0; j < NCOLS; j++) {
            playground[i][j].x = j;
            playground[i][j].y = i;
            playground[i][j].isWall = (j==0 || i==(NROWS-1) || (i==0 && j!=3) || j==(NCOLS-1));
            if (playground[i][j].isWall) {
                playground[i][j].type = stone;
            } else {
                playground[i][j].type = wood;
            }
        }
    }

    ppx = 5;
    ppy = 5;
    playground[ppy][ppx].type = player;

    // Start game
    game();

    return 0;
}