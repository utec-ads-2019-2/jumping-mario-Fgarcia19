#include <iostream>
#include <vector>

using namespace std;

void jumps(vector<int>walls){
    int high=0,low=0;
    for(int i=0;i<walls.size()-1;i++){
        if(walls[i]<walls[i+1]){
            high++;
        }
        else if(walls[i]>walls[i+1]){
            low++;
        }
    }
    cout<<high<<" "<<low<<endl;

}


vector<int> test(int numer_walls){
    vector<int> walls;
    int height;
    for(int i=0;i<numer_walls;i++){
        cin>>height;
        walls.push_back(height);
    }
    return walls;
}


void simular(int number_test){
    vector<vector<int>>casos;
    int walls;
    for(int i=0;i<number_test;i++){
        cin>>walls;
        casos.push_back(test(walls));
    }
    for(int i=0;i<casos.size();i++){
        cout<<"Case "<<i+1<<": ";
        jumps(casos[i]);
    }
}



int main() {
    int number_test;
    cin>>number_test;
    simular(number_test);

    return 0;
}
