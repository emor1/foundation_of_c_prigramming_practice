# STLとは（Standard Template Library)

## Vector
動的配列（サイズを意識せずに使える配列） 
メモリを勝手に確保してくれる 


push_back(DATA): 配列にデータを挿入 
clear():要素のクリア 
size():配列の大きさ取得 
capacity():動的配列に追加できる要素の許容量 
empty():要素が空かどうか調べる 

## list

vectorのように動的配列だが、任意の位置にデータを挿入できる

### イテレーター

listの要素にアクセスする1種のポインタ 
宣言 
list<型>::iterator itr; 
場所を宣言 
イテレーター=リスト名.begin() 
