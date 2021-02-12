#include <iostream> 
using namespace std; 

//cat and mouse
string solve(int x, int y, int z){ 
    
    int catA = abs(x-z); 
    int catB = abs(y-z); 
    string result; 

    if(catA < catB){
        result = "CAT A";   
    }else if(catB < catA){
        result = "CAT B"; 
    }else if(catB == catA){
        result = "MOUSE C"; 
    }   

    return result; 

}


//keyboards and drives
void solve(vector<int> keyboards, vector<int> drives, int b){ 
    vector<int> sums;
    int result = 0;   
    for(int i = 0; i < drives.size(); i++){
        for(int j = 0; j < keyboards.size(); j++){
            int currentSum = drives[i] + keyboards[j]; 
            if(currentSum <= b){ 
                sums.push_back(currentSum);    
            }
        }
    }   
    
    if(sums.empty()){
        return -1;   
    }else{
        return *max_element(sums.begin(), sums.end()) << endl;  
    }   
}


//alice and bob
void solve(vector<int> a, vector<int> b){ 
    int a_score = 0;  
    int b_score = 0;
    vector<int> scores; 
    for(int i = 0; i < a.size(); i++){
        if(a[i] > b[i]){
            a_score += 1;  
        }else if(a[i] <  b[i]){
            b_score += 1;  
        }
    }
    scores.push_back(a_score);
    scores.push_back(b_score);
    return scores;
}

//simple array sum
int simpleArraySum(vector<int> ar) {
    /*
     * Write your code here.
     */

     int sum = 0;
     for(int i = 0; i < ar.size(); i++){
         sum += ar[i];
     }

     return sum;


}
    
