= JDKのセットアップ

Android Studioをインストールする前に、@<kw>{JDK, Java Development Kit}をインストールする必要があります。

== Windowsの場合

=== ダウンロード

JDKのインストール用パッケージをダウンロードします。
ブラウザから、次のURLにアクセスします。

@<href>{http://www.oracle.com/technetwork/java/javase/downloads/index.html}

//image[JDK_download1][Java SE Downloads][scale=0.3]{
//}

Javaのダウンロードページ（@<img>{JDK_download1}）が表示されます。

右側にあるJDKのボタンをクリックすると、JDKのダウンロード画面が表示されます。

//image[JDK_download2][Java SE Development Kit 8 Downloads][scale=0.3]{
//}

JDKをダウンロードするには、License Agreement（利用許諾）に同意する必要があります。
"Oracle Binary Code License Agreement for Java SE"を読み、同意する場合は"Accept License Agreement"の左側の丸をクリックします。

利用許諾に同意をしたら、右側のリンクをクリックして、お使いのプラットフォームにあったJDKを選択すると、インストールパッケージがダウンロードされます。

=====[column]32bit? 64bit?

JDKには、32bit対応と64bit対応のバージョンが用意されています。

本文書では64bit版をインストールしますが、お使いのPCによって32bit版が必要になる場合があります。
もし、64bit版のJDKがインストールできない場合は、32bit版をインストールしてください。

=====[/column]

=====[column]ダウンロード後の表示は？
//image[JDK_download3][Internet Explorerのダウンロード][scale=0.3]{
//}

ダウンロードの手続きは、使用しているブラウザによって異なります。

例えば、Internet Explorerの場合、ダウンロードの前に「実行」するか「保存」するか尋ねる画面が表示される場合があります（@<img>{JDK_download3}下部）。

なお、お使いのPCにウイルス対策ソフトやセキュリティソフトをインストールしている場合は、それらが警告を表示したり、JDKのダウンロードや、ダウンロードしたファイルが実行できない場合があります。その場合、お使いのソフトウェアの設定を確認してください。

=====[/column]

=== インストール

JDKをインストールします。

ダウンロードしたインストールパッケージをダブルクリックするなどして実行します。

//image[JDK_install0][起動確認][scale=0.5]{
//}

インストーラーの起動確認が表示されるので「はい(Y)」をクリックします。

//image[JDK_install1][JDKセットアップ][scale=0.5]{
//}

JDKのインストーラーが起動します。

「次(N) >」をクリックします。

//image[JDK_install2][JDKセットアップ][scale=0.5]{
//}

インストールするパッケージの選択と、インストール先のディレクトリを設定します。

インストールパッケージのうち、「ソースコード」は対象から外しても問題ありません。

インストール先のディレクトリは、あとで環境変数を設定するときに必要になるので、必ずメモをしておいてください。

「次(N) >」をクリックすると、JDKのインストールがはじまります。

//image[JDK_install4][JDKセットアップ][scale=0.5]{
//}

JDKのインストールが終わると、続いてJava実行環境@<kw>{JRE, Java Runtime Environment}をインストールします。

「次 >」をクリックするとインストールがはじまります。

//image[JDK_install5][JDKセットアップ][scale=0.5]{
//}

「閉じる(C)」をクリックして、インストーラーを終了します。

=== 環境変数の追加

引き続き、環境変数JAVA_HOMEを設定します。
これはAndroid Studioに、どこにJDKをインストールしたのかを伝える作業です。

//image[JDK_add_env1][][scale=0.35]{
//}

デスクトップ左下のスタートメニューで右クリックをして表示されるメニューから「コントロールパネル」を選択します。

//image[JDK_add_env2][][scale=0.3]{
//}

「システム」をクリックします。

//image[JDK_add_env3][][scale=0.3]{
//}

左側のメニューからシステムの詳細設定をクリックします。

//image[JDK_add_env4][][scale=0.5]{
//}

「詳細設定」タブを選択して、「環境変数」をクリックします。

//image[JDK_add_env5][][scale=0.5]{
//}

上部のユーザー環境設定の「新規」をクリックします。

//image[JDK_add_env6][][scale=0.5]{
//}

変数名にJAVA_HOME。
変数値に、JDKをインストールしたディレクトリ@<fn>{jdk_path}を設定します。

//footnote[jdk_path][JDKは、標準でC:\Program Files\Java\jdk1.8.0_25\にインストールされます]

入力を終えたら「OK」をクリックし、これまでのウィンドウを全て閉じていきます。

以上で、JDKのセットアップは完了です。

== Mac OS Xの場合

=== ダウンロード

Java for OS Xのインストール用パッケージをダウンロードします。
ブラウザから、次のURLにアクセスします。

@<href>{http://support.apple.com/kb/DL1572}

//image[download_java_mac][][scale=0.2]{
//}

ダウンロードのボタンをクリックすると、インストールパッケージがダウンロードされます。

=== インストール

Java for OS Xをインストールします。
インストールパッケージを、ダブルクリックするなどして開きます。

//image[install_java_mac1][][scale=0.5]{
//}

JavaForOSX.pkgをダブルクリックして実行します。

//image[install_java_mac2][][scale=0.5]{
//}

「続ける」をクリックします。

//image[install_java_mac3][][scale=0.5]{
//}

「続ける」をクリックします。

//image[install_java_mac4][][scale=0.5]{
//}

Java for OS Xをインストールするには、ソフトウェア使用許諾書の条件に同意する必要があります。

表示される条件を読み、「続ける」をクリックします。

同意についてもう一度確認が表示される場合は、あらためて「同意する」をクリックします。

//image[install_java_mac5][][scale=0.5]{
//}

「インストール」をクリックします。

//image[install_java_mac6][][scale=0.5]{
//}

パスワードを入力して「OK」をクリックすると、インストール処理を開始します。

//image[install_java_mac7][][scale=0.5]{
//}

以上で、Java for OS Xのセットアップは完了です。
