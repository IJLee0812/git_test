#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>

using namespace std;

void print_func(int n){
    cout << n << " ";
}

int main(){

    // find 함수
    vector<int> myVector = {10, 20, 30, 40, 50};
    vector<int>::iterator it;
    it = find(myVector.begin(), myVector.end(), 30);
    // auto it = find(...);
    if(it == myVector.end()){
        cout << "해당 값을 찾을 수 없습니다." << endl;
    }
    else{
        cout << "value : " << *it << endl;
        cout << "index : " << it - myVector.begin() << endl;
    }
    // for_each 함수
    vector<int> v = {5, 2, 3, 4, 5};
    auto pr = for_each(v.begin(), v.end(), print_func);
    cout << endl;
    // swap 함수
    int x = 10, y = 20;
    vector<int> vec1(4, x); // x(10) 값으로 초기화된 4개의 원소를 가지는 벡터
    vector<int> vec2(6, y); // y(20) 값으로 초기화된 6개의 원소를 가지는 벡터
    swap(x, y);
    cout << x << " " << y << endl;
    swap(vec1, vec2);
    cout << vec1.size() << endl;
    cout << vec2.size() << endl;
    // transform 함수
    string str = "Hello World";
    transform(str.begin(), str.end(), str.begin(), ::toupper); // 모든 소문자를 대문자로 치환
    cout << str << endl;

    return 0;
}
