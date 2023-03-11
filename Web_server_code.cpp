#include<bits/stdc++.h>

using namespace std;

//Function to compareWebsites in terms of text , images, forms size 
bool compareWebsites(const vector<int>& website1, const vector<int>& website2){
    if(website1[0] != website2[0]){
        return website1[0] < website2[0];
    } else if(website1[1] != website2[1]){
        return website1[1] > website2[1];
    } else {
        return website1[2] < website2[2];
    }
}

int main(){
    //open the file 
    freopen("TWSP_small.txt", "r", stdin);
    //write to output file
    freopen("output.txt", "w", stdout);
    int numOfWebsites;
    cin >> numOfWebsites;
    vector<vector<int>> websites(numOfWebsites, vector<int>(3));
    
    for(int i = 0; i < numOfWebsites; i++){
        cin >> websites[i][0];
        cin >> websites[i][1];
        cin >> websites[i][2];
    }
    
    //sort websites on the basis of text, images, forms data.
    sort(websites.begin(), websites.end(), compareWebsites);

    for(int i = 0; i < numOfWebsites; i++){
        cout << websites[i][0] << " " << websites[i][1] << " " << websites[i][2];
        if(i != numOfWebsites - 1){
            cout << "\n";
        }
    }

    return 0;
}
