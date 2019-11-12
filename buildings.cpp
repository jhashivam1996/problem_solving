#include <iostream>
using namespace std;

struct building
{
    int distance;
    int cost;
    building *left, *right;
};

building *addNewBuilding(building *startingPoint, int dist, int cost)
{
    building *newBuild = new building;
    newBuild->distance = dist;
    newBuild->cost = cost;
    newBuild->left = newBuild->right = NULL;
    if (startingPoint == NULL)
    {
        startingPoint = newBuild;
    }
    else if (dist > startingPoint->distance)
    {
        startingPoint->right = addNewBuilding(startingPoint->right, dist, cost);
    }
    else
    {
        startingPoint->left = addNewBuilding(startingPoint->left, dist, cost);
    }
    return startingPoint;
}

main()
{
    building *startingPoint = NULL;
    startingPoint = addNewBuilding(startingPoint, 4, 8);
    startingPoint = addNewBuilding(startingPoint, 8, 78);
    startingPoint = addNewBuilding(startingPoint, 14, 12);
    startingPoint = addNewBuilding(startingPoint, 41, 19);
    startingPoint = addNewBuilding(startingPoint, 50, 10);
    startingPoint = addNewBuilding(startingPoint, 100, 78);
}
