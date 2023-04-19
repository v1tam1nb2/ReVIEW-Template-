= 章のキャプション

===[column] コンパイラコンパイラ

コラムの内容

===[/column]

 * 第1の項目
 ** 第1の項目のネスト
 * 第2の項目
 ** 第2の項目のネスト
 * 第3の項目

 1. 第1の条件
 2. 第2の条件
 3. 第3の条件

 : Alpha
    DEC の作っていた RISC CPU。
    浮動小数点数演算が速い。
 : POWER
    IBM とモトローラが共同製作した RISC CPU。
    派生として POWER PC がある。
 : SPARC
    Sun が作っている RISC CPU。
    CPU 数を増やすのが得意。

== 節のキャプション

//list[main][main()][c]{
int
main(int argc, char **argv)
{
    puts("OK");
    return 0;
}
//}

@<code>{p = obj.ref_cnt}

//cmd{
$ @<b>{ls /}
//}
=== 項のキャプション

//table[envvars][重要な環境変数]{
名前            意味
-------------------------------------------------------------
PATH            コマンドの存在するディレクトリ
TERM            使っている端末の種類。linux・kterm・vt100など
LANG            ユーザのデフォルトロケール。日本語ならja_JP.eucJPやja_JP.utf8
LOGNAME         ユーザのログイン名
TEMP            一時ファイルを置くディレクトリ。/tmpなど
PAGER           manなどで起動するテキスト閲覧プログラム。lessなど
EDITOR          デフォルトエディタ。viやemacsなど
MANPATH         manのソースを置いているディレクトリ
DISPLAY         X Window Systemのデフォルトディスプレイ
//}

==== 目のキャプショ

//quote{
百聞は一見に如かず。
//}

//centering{
これは

中央合わせ
//}

//flushright{
これは

右寄せ合わせ
//}

===== 段のキャプション


パッケージは本書のサポートサイトから入手できます@<fn>{site}。

各自ダウンロードしてインストールしておいてください。@<br>{}
ダウンロード@<fn>{test}

//footnote[site][本書のサポートサイト： http://i.loveruby.net/ja/stdcompiler ]

//footnote[test][テスト： http://localhost ]

====== 小段のキャプション

//texequation{
\sum_{i=1}^nf_n(x)
//}