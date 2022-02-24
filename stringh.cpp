#include<iostream>
#include<string>
using namespace std;
int main(void){
    string s1,s2,s3;
    cin >> s1;
    cin.ignore(10); 
    cin >> s2;
    getline(cin,s3); //버퍼에 남은 값을 우선으로 가져오고 엔터를 만나면 그때까지 입력받았던 것을 넣어줌

    cout << s1 << endl << s2 << endl << s3;
    /* 
    입력을 korean까지 이후는 출력 즉 cin.ignore(10)은 cin에서 쓰고 버퍼에 남은 것들중 앞에서부터 10번째 까지를 싹다 버리는 역할,
    이후에 값이 추가로 들어오더라도 10번째까지 쌓이고 난 다음에야 11번째 문자가 s2에 들어갈 수 있음
    what te h
    imthe korean 
    what
    e
     korean*/
    string s4 = s1 + s2; // strcat과 같은 역할
    cout << s4.length(); // strlen(s4)와 같은역할
    

}
