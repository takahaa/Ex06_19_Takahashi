// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;
#include "Box.h"

int main()
{
    float w;
    float h;
    float d;

    cout << "幅を入力してください" << endl;
    cin >> w;
    cout << "高さを入力してください" << endl;
    cin >> h;
    cout << "奥行を入力してください" << endl;
    cin >> d;

    Box *box = new Box(w, h, d);
    cout <<  "表面積：" << box->GetSurface()<< "\n体積：" << box->GetVolume() << endl;
}

Box::Box(float width, float height, float depth)
{
    this->width = width;
    this->height = height;
    this->depth = depth;
}

float Box::GetSurface()
{
    return (width * height + width * depth + height * depth) * 2;
}

float Box::GetVolume()
{
    return width * height * depth;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
