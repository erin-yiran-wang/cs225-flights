#include "fileio.h"

using namespace std;

/**
 * read airport data that has each aiport's ID, latitude, and longitude
 *
 * @param fname the filename of the data in txt
 * @return vector of the airports
 */
vector< pair< int , pair<double, double> > > readAirport(const char* fname){


    vector< pair< int , pair<double, double> > > airports;
    double arr[3];

    ifstream f;
    f.open(fname);
    if(!f.is_open()){
        cout << "unable to read the file" << endl;
        return vector< pair< int , pair<double, double> > >();
    }

    while(!f.eof()){
        
        for(int j = 0; j < 3; j++){
            f >> arr[j];
        }
        airports.push_back( make_pair(int(arr[0]), make_pair(arr[1], arr[2])) );
    }

    f.close();
    
    return airports;
    
}

/**
 * read routes data that have the ids of two airports
 *
 * @param fname the filename of the data in txt
 * @return vector of the routes in format of pair of the ids of airports
 */
vector< pair<int, int> >  readRoutes(const char* fname){

    vector< pair<int, int> > routes;
    int arr[2];

    ifstream f;
    f.open(fname);
    if(!f.is_open()){
        cout << "unable to read the file" << endl;
        return vector< pair<int, int> >();
    }

    
    while(!f.eof()){
        //cout << f << endl;
        for(int j = 0; j < 2; j++){
            f >> arr[j];
        }
        if(arr[0] != -1 && arr[1] != -1){
            routes.push_back( make_pair(arr[0], arr[1]) );
        }
    }

    f.close();
    return routes;
    
}