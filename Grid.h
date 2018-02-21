#ifndef GRID_H
#define GRID_H
#include<utility>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//TypeDefing a pair of floats to Ordered pair
//  makes declaring easier
//to make a new pair you must use the make_pair function
//Pairs should be thought of as an Ordered pair
//pairs are indexed by using their two built in fields
    // pair.first will give the first element of the pair (X)
    //pair.second will give the second element of the pair (Y)
typedef pair<float,float> OrderedPair;

struct GridSquare{

    
  //These four floats represent the bounds of each "window" or GridSquare  
  float xMin;
  float xMax;
  float yMin;
  float yMax;
  
  
  OrderedPair resultant;
    
};
struct PeriodicCycle{
    
    vector<OrderedPair> coordinates;
    int GetPeroidLength();
    
};

class Grid{
    
public:
    
    float GetXMin();
    float GetXMax();
    float GetYMin();
    float GetYMax(); 
    
    int GetXDiv();
    int GetYDiv();
        
    Grid(float xMin, float xMax, float yMin, float yMax,int xSeperatation, int ySeperation);
    
private:
    
    float xMin;
    float xMax;
    float yMin;
    float yMax; 
    
    int yDiv;
    int xDiv;
    
    //When constructing a vector of vectors
        //Fill the first vector, should be a temp vector local to the function
        //push_back that temp vector into grid
        //clear temp vector
    
            
    vector< vector<GridSquare> > grid;
    
    //private constructor to prevent the creation of a empty table
    Grid();
    
    void FindCycles(vector<PeriodicCycle>);
    
};

#endif
