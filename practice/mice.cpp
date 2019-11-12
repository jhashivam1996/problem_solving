#include<iostream>
#include<stdlib.h>
using namespace std;

bool isPath(int** maze,int r,int c ){
    bool exist=false;
    if(maze[r][c]==9){
        return true;
    }

    if(!exist && c+1<3 && (maze[r][c+1]==1 || maze[r][c+1]==9)){
        exist=isPath(maze,r,c+1);
    }

    if(!exist && r+1<3 && (maze[r+1][c]==1 || maze[r+1][c]==9)){
        exist=isPath(maze,r+1,c);
    }
    if(!exist && c-1>=0 && (maze[r][c-1]==1 || maze[r][c-1]==9)){
        exist=isPath(maze,r,c-1);
    }
    if(!exist && c-1>=0 && (maze[r-1][c]==1 || maze[r-1][c]==9)){
        exist=isPath(maze,r-1,c);
    }

    return exist;
}

int mian(){
    int **maze=(int**)malloc(3*sizeof(int*));
    for(int i=0;i<3;i++){
        maze[i]=(int*)malloc(3*sizeof(int));
    }
    cout<<"enter maze matrix: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>maze[i][j];
        }
    }

    if(maze[0][0]==0){
        cout<<"no way";
    }
    else{
        cout<<isPath(maze,0,0);
    }

    return 0;
}
