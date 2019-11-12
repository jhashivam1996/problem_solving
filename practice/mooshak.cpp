#include<iostream>
#include<stdlib.h>
using namespace std;

bool isPath(int maze[6][6],int r,int c ){
    bool exist=false;
    if(maze[r][c]==9)
        return true;
    maze[r][c]=2;
    if(!exist && c+1<6 && (maze[r][c+1]==1 || maze[r][c+1]==9))
        exist=isPath(maze,r,c+1);
    if(!exist && r+1<6 && (maze[r+1][c]==1 || maze[r+1][c]==9))
        exist=isPath(maze,r+1,c);
    if(!exist && c-1>=0 && (maze[r][c-1]==1 || maze[r][c-1]==9))
        exist=isPath(maze,r,c-1);
    if(!exist && r-1>=0 && (maze[r-1][c]==1 || maze[r-1][c]==9))
        exist=isPath(maze,r-1,c);
    return exist;
}

int main(){
     int maze[6][6]={{1,1,1,0,0,0},
                     {0,0,1,0,0,0},
                     {0,1,1,1,0,1},
                     {0,1,0,0,0,1},
                     {0,1,1,1,0,1},
                     {9,1,0,0,0,1}};
     cout<<" maze:\n";
     for(int i=0;i<6;i++){
            cout<<"\n";
        for(int j=0;j<6;j++){

            cout<<maze[i][j]<<" ";
        }
    }
    cout<<"\n\nResult: ";
    if(maze[0][0]==0){
        cout<<"no way to sweets.";
    }
    else if(isPath(maze,0,0)){
        cout<<"Yes!! there is a way to sweets.";
    }
    else{
        cout<<"Mouse would not be able to reach to the sweets";
    }
    cout<<"\n\nAll 2's are representing the pathway of mouse to the sweets:-";
     for(int i=0;i<6;i++){
            cout<<"\n";
        for(int j=0;j<6;j++){

            cout<<maze[i][j]<<" ";
        }
    }
    return 0;
}
