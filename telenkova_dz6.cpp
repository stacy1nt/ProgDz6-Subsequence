#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> numbers;
    int n = 0;
    bool incr = true;
    cout << "enter your numbers, to stop entering insert two equal numbers" << endl;

    for (int i = 0; true; i++) {
        cin >> n;
        numbers.push_back(n);
        if (numbers[i] == numbers[i-1]) break;
    }
    for (int j = 0; j < numbers.size()-2; j++) {
        if (numbers[j + 1] > numbers[j]) {
//            incr = true;
//            cout << "your subsequence is increasing" << endl;
//            break;
        } else {
            incr = false;
//            cout << "your subsequence is non-increasing" << endl;
//            break;
        }
    }
    if(incr){
        cout << "your subsequence is increasing" << endl;
    }else{
        cout << "your subsequence is non-increasing" << endl;
    }
    return 0;
}
