= Android Studioのセットアップ

== Android SDKのインストール

=== ダウンロード

Android SDKのインストール用パッケージをダウンロードします。

次のURLをブラウザで開きます。

@<href>{https://developer.android.com/sdk/index.html?hl=i}

//image[download_sdk1][Get the Android SDK][scale=0.3]{
//}

画面下部の「GET THE SDK FOR AN EXISTING IDE」をクリックすると、SDKだけのパッケージをダウンロードするボタンが表示されるので、
「Download the stand-alone Android SDK Tools...」のボタン（@<img>{download_sdk1}）をクリックします。

//image[download_sdk2][Get the Android SDK][scale=0.3]{
//}

Android SDKをダウンロードするには、ライセンスに合意する必要があります（@<img>{download_sdk2}）。

表示されるライセンスを読み、合意する場合は下のチェックボックスをクリックしてから「Download Android Studio Beta...」のボタンをクリックします。

画面が切り替わり、Android Studioのパッケージがダウンロードされます。

=====[column]ダウンロード後の表示は？

//image[download_sdk3][Installing the Stand-slone SDK Tools][scale=0.3]{
//}

ダウンロードの手続きは、使用しているブラウザによって異なります。

例えば、Internet Explorerの場合、ダウンロードの前に「実行」するか「保存」するか尋ねる画面が表示される場合があります（@<img>{download_sdk3}下部）。

なお、お使いのPCにウイルス対策ソフトやセキュリティソフトをインストールしている場合は、それらが警告を表示したり、Android SDKのダウンロードや、ダウンロードしたファイルが実行できない場合があります。その場合、お使いのソフトウェアの設定を確認してください。

=====[/column]

=== インストール

Android SDK Toolsをインストールします。

==== Windowsの場合

ダウンロードしたパッケージをダブルクリックするなどして開くと、インストーラーが起動します。

//indepimage[install_sdk1][Android SDK Tools Setup][scale=0.5]

「Next >」をクリックします。

//indepimage[install_sdk2][Android SDK Tools Setup][scale=0.5]

使用するJDKを確認する画面です。
表示されたJDKのパスが正しければ「Next >」をクリックします。

//indepimage[install_sdk3][Android SDK Tools Setup][scale=0.5]

Android SDKを利用するユーザーを選択します。
「Install just for me」にチェックが入っていることを確認して、「Next >」をクリックします。

//indepimage[install_sdk4][Android SDK Tools Setup][scale=0.5]

Android SDKをインストールする場所を指定します。

標準では、 C:\Users\[ユーザー名]\AppData\Local\Android\android-sdk にインストールされます。

ここで指定するインストール場所は、あとで必要になるので、必ずコピーするなどしてください。

「Next >」をクリックすると、インストール処理が始まります。

//indepimage[install_sdk6][Android SDK Tools Setup][scale=0.5]

インストールが終了したら「Next >」をクリックします。

//indepimage[install_sdk7][Android SDK Tools Setup][scale=0.5]

「Finish」を押してインストーラーを終了します。

インストールが終了すると、SDK Managerが起動しますが、SDK Managerの設定は後ほどAndroid Studioから行う@<fn>{sdk_manager}ため、ここではそのまま終了します。

//footnote[sdk_manager][SDK Managerを使ったパッケージのダウンロードについては本文書では解説しません]

==== Mac OS Xの場合

ダウンロードしたパッケージは、ZIP形式で圧縮されています。

//indepimage[install_sdk_mac1][ZIP形式の圧縮ファイル][scale=0.25]

ダブルクリックで開くなどして、圧縮ファイルを展開します。

ここからは、Android SDKをユーザーのホームディレクトリ「/Users/[ユーザー名]/」に展開したものとして説明します。


== Android Studioのインストール

=== ダウンロード

Android Studioをダウンロードします。
ブラウザから、次のURLにアクセスします。

@<href>{https://developer.android.com/sdk/installing/studio.html}

//image[download_android_studio1][Android Studio BETA][scale=0.3]{
//}

画面右側の「Download Android Studio Beta ...」をクリックします。

//image[download_android_studio2][Android Studio BETA][scale=0.3]{
//}

Android Studioをダウンロードするには、ライセンスに合意する必要があります（@<img>{download_android_studio2}）。

表示されるライセンスを読み、合意する場合は下のチェックボックスをクリックしてから「Download Android Studio Beta...」のボタンをクリックします。

画面が切り替わり、Android Studioのパッケージがダウンロードされます。

=== 展開（インストール）

==== Windowsの場合

//indepimage[extract_android_studio][右クリックから「すべて展開」][scale=0.3]

ダウンロードしたパッケージは、ZIP形式で圧縮されています。
右クリックで表示されるメニューから「全て展開」を選択して、圧縮ファイルを展開します。

==== Mac OS Xの場合

ダウンロードしたパッケージは、ZIP形式で圧縮されています。
ダブルクリックで開くなどして、圧縮ファイルを展開します。

//indepimage[move_android_studio][Android Studioをドラッグ＆ドロップで移動][scale=0.4]

展開後のAndroid Studioを、ドラッグ＆ドロップで「アプリケーション」に移動します。

== Android Studioの実行

Android Studioを実行します。

=== Windowsの場合

//indepimage[AndroidStudio-win-launch1][android-studio\bin\studio64.exeを実行][scale=0.25]

Android Studioを展開したフォルダーの「android-studio\bin\studio64.exe」を、ダブルクリックするなどして実行します。

=====[column]32bitと64bit

Android Studioには、32bit対応と64bit対応のバージョンが用意されています。

32bit版はstudio.exe、64bit版はstudio64.exeで実行します。

本文書では64bit版を使用しますが、お使いのPCによって32bit版が必要になる場合があります。
もし、64bit版のAndroid Studioが実行できない場合は、32bit版を使用してください。

=====[/column]

=== Mac OS Xの場合

アプリケーションにインストールした「Android Studio」をクリックして実行します。

//image[AndroidStudio-mac-launch][アプリケーション][scale=0.35]{
//}

//image[AndroidStudio-mac-security0][セキュリティ警告][scale=0.5]{
//}

@<img>{AndroidStudio-mac-security0}のダイアログが表示されて実行できない場合は、セキュリティの設定が必要です。

//image[AndroidStudio-mac-security1][アプリケーション][scale=0.35]{
//}

アプリケーション一覧から「システム設定（@<img>{AndroidStudio-mac-security1}右上）」をクリックします。

//image[AndroidStudio-mac-security2][Security & Privacy][scale=0.5]{
//}

左下の錠前のマーク@<icon>{AndroidStudio-mac-security_lock}をクリックします。

//image[AndroidStudio-mac-security3][パスワードの入力][scale=0.5]{
//}

ユーザーのパスワードを入力して「OK」をクリックします。

//image[AndroidStudio-mac-security4][Security & Privacy][scale=0.5]{
//}

「ダウンロードしたアプリケーションの実行許可」から「Mac App Storeと確認済みの開発元からのアプリケーションを許可」をクリックしてチェックを入れます。
設定を変更したら、もう一度、錠前のマーク@<icon>{AndroidStudio-mac-security_unlock}をクリックして、設定をロックします。

下に表示されている「"Android Studio"は開発元を確認できないため...」の右側の「このまま開く」をクリックします。

//image[AndroidStudio-mac-security5][セキュリティ確認][scale=0.5]{
//}

起動の確認が表示されるので「開く」をクリックします。

=== 設定の引き継ぎ

Android Studioを最初に起動するとき、既にあるAndroid Studioの設定を引き継ぐかの確認が表示されます。

//indepimage[AndroidStudio_launch0][Complete Installation][scale=0.5]

ここでは「I do not have...」が選択されていることを確認して「OK」をクリックします。

== Android Studioのセットアップ

Android Studioを使用する前に、セットアップを行います。

=== Android SDKの場所を設定する

Android Studioを起動したスタートメニューから「Configure」をクリックします。

//indepimage[setup_sdk_path1][Configure][scale=0.5]

//indepimage[setup_sdk_path2][Project Default][scale=0.5]

「Project Default」をクリックします。

//indepimage[setup_sdk_path3][Project Structure][scale=0.5]

「Project Structure」をクリックします。

//indepimage[setup_sdk_path4][Project Structure][scale=0.3]

「Android SDK Location」に、SDKをインストールしたディレクトリ（フォルダー）のパスを入力し、入力が終わったら「OK」をクリックして設定を終了します。

また、既に値が入力されている場合は、そのまま「OK」をクリックして設定を終了します。

=====[column] Android SDKの場所

Windowsの場合、C:\Users\[ユーザー名]\AppData\Local\Android\android-sdkにインストールされています。

Mac OS Xの場合、本文書では/Users/keiji_ariyama/android-sdk-macosxにインストールしています。

=====[/column]

以上で、Android Studioのセットアップは完了です。

引き続き「Android Studioではじめる 簡単Androidアプリ開発」のChapter 3 『Android Studioをセッティングしよう』を参照して、
アプリの開発環境を整えてください。
