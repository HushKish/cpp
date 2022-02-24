#include <iostream>
#include <string>
#include <tuple>
#include <queue>
using namespace std;
 
tuple<int, string> getAgeandName() { //tuple<int,string>자료형의 함수
    int age;
    string name;
    cout << "나이를 입력하세요: ";
    cin >> age;
 
    cout << "이름을 입력하세요: ";
    cin >> name;
 
    return make_tuple(age, name); // tuple형태로 리턴
}
 
int main() {
    tuple<int, string> personInfo; // vector와 다르게 push,pop과 같은 함수로 넣었다 뺄 수 있는자료구조가 아닌 단독으로 쓰이는 변수
    personInfo = getAgeandName();
 
    cout << "나이: " << get<0>(personInfo) << endl; // 0번째 인댁스 값을 불러오기
    cout << "이름: " << get<1>(personInfo) << endl;

    queue<tuple<int,int,int> > que; // tuple<int,int,int>타입의 데이터를 담는 queue생성
    que.push(make_tuple(0,0,0));

    int x,y,z;
    tie(x,y,z) = que.front(); //큐의 첫번째 요소를 한번에 대입
    cout << x << " " << y << " " << z;
 
    return 0;
}
