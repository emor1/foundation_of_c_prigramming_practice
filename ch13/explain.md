# virtual
virtual修飾子がついている関数は、親クラスではなくサブクラスに実装されたメンバ関数が実行される

# 純粋仮想関数
メソッドだけ存在させて実装がないクラス 
virtual void 関数名()=0;

# 抽象クラス
仮想関数を1つでももつクラスのこと 
抽象クラスは**インスタンスを作ることができない**