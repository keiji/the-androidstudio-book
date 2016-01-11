= JDKのセットアップ

Android Studioをインストールする前に、@<kw>{JDK, Java Development Kit}をインストールする必要があります。

== Windowsの場合

=== ダウンロード

JDK 8のインストール用パッケージをダウンロードします。
ブラウザから、次のURLにアクセスします。

@<href>{http://www.oracle.com/technetwork/java/javase/downloads/index.html}

//image[win-jdk8-download1][Java SE Development Kit 8 Downloads][scale=0.35]{
//}

JDKのダウンロードページ（@<img>{win-jdk8-download1}）が表示されます。

JDKをダウンロードするにはLicense Agreement（利用許諾）に同意する必要があります。
"Oracle Binary Code License Agreement for Java SE"を読み、同意する場合は"Accept License Agreement"の左側の丸をクリックします（@<img>{win-jdk8-download2}）。

利用許諾に同意をしたら、右側のリンクをクリックして、お使いのプラットフォームにあったJDKを選択すると、インストールパッケージがダウンロードされます。

=====[column]32bit? 64bit?

JDKには、32bit対応と64bit対応のバージョンが用意されています。

本文書では64bit版をインストールしますが、お使いのPCによって32bit版が必要になる場合があります。
もし、64bit版のJDKがインストールできない場合は、32bit版をインストールしてください。

=====[/column]

=====[column]ダウンロード後の表示は？
//image[win-jdk8-download2][Microsoft Edgeを使ったダウンロード][scale=0.35]{
//}

ダウンロードの手続きは、使用しているブラウザによって異なります。
例えばMicrosoft Edgeの場合、ダウンロードの前に「実行」するか「保存」するか尋ねる画面が表示される場合があります（@<img>{win-jdk8-download2}下部）。

なお、お使いのPCにウイルス対策ソフトやセキュリティソフトをインストールしている場合は、それらが警告を表示したり、JDKのダウンロードや、ダウンロードしたファイルが実行できない場合があります。その場合、お使いのソフトウェアの設定を確認してください。

=====[/column]

=== インストール

JDKをインストールします。
ダウンロードしたインストールパッケージをダブルクリックするなどして実行します。

//image[win-jdk8-install1][起動確認][scale=0.5]{
//}

インストーラーの起動確認が表示されるので、発行元が"Oracle America, Inc."になっていることを確認してから「はい(Y)」をクリックします。

//image[win-jdk8-install2][JDKセットアップ][scale=0.5]{
//}

JDKのインストーラーが起動します。

「次(N) >」をクリックします。

//image[win-jdk8-install3][JDKセットアップ][scale=0.45]{
//}

インストールするパッケージの選択と、インストール先のディレクトリを設定します。
インストールパッケージのうち、「ソース・コード」は対象から外しても問題ありません。
インストール先のディレクトリは、あとで環境変数を設定するときに必要になるので、必ずメモをしておいてください。

「次(N) >」をクリックすると、JDKのインストールがはじまります（@<img>{win-jdk8-install4-5}）。

//image[win-jdk8-install4-5][JREセットアップ][scale=0.35]{
//}

JDKのインストールが終わると、続いてJava実行環境@<kw>{JRE, Java Runtime Environment}をインストールします。

//image[win-jdk8-install6-7][JREセットアップ][scale=0.35]{
//}

「次 >」をクリックするとインストールがはじまります。
完了したら「閉じる(C)」をクリックして、インストーラーを終了します。

=== 環境変数の追加

引き続き、環境変数JAVA_HOMEを設定します。
これはAndroid Studioに、どこにJDKをインストールしたのかを伝える作業です。

//image[win-add-env0][][scale=0.5]{
//}

デスクトップ左下のスタートメニューで右クリックをして表示されるメニューから「システム」を選択します。

//image[win-add-env1][][scale=0.35]{
//}

左側のメニューから「システムの詳細設定」をクリックします。

//image[win-add-env2][][scale=0.5]{
//}

「詳細設定」タブの「環境変数」をクリックします。

//image[win-add-env3][][scale=0.5]{
//}

上部のユーザー環境変数の「新規」をクリックします。

//image[win-add-env4][][scale=0.5]{
//}

変数名にJAVA_HOME。
変数値に、JDKをインストールしたディレクトリ@<fn>{jdk_path}を設定します。

//footnote[jdk_path][JDKは、標準でC:\Program Files\Java\jdk1.8.0_60\にインストールされます]

入力を終えたら「OK」をクリックし、これまでのウィンドウを全て閉じていきます。

以上で、JDKのセットアップは完了です。

== Mac OS Xの場合

=== JDKのダウンロード

JDK 8のインストール用パッケージをダウンロードします。
ブラウザから、次のURLにアクセスします。

@<href>{http://www.oracle.com/technetwork/java/javase/downloads/index.html}

//image[mac-jdk8-download1][Java SE Development Kit 8 Downloads][scale=0.3]{
//}

JDKのダウンロードページが表示されます。

JDKをダウンロードするにはLicense Agreement（利用許諾）に同意する必要があります。
"Oracle Binary Code License Agreement for Java SE"を読み、同意する場合は"Accept License Agreement"の左側の丸をクリックします。

//image[mac-jdk8-download2][Java SE Development Kit 8 Downloads][scale=0.3]{
//}

利用許諾に同意をしたら、右側のリンクをクリックして、"Mac OS X x64"の右側のリンクを選択すると、インストールパッケージがダウンロードされます。

=== JDKのインストール

JDKをインストールします。
ダウンロードしたインストールパッケージをダブルクリックするなどして実行すると、JDKのインストーラーが表示されます。

//image[mac-jdk8-install1][起動確認][scale=0.5]{
//}

表示された"JDK 8 Update 60.pkg"をダブルクリックするなどして実行すると、インストーラーが起動します。

//image[mac-jdk8-install2][はじめに][scale=0.45]{
//}

「続ける」をクリックします。

//image[mac-jdk8-install3][JDKセットアップ][scale=0.45]{
//}

「インストール」をクリックします。

//image[mac-jdk8-install4][JDKセットアップ][scale=0.45]{
//}

パスワードを入力して「ソフトウェアをインストール」をクリックすると、インストール処理を開始します。

//image[mac-jdk8-install5][JDKセットアップ][scale=0.3]{
//}

インストールが終わると、「閉じる」をクリックしてインストーラーを終了します。

以上で、JDKのセットアップは完了です。
