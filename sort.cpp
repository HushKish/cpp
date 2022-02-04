#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool desc(int a, int b){ 
  return a > b; 
} //내림차순 정렬시 사용할 함수
bool comp(const pair<int,int>& p1,const pair<int,int>& p2){
    if(p1.first==p2.first){
        return p1.second<p2.second;//first가 같다면 앞에 배치된 것의 second가 더 작아야해
    }
    
    else if(p1.first>p2.first){
        return p1>p2;//위 조건이 참일때 앞에것이 뒤에것보다 크면 그대로 두고 아니면 swap해
    }
    return p1>p2;//위 조건들을 모두 만족하지 않는 경우엔 앞에나온게 무조건 크게해
    
}//이렇게 정렬되어야돼 알려주는 함수
int main(void){
    vector<int> arr;
  
    //vector push
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(9);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(10);
    arr.push_back(6);
    sort(arr.begin(),arr.end());
    //배열을 사용할 경우엔 두번째인자는 포함되지 않음을 기억해서 마지막 인덱스가 아닌 배열의 크기를 넣기 시작주소+배열의크기
    sort(arr.begin(),arr.end(),desc);

    vector< pair<int,int> > p;
    p.push_back(make_pair(1,2));
    p.push_back(make_pair(2,2));
    p.push_back(make_pair(3,1));
    p.push_back(make_pair(1,3));
    p.push_back(make_pair(2,1));
    p.push_back(make_pair(4,2));

    sort(p.begin(),p.end(),comp);
    
    
}
