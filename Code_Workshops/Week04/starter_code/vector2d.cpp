#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

// For a tutorial on 2D vector, please see the following website: 
// https://www.digitalocean.com/community/tutorials/2d-vectors-in-c-plus-plus

int main(void){

	// Initialize 2D vectors
	vector<vector<int>> v, copyV, *vPtr;
	const static vector<vector<int>> v2 {{1,1,1},{2,2,2},{3,3,3}}; 

	//copy one 1d vector into each row of the v
	v.push_back({1, 0, 1});
	v.push_back({0, 1, 2});
	v.push_back({1, 0, 1});
    
	cout << "Print out v" << endl;
	for(unsigned i=0;i<v.size();i++){
		for(unsigned j=0;j<v[i].size();j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}	
 
	//copy v across to copyV
    for(unsigned i=0; i<v.size();++i){
        copyV.push_back(v[i]);
    }

	cout << "Print out copyV" << endl;
	for(unsigned i=0;i<copyV.size();i++){
		for(unsigned j=0;j<copyV[i].size();j++)
			cout<<copyV[i][j]<<" ";
		cout<<endl;
	}	

	// The compiler will complain the below two lines.
    // vPtr = &v2;
	// char* str = "abc";
    
	// allocate memory and let vPtr point at it
    vPtr = new vector<vector<int>>();

    //copy v2 content across to memory space pointed at by vPtr
	for(unsigned i=0; i<v2.size();++i){
        vPtr->push_back(v2[i]);
    }

	cout << "Print out 2D vector pointed at by vPtr" << endl;
    for(unsigned i=0;i<vPtr->size();i++){
		for(unsigned j=0;j<vPtr->size();j++)
			cout<<vPtr->at(i)[j]<<" ";
		cout<<endl;
	}	
	return EXIT_SUCCESS;
}