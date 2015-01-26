= JDKのセットアップ

Android Studioをインストールする前に、@<kw>{JDK, Java Development Kit}をインストールする必要があります。

== Windowsの場合

=== ダウンロード

JDK 7のインストール用パッケージをダウンロードします。
ブラウザから、次のURLにアクセスします。

@<href>{http://www.oracle.com/technetwork/jp/java/javase/downloads/jdk7-downloads-1880260.html}

//image[win-jdk7-download1][Java SE Development Kit 7 Downloads][scale=0.35]{
//}

Javaのダウンロードページ（@<img>{win-jdk7-download1}）が表示されます。

JDKをダウンロードするには、License Agreement（利用許諾）に同意する必要があります。
"Oracle Binary Code License Agreement for Java SE"を読み、同意する場合は"Accept License Agreement"の左側の丸をクリックします（@<img>{win-jdk7-download2}）。

//image[win-jdk7-download2][Java SE Development Kit 7 Downloads][scale=0.35]{
//}

利用許諾に同意をしたら、右側のリンクをクリックして、お使いのプラットフォームにあったJDKを選択すると、インストールパッケージがダウンロードされます。

=====[column]32bit? 64bit?

JDKには、32bit対応と64bit対応のバージョンが用意されています。

本文書では64bit版をインストールしますが、お使いのPCによって32bit版が必要になる場合があります。
もし、64bit版のJDKがインストールできない場合は、32bit版をインストールしてください。

=====[/column]

=====[column]ダウンロード後の表示は？
//image[win-jdk7-download3][Internet Explorerのダウンロード][scale=0.45]{
//}

ダウンロードの手続きは、使用しているブラウザによって異なります。

例えば、Internet Explorerの場合、ダウンロードの前に「実行」するか「保存」するか尋ねる画面が表示される場合があります（@<img>{win-jdk7-download3}下部）。

なお、お使いのPCにウイルス対策ソフトやセキュリティソフトをインストールしている場合は、それらが警告を表示したり、JDKのダウンロードや、ダウンロードしたファイルが実行できない場合があります。その場合、お使いのソフトウェアの設定を確認してください。

=====[/column]

=== インストール

JDKをインストールします。

ダウンロードしたインストールパッケージをダブルクリックするなどして実行します。

//image[win-jdk7-install1][起動確認][scale=0.5]{
//}

インストーラーの起動確認が表示されるので、発行元が"Oracle America, Inc."になっていることを確認してから「はい(Y)」をクリックします。

//image[win-jdk7-install2][JDKセットアップ][scale=0.5]{
//}

JDKのインストーラーが起動します。

「次(N) >」をクリックします。

//image[win-jdk7-install3-4][JDKセットアップ][scale=0.45]{
//}

インストールするパッケージの選択と、インストール先のディレクトリを設定します。

インストールパッケージのうち、「ソースコード」は対象から外しても問題ありません。

インストール先のディレクトリは、あとで環境変数を設定するときに必要になるので、必ずメモをしておいてください。

「次(N) >」をクリックすると、JDKのインストールがはじまります（@<img>{win-jdk7-install5}）。

JDKのインストールが終わると、続いてJava実行環境@<kw>{JRE, Java Runtime Environment}をインストールします。

//image[win-jdk7-install5][JREセットアップ][scale=0.6]{
//}

「次 >」をクリックするとインストールがはじまります。

//image[win-jdk7-install6-7][JREセットアップ][scale=0.45]{
//}

「閉じる(C)」をクリックして、インストーラーを終了します。

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

上部のユーザー環境設定の「新規」をクリックします。

//image[win-add-env4][][scale=0.5]{
//}

変数名にJAVA_HOME。
変数値に、JDKをインストールしたディレクトリ@<fn>{jdk_path}を設定します。

//footnote[jdk_path][JDKは、標準でC:\Program Files\Java\jdk1.7.0_75\にインストールされます]

入力を終えたら「OK」をクリックし、これまでのウィンドウを全て閉じていきます。

以上で、JDKのセットアップは完了です。

== Mac OS Xの場合

Mac OS Xの場合、"JDK"に加えて"Java for OS X"の両方をインストールする必要があります@<fn>{jdk_java_for_os_x}。

//footnote[jdk_java_for_os_x][Android Studio 1.1では、JDKのみのインストールになるとアナウンスされています。 @<href>{https://code.google.com/p/android/issues/detail?id=82378}]

=== Java for OS Xのダウンロード

Java for OS Xのインストール用パッケージをダウンロードします。
ブラウザから、次のURLにアクセスします。

@<href>{http://support.apple.com/kb/DL1572}

//image[download-java-mac][][scale=0.2]{
//}

ダウンロードのボタンをクリックすると、インストールパッケージがダウンロードされます。

=== Java for OS Xのインストール

Java for OS Xをインストールします。
インストールパッケージを、ダブルクリックするなどして開きます。

//image[mac-jdk6-install1][][scale=0.45]{
//}

JavaForOSX.pkgをダブルクリックして実行します。

//image[mac-jdk6-install2][][scale=0.5]{
//}

「続ける」をクリックします。

//image[mac-jdk6-install3][][scale=0.5]{
//}

「続ける」をクリックします。

//image[mac-jdk6-install4-5][][scale=0.3]{
//}

Java for OS Xをインストールするには、ソフトウェア使用許諾書の条件に同意する必要があります。

表示される条件を読み、「続ける」をクリックします。

同意についてもう一度確認が表示される場合は、あらためて「同意する」をクリックします。

//image[mac-jdk6-install6][][scale=0.5]{
//}

「インストール」をクリックします。

//image[mac-jdk6-install7][][scale=0.5]{
//}

パスワードを入力して「OK」をクリックすると、インストール処理を開始します。

//image[mac-jdk6-install8-9][][scale=0.3]{
//}

以上で、Java for OS Xのセットアップは完了です。引き続き、JDKのインストールを行います。

=== JDKのダウンロード

JDK 7のインストール用パッケージをダウンロードします。
ブラウザから、次のURLにアクセスします。

@<href>{http://www.oracle.com/technetwork/jp/java/javase/downloads/jdk7-downloads-1880260.html}

//image[mac-jdk7-download1][Java SE Development Kit 7 Downloads][scale=0.3]{
//}

Javaのダウンロードページ（@<img>{mac-jdk7-download1}）が表示されます。

JDKをダウンロードするには、License Agreement（利用許諾）に同意する必要があります。
"Oracle Binary Code License Agreement for Java SE"を読み、同意する場合は"Accept License Agreement"の左側の丸をクリックします。

//image[mac-jdk7-download2][Java SE Development Kit 7 Downloads][scale=0.3]{
//}

利用許諾に同意をしたら、右側のリンクをクリックして、"Mac OS X x64"の右側のリンクを選択すると、インストールパッケージがダウンロードされます。

=== JDKのインストール

JDKをインストールします。

ダウンロードしたインストールパッケージをダブルクリックするなどして実行すると、JDKのインストーラーが表示されます。

//image[mac-jdk7-install1][起動確認][scale=0.5]{
//}

表示された"JDK 7 Update 75.pkg"をダブルクリックするなどして実行すると、インストーラーが起動します。

//image[mac-jdk7-install2][はじめに][scale=0.45]{
//}

「続ける」をクリックします。

//image[mac-jdk7-install3][JDKセットアップ][scale=0.45]{
//}

「インストール」をクリックします。

//image[mac-jdk7-install4][JDKセットアップ][scale=0.45]{
//}

パスワードを入力して「ソフトウェアをインストール」をクリックすると、インストール処理を開始します。

//image[mac-jdk7-install5-6][JDKセットアップ][scale=0.3]{
//}

インストールが終わると、「閉じる」をクリックしてインストーラーを終了します。

以上で、JDKのセットアップは完了です。
