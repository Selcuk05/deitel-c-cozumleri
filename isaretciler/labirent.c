#include <stdio.h>
#include <windows.h>
# define BOYUT 12

void printMaze(char m[][BOYUT]);
void mazeTraverse(char m[][BOYUT], int row, int col);

void mazeTraverse(char m[][BOYUT], int row, int col){
    m[row][col] = 'X';

    printMaze(m);
    // sleep(1);

    if(col == BOYUT - 1 || row == BOYUT - 1){
        printf("\nLabirent tamamlandi!");
        return;
    }

    if(m[row][col+1] == '.'){ // kusbakisi saga dogru kontrol
        m[row][col] = '.';
        mazeTraverse(m, row, col+1);
        return;
    }

    if(m[row-1][col] == '.'){ // kusbakisi yukari dogru kontrol
         m[row][col] = '.';
        mazeTraverse(m, row-1, col);
        return;
    }

    if(m[row+1][col] == '.'){ // kusbakisi asagi dogru kontrol
         m[row][col] = '.';
        mazeTraverse(m, row+1, col);return;
    }

    if(m[row][col-1] == '.'){ // kusbakisi sola dogru kontrol
         m[row][col] = '.';
        mazeTraverse(m, row, col-1);return;
    }
}

void printMaze(char m[][BOYUT]){

    size_t i;
    size_t j;
    for(i = 0; i < BOYUT; i++){
        for(j = 0; j < BOYUT; j++){
            printf(" %c", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
    char maze[BOYUT][BOYUT] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#'},
        {'.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#'},
        {'#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.'},
        {'#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
        {'#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
        {'#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#'},
        {'#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
    };

    mazeTraverse(maze, 2, 0);
}
