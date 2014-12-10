= Android Studioのセットアップ

== Android Studioのインストール

=== ダウンロード

Android Studioをダウンロードします。
ブラウザから、次のURLにアクセスします。

@<href>{http://developer.android.com/sdk/index.html}

//image[download_android_studio1][Android Studio 1.0][scale=0.3]{
//}

緑色のボタン「Download Android Studio...」をクリックします。

//image[download_android_studio2][Android Studio 1.0][scale=0.3]{
//}

Android Studioをダウンロードするには、ライセンスに合意する必要があります（@<img>{download_android_studio2}）。

表示されるライセンスを読み、合意する場合は下のチェックボックスをクリックしてから「Download Android Studio...」のボタンをクリックします。

画面が切り替わり、Android Studioのパッケージがダウンロードされます。

ダウンロードするパッケージは、Mac版で約230MB、Windows版では約830MBと、非常に大きいため、
必ず、Wi-Fiなどの高速で安定した通信が確保できる状況で実行してください。

=====[column]ダウンロード後の表示は？
//image[download_android_studio3][Install Android Studio][scale=0.3]{
//}

ダウンロードの手続きは、使用しているブラウザによって異なります。

例えば、Internet Explorerの場合、ダウンロードの前に「実行」するか「保存」するか尋ねる画面が表示される場合があります（@<img>{download_android_studio3}下部）。

なお、お使いのPCにウイルス対策ソフトやセキュリティソフトをインストールしている場合は、それらが警告を表示したり、Android SDKのダウンロードや、ダウンロードしたファイルが実行できない場合があります。その場合、お使いのソフトウェアの設定を確認してください。

=====[/column]


=== インストール

==== Windowsの場合

ダウンロードしたパッケージは、実行可能な形式です。ダブルクリックで開くなどして実行すると、インストーラーが起動します。

//image[install-androidstudio0][インストーラーのアイコン][scale=0.5]{
//}

この際「ユーザーアカウント制御」が警告を出す場合がありますが、発行元がGoogleになっていることを確認した後
「はい」をクリックしてインストールを続行します。

//image[install-androidstudio1][ユーザーアカウント制御。発行元がGoogleであることを確認する][scale=0.5]{
//}

//image[install-androidstudio2][インストーラー][scale=0.5]{
//}

「Next」をクリックします。
なお、@<kw>{JDK, Java Development Kit}がインストールされていない場合、@<img>{install-androidstudio3}の画面が表示されます。

//image[install-androidstudio3][System Check][scale=0.5]{
//}

JDKをインストール済みで@<img>{install-androidstudio3}が表示された場合、JDKをインストールした場所を指定して「Next」をクリックします。

//image[install-androidstudio4][Choose Components][scale=0.5]{
//}

インストールするコンポーネントを選択する画面です。
「Next」をクリックします。

//image[install-androidstudio5][Configuration Settings][scale=0.5]{
//}

Android StudioとAndroid SDKをインストールする場所を設定します。
ここではなにも変更せず「Next」をクリックします。

//image[install-androidstudio6][Choose Start Menu Folder][scale=0.5]{
//}

スタートメニューの名前を設定します。

ここではなにも変更せず「Install」をクリックすると、Android Studioのインストール処理を開始します。

//image[install-androidstudio7][Installing][scale=0.5]{
//}

コンピュータの性能にも依りますが、インストールには10分から20分程度かかります。

//image[install-androidstudio8][Installation Complete][scale=0.5]{
//}

完了したら「Next」をクリックします。

//image[install-androidstudio9][Completing the Android Studio Setup][scale=0.5]{
//}

インストールが完了した画面です。「Finish」をクリックするとAndroid Studioが起動します。

==== Mac OS Xの場合

ダウンロードしたファイルは、DMG（ディスクイメージ）形式です。
ダブルクリックで開くと、インストールを促す画面が表示されるので、表示されているAndroid Studioのアイコンを、
ドラッグ＆ドロップで「アプリケーション」に移動します。

//indepimage[move-androidstudio][Android Studioをドラッグ＆ドロップで移動][scale=0.4]

== Android Studioの実行

Android Studioを実行します。

=== Windowsの場合

//indepimage[launch-androidstudio1-win][スタートメニューからAndroid Studioのアイコンをクリック][scale=0.45]

スタートメニューを表示して、左下の下矢印をクリックすると表示される「インストール済みの全てのアプリケーション」から
「Android Studio」のアイコンをクリックして実行します。

//image[launch-androidstudio2-win][起動時にコンポーネントをダウンロードする][scale=0.3]{
//}

Android Studioは、初回起動時にAndroidアプリ開発を始めるために必要なパッケージをダウンロードします。
接続している回線の速度にもよりますが、約10分から20分程度かかります。

この処理では非常に大きなパッケージをダウンロードするため、必ず、Wi-Fiなどの高速で安定した通信が確保できる状況で実行してください。

=== Mac OS Xの場合

アプリケーションにインストールした「Android Studio」をクリックして実行します。

//image[AndroidStudio-mac-launch][アプリケーション][scale=0.45]{
//}

//image[AndroidStudio-mac-security0][セキュリティ警告][scale=0.5]{
//}

@<img>{AndroidStudio-mac-security0}のダイアログが表示されて実行できない場合は、セキュリティの設定が必要です。

//image[AndroidStudio-mac-security1][アプリケーション][scale=0.45]{
//}

アプリケーション一覧から「システム設定（@<img>{AndroidStudio-mac-security1}右上）」をクリックします。

//image[AndroidStudio-mac-security2][Security & Privacy][scale=0.4]{
//}

左下の錠前のマーク@<icon>{AndroidStudio-mac-security_lock}をクリックします。

//image[AndroidStudio-mac-security3][パスワードの入力][scale=0.5]{
//}

ユーザーのパスワードを入力して「OK」をクリックします。

//image[AndroidStudio-mac-security4][Security & Privacy][scale=0.4]{
//}

「ダウンロードしたアプリケーションの実行許可」から「Mac App Storeと確認済みの開発元からのアプリケーションを許可」をクリックしてチェックを入れます。
設定を変更したら、もう一度、錠前のマーク@<icon>{AndroidStudio-mac-security_unlock}をクリックして、設定をロックします。

下に表示されている「"Android Studio"は開発元を確認できないため...」の右側の「このまま開く」をクリックします。

//image[AndroidStudio-mac-security5][セキュリティ確認][scale=0.5]{
//}

起動の確認が表示されるので「開く」をクリックします。

=== 設定の引き継ぎ

Android Studioを最初に起動するとき、既にあるAndroid Studioの設定を引き継ぐかの確認が表示されます。

//indepimage[launch-androidstudio2][Complete Installation][scale=0.5]

ここでは「I do not have...」が選択されていることを確認して「OK」をクリックします。

== Android SDKのセットアップ

Android Studioが起動すると、Android @<kw>{SDK, Software Development Kit}のセットアップウィザードが起動します。

//image[setup-androidstudio1][Setup Wizard - SDK Settings][scale=0.35]{
//}

「Finish」ボタンを押すと、Android SDKのパッケージのダウンロードとインストールを開始します。

=====[column] セットアップウィザードのキャンセル

@<img>{setup-androidstudio1}にある通り、セットアップウィザードでは、3GB以上と非常に大きなパッケージをダウンロードします。
必ず、Wi-Fiなどの高速で安定した通信が確保できる状況で実行してください。

今はセットアップしたくない人、既にAndroid SDKのセットアップを完了している人は、セットアップウィザードをキャンセルできます。

セットアップウィザードは、右上（Mac OS Xの場合は左上）の「閉じる」ボタンを押してキャンセルできます。

//image[setup-androidstudio0][次回もセットアップウィザードを起動するか確認するダイアログ][scale=0.45]{
//}

セットアップウィザードをキャンセルすると、@<img>{setup-androidstudio0}のダイアログが表示されます。
ここで"Re-run the setup wizard"を選択してOKを押すと、次回起動時にセットアップウィザードが起動します。

なお、既にAndroid SDKのセットアップを完了している人は、次の「Android SDKの場所を設定する」を参考に、
Android StudioにAndroid SDKの場所を設定してください。

=====[/column]

//image[setup-androidstudio3][Setup Wizard - Download Components][scale=0.40]{
//}

Android SDKのパッケージのダウンロードとインストールが完了し「Finish」のボタンを押すと、
Android Studioのセットアップは完了です。

引き続き「Android Studioではじめる 簡単Androidアプリ開発」のChapter 3 『Android Studioをセッティングしよう』を参照して、
アプリの開発環境を整えてください。

=== Android SDKの場所を設定する

「Android SDKのセットアップ」でセットアップウィザードをキャンセルした人は、キャンセル後にAndroid Studioの
スタートメニューが表示されます。

//indepimage[setup_sdk_path1][Configure][scale=0.35]

「Configure」をクリックします。

//indepimage[setup_sdk_path2][Project Default][scale=0.35]

「Project Default」をクリックします。

//indepimage[setup_sdk_path3][Project Structure][scale=0.35]

「Project Structure」をクリックします。

//indepimage[setup_sdk_path4][Project Structure][scale=0.3]

「Android SDK Location」に、SDKをインストールしたディレクトリ（フォルダー）のパスを入力し、入力が終わったら「OK」をクリックして設定を終了します。

また、既に値が入力されている場合は、そのまま「OK」をクリックして設定を終了します。

=====[column] Android SDKの場所

Windowsの場合、Android SDKはC:\Users\[ユーザー名]\AppData\Local\Android\android-sdkにインストールされます。

Mac OS Xの場合、/Users/[ユーザー名]/android-sdk-macosxにインストールされます。

=====[/column]
