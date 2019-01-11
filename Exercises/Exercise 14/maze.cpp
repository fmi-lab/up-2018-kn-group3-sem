#include<iostream>
#include<iomanip>
using namespace std;

int mazeM[8][8] = {
{0,1,0,0,0,1,0,0},
{0,1,0,0,0,1,0,0},
{0,1,0,0,1,1,1,1},
{0,1,0,1,0,0,0,0},
{0,1,0,1,1,1,0,0},
{0,0,0,0,0,0,0,0},
{0,1,0,1,1,1,0,1},
{0,1,0,1,1,0,0,0}
};

bool walkable(int maze[8][8], int X, int Y){
    if(X<0 || Y<0 || X>7 || Y>7 || maze[X][Y] != 0){
        return false;
    }
    return true;
}

bool way(int maze[8][8], int startX, int startY, int endX, int endY){
    maze[startX][startY] = 2;
    bool result = false;
    if(startX == endX && startY == endY){
        return true;
    }
    if(walkable(maze, startX + 1, startY)){
        result = result || way(maze, startX + 1, startY, endX, endY);
    }
    if(walkable(maze, startX, startY + 1)){
        result = result || way(maze, startX, startY + 1, endX, endY);
    }
    if(walkable(maze, startX - 1, startY)){
        result = result || way(maze, startX - 1, startY, endX, endY);
    }
    if(walkable(maze, startX, startY - 1)){
        result = result || way(maze, startX, startY - 1, endX, endY);
    }
    return result;
}

bool findWay(int maze[8][8], int startX, int startY, int endX, int endY){
    bool result = false;
    if(startX == endX && startY == endY){
        return true;
    }
    if(walkable(maze, startX + 1, startY)){
        maze[startX+1][startY] = 10;
        result = findWay(maze, startX + 1, startY, endX, endY);
        if(result) return result;
    }
    if(walkable(maze, startX, startY + 1)){
        maze[startX][startY+1] = 11;
        result = findWay(maze, startX, startY + 1, endX, endY);
        if(result) return result;
    }
    if(walkable(maze, startX - 1, startY)){
        maze[startX-1][startY] = 12;
        result = findWay(maze, startX - 1, startY, endX, endY);
        if(result) return result;
    }
    if(walkable(maze, startX, startY - 1)){
        maze[startX][startY-1] = 13;
        result = findWay(maze, startX, startY - 1, endX, endY);
        if(result) return result;
    }
    return result;
}

void printMaze(int maze[8][8]){
    for(int i = 0; i<8; i++){
        for(int j = 0; j<8; j++){
            cout<<setw(3)<<maze[i][j];
        }
        cout<<endl;
    }
}

void printMazeRecHelper(int maze[8][8], int currX, int currY){
    cout<<setw(3)<<maze[currX][currY];
    if(currY < 7){
        printMazeRecHelper(maze, currX, currY + 1);
    } else if(currX < 7){
        cout<<endl;
        printMazeRecHelper(maze, currX + 1, 0);
    }
}

void printMazeRec(int maze[8][8]){
    printMazeRecHelper(maze, 0, 0);
}

void printWay(int maze[8][8], int startX, int startY, int endX, int endY){
    if(startX != endX || startY != endY){
        if(maze[endX][endY] == 10){
            cout<<endX<<' '<<endY<<endl;
            printWay(maze, startX, startY, endX - 1, endY);
        }
        if(maze[endX][endY] == 11){
            cout<<endX<<' '<<endY<<endl;
            printWay(maze, startX, startY, endX, endY - 1);
        }
        if(maze[endX][endY] == 12){
            cout<<endX<<' '<<endY<<endl;
            printWay(maze, startX, startY, endX + 1, endY);
        }
        if(maze[endX][endY] == 13){
            cout<<endX<<' '<<endY<<endl;
            printWay(maze, startX, startY, endX, endY + 1);
        }
    }
}

bool findAndPrintWay(int maze[8][8], int startX, int startY, int endX, int endY){
    bool result = findWay(maze, startX, startY, endX, endY);
    if (result){
        printWay(maze, startX, startY, endX, endY);
    }
    return result;
}

int main(){
    printMazeRec(mazeM);
    cout<<endl;
    findAndPrintWay(mazeM, 0, 0, 1, 4);
    printMaze(mazeM);
}













