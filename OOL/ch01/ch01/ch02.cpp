#include <iostream>
using namespace std;

void decideWinner(string s, string t) {

    if (s == "가위") {
        if (t == "가위") cout << "비겼습니다" << endl;
        else if (t == "바위") cout << "줄리엣이 이겼습니다\n";
        else cout << "로미오 승\n";
    }
    else if (s == "바위") {
        if (t == "가위") cout << "로미오 승\n";
        else if (t == "바위") cout << "비겼습니다\n";
        else cout << "줄리엣이 이겼습니다.\n";
    }
    else if (s == "보") {
        if (t == "가위") cout << "줄리엣이 이겼습니다\n";
        else if (t == "바위") cout << "로미오가 이겼습니다\n";
        else cout << "비겼습니다.\n";

    }

}

int main(){
    string s, t, yes;

   while (true) {

       cout << "가위 바위 보를 입력하세요.\n";
       cout << "로미오>>";
       cin >> s;

       cout << "줄리엣>>";
       cin >> t;
       decideWinner(s, t);

       cout << "계속하려면 yes를 입력하십시오>>";
       cin >> yes;
       if (yes != "yes")
           break;
   }

}