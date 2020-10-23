#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<int> v1;     //動的配列の宣言
    vector<string> v2;  //動的配列の宣言

    v1.push_back(1);    //データを動的配列に挿入
    v1.push_back(2);
    v1.push_back(3);
    v2.push_back("ABC");
    v2.push_back("DEF");
    
    unsigned int i;
    for(Ni=0;i<v1.size();i++){
        //size()関数を使ってサイズを取得
        cout << "v1[" << i << "]=" << v1[i] << endl;
    }
    for(i=0;i<v2.size();i++){
        cout << "v2[" << i << "]=" << v2[i] << endl;
    }
    return 0;
}
// </string></int>