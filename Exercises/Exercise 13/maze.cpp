#include<iostream>
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

int** findWay(int maze[8][8], int startX, int startY, int endX, int endY, int* way[2], int steps){
    maze[startX][startY] = 2;
    way[steps][0] = startX;
    way[steps][1] = startY;
    int** result = nullptr;

    if(startX == endX && startY == endY){
        return way;
    }
    if(walkable(maze, startX + 1, startY)){
        result = findWay(maze, startX + 1, startY, endX, endY, way, steps+1);
        if(result) return result;
    }
    if(walkable(maze, startX, startY + 1)){
        result = findWay(maze, startX, startY + 1, endX, endY, way, steps+1);
        if(result) return result;
    }
    if(walkable(maze, startX - 1, startY)){
        result = findWay(maze, startX - 1, startY, endX, endY, way, steps+1);
        if(result) return result;
    }
    if(walkable(maze, startX, startY - 1)){
        result = findWay(maze, startX, startY - 1, endX, endY, way, steps+1);
        if(result) return result;
    }
    return result;
}

int main(){
    cout<<way(mazeM, 0, 0, 1, 4);
    int foundWay[100][2];
    for(int i = 0; i<100; i++){
        cout<<foundWay[i][0]<<", "<<foundWay[i][1]<<endl;
    }
}
