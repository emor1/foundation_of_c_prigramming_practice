# テンプレート

定義
template<typename T>

関数テンプレートの定義
T add(T x, T y){
    return x+y;
}

# テンプレートクラス

定義
template<typename T>class クラス名

インスタンス生成
クラス名<型> インスタンス名

[*テンプレートクラスはヘッダファイルでの実装が推奨]

# inline修飾子

関数の先頭にこの修飾子が着くとコンパイル時にインライン展開される 
インライン展開ー＞処理の部分に直接埋め込まれるため処理速度が向上する 
ｚ
[*メリット]　
* マクロのように便利
* 頻繁に使える
[*デメリット]　
* 処理が長いとビルドされたソースコードが大きくなりすぎる

セッターとゲッターがinlineに向いている