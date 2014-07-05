# libTest

## 内容

https://sites.google.com/site/programmirovanienotes/home/wxwidgets_autotools
ここを参考にshared libraryの作り方を勉強したいと思います。

現状とりあえず、作業をすすめると.libsの中にプログラムが生成される形になってます。

## 作り方

$ autoreconf

$ libtoolize --copy

$ automake -a -c

$ touch NEWS README AUTHORS ChangeLog

$ autoreconf

ここまでで準備完了

$ ./configure

$ make

ここまででコンパイル完了

.libsの中にいろいろとできてたらOK
