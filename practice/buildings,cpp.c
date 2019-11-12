#include<iostream>
using namespace std;

struct building{
    int distance;
    int cost;
    building *left,*right;
};

building* addNewBuilding(building* startingPoint,int dist,int cost){
    node *newBuild=new building;
    newBuild->distance=dist;
    newBuild->cost=cost;
    newBuild->left=newBuild->right=NULL;
    if(startingPoint==NULL){
        startingPoint=newBuild;
    }
    else if(dist>startingPoint->dstance){
        startingPoint->right=addNewBuilding(startingPoint->right,dist,cost);
    }
    else{
        startingPoint->left=addNewBuilding(startingPoint->left,dist,cost);
    }
    return startingPoint;
}

main(){
    building *startingPoint=NULL;
    startingPiont=addNewBuilding(startingPoint,4,8);
    startingPiont=addNewBuilding(startingPoint,8,78);
    startingPiont=addNewBuilding(startingPoint,14,12);
    startingPiont=addNewBuilding(startingPoint,41,19);
    startingPiont=addNewBuilding(startingPoint,50,10);
    startingPiont=addNewBuilding(startingPoint,100,78);

}
