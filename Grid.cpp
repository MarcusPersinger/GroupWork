#include"Grid.h"
 
 
 int main(){
     
     GridSquare pixel;
     PeridodicCycle Cycle;
     
     return 0;
}
// **************************
// Grid Class
// **************************

Grid(float xmin, float xmax, float ymin, float ymax,int xSeperatation, int ySeperation){
    
    xMin = xmin;
    xMax = xmax;
    yMin = ymin;
    yMax = ymax;

    xDiv = xSeperatation;
    yDiv = ySeperation;
    
    //***************************
    //Still needs done
    //grid  needs constructed still
    //Break into a function 
    //calculations of the size of each GridSquare

    
}
float Grid::GetXMin(){
    return xMin;
}
float Grid::GetXMax(){
    return xMax;
}
float Grid::GetYMin(){
    return yMin;
}
float Grid::GetYMax(){
    return yMax;
}

int Grid::GetXDiv(){
    return xDiv;
}
int Grid::GetYDiv(){
    return yDiv;
}
