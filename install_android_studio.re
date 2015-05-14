= Android Studioのセットアップ

== Android Studioのインストール

=== ダウンロード

Android Studioをダウンロードします。
ブラウザから、次のURLにアクセスします。

@<href>{http://developer.android.com/sdk/index.html}

//image[download_android_studio1][Android Studio 1.2][scale=0.3]{
//}

緑色のボタン「Download Android Studio...」をクリックします。

//image[download_android_studio2][Android Studio 1.2][scale=0.3]{
//}

Android Studioをダウンロードするには、ライセンスに合意する必要があります（@<img>{download_android_studio2}）。

表示されるライセンスを読み、合意する場合は下のチェックボックスをクリックしてから「Download Android Studio...」のボタンをクリックします。

画面が切り替わり、Android Studioのパッケージがダウンロードされます。

ダウンロードするパッケージは、Mac版で約260MB、Windows版では約840MBと、非常に大きいため、
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

ダウンロードしたパッケージは、実行可能な形式です@<fn>{win-filename}。ダブルクリックで開くなどして実行すると、インストーラーが起動します。

//footnote[win-filename][ダウンロードする時期によってファイル名は異なる場合があります]

//image[win-androidstudio-install0][インストーラーの起動][scale=0.35]{
//}

この際「ユーザーアカウント制御」が警告を出す場合がありますが、発行元がGoogleになっていることを確認した後
「はい」をクリックしてインストールを続行します。

//image[win-androidstudio-install1][ユーザーアカウント制御。発行元がGoogleであることを確認する][scale=0.75]{
//}

//image[win-androidstudio-install2][インストーラー][scale=0.75]{
//}

「Next」をクリックします。
なお、@<kw>{JDK, Java Development Kit}がインストールされていない場合、@<img>{win-androidstudio-install3-no-jdk}の画面が表示されます。

//image[win-androidstudio-install3-no-jdk][System Check][scale=0.75]{
//}

JDKをインストール済みで@<img>{win-androidstudio-install3-no-jdk}が表示された場合、JDKをインストールした場所を指定して「Next」をクリックします。

//image[win-androidstudio-install3-with-haxm][Choose Components][scale=0.5]{
//}

インストールするコンポーネントを選択する画面です。
使用しているPCによって表示されるコンポーネントが異なります。PCがIntel HAXM@<fn>{about_haxm}に対応している場合は、
"Performance"のコンポーネントが表示されます（@<img>{win-androidstudio-install3-with-haxm}右）。

標準の選択のまま「Next」をクリックします。

//footnote[about_haxm][@<kw>{HAXM, Hardware Accelerated Execution Manager}: HAXMを使うと、高速にエミュレーターを動作させるIntelイメージを使ってアプリケーションを開発できる。]

//image[win-androidstudio-install4][Lisence Agreement][scale=0.75]{
//}

Android Studioをインストールするにはライセンス規約への合意が必要です。表示される規約を読んで、合意する場合は「I Agree」をクリックします。

//image[win-androidstudio-install5-haxm][Lisence Agreement][scale=0.75]{
//}

インストールするコンポーネントで"Performance"を選択した場合に表示されます。

Intel HAXMをインストールするには、ライセンス規約への合意が必要です。表示される規約を読んで、合意する場合は「I Agree」をクリックします。

//image[win-androidstudio-install6][Install Locations][scale=0.75]{
//}

Android StudioとAndroid SDKをインストールする場所を設定します。
ここではなにも変更せず「Next」をクリックします。

//image[win-androidstudio-install7-haxm][Emulator Setup][scale=0.75]{
//}

インストールするコンポーネントで"Performance"を選択した場合に表示されます。

Intel HAXMを利用する場合に割り当てるメモリの量を設定します。ここではなにも変更せず「Next」をクリックします。

//image[win-androidstudio-install8][Choose Start Menu Folder][scale=0.75]{
//}

スタートメニューの名前を設定します。

「Install」をクリックすると、Android Studioのインストールを開始します。
コンピュータの性能にも依りますが、インストールには10分から20分程度かかります。

//image[win-androidstudio-install9-10][Android Studioのインストール][scale=0.5]{
//}

完了したら「Next」をクリックします。

//image[win-androidstudio-install11][Completing the Android Studio Setup][scale=0.75]{
//}

インストールが完了した画面です。「Finish」をクリックするとAndroid Studioが起動します。

==== Mac OS Xの場合

ダウンロードしたファイルは、DMG（ディスクイメージ）形式です@<fn>{mac-filename}。
ダブルクリックで開くと、インストールを促す画面が表示されるので、表示されているAndroid Studioのアイコンを、
ドラッグ＆ドロップで「アプリケーション」に移動します。

//footnote[mac-filename][ダウンロードする時期によってファイル名は異なる場合があります]

//indepimage[move-androidstudio][Android Studioをドラッグ＆ドロップで移動][scale=0.4]

== Android Studioの実行

Android Studioを実行します。

=== Windowsの場合

//indepimage[launch-androidstudio1-win][スタートメニューからAndroid Studioのアイコンをクリック][scale=0.45]

スタートメニューを表示して、左下の下矢印をクリックすると表示される「インストール済みの全てのアプリケーション」から
「Android Studio」のアイコンをクリックして実行します。

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

//indepimage[launch-androidstudio2][Complete Installation][scale=0.5]

ここでは「I do not have...」が選択されていることを確認して「OK」をクリックします。

== Android SDKのセットアップ

=== Windowsの場合

//image[setup-androidstudio0-5][テーマの選択][scale=0.4]{
//}

Android Studioのテーマ（見た目）を選択します。標準はIntelliJです。必要に応じて変更してください。

//image[setup-androidstudio1-2][起動時にコンポーネントをダウンロードする][scale=0.25]{
//}

Android Studioは、初回起動時にAndroidアプリ開発を始めるために必要なパッケージをダウンロードします。
接続している回線の速度にもよりますが、約10分から20分程度かかります。

この処理では非常に大きなパッケージをダウンロードするため、必ず、Wi-Fiなどの高速で安定した通信が確保できる状況で実行してください。


=== Mac OS Xの場合

Android Studioは最初に起動すると、セットアップウィザードを表示します。

//image[mac-androidstudio-setup2][Welcome][scale=0.3]{
//}

「Next」ボタンを押すと、セットアップを開始します。

なお、@<kw>{JDK, Java Development Kit}がインストールされていない場合、@<img>{mac-androidstudio-install3-no-jdk}の画面が表示されます。

//image[mac-androidstudio-install3-no-jdk][Java Settings][scale=0.3]{
//}

JDKをインストール済みで@<img>{mac-androidstudio-install3-no-jdk}が表示された場合、JDKをインストールした場所を指定して「Next」をクリックします。

//image[mac-androidstudio-setup3][セットアップタイプの選択][scale=0.3]{
//}

セットアップのタイプを選択します。

"Standard"を選択していることを確認してから「Next」ボタンを押します。


=====[column] セットアップウィザードのキャンセル

セットアップでは、非常に大きなパッケージをダウンロードします。
必ず、Wi-Fiなどの高速で安定した通信が確保できる状況で実行してください。

今はセットアップしたくない人、既にAndroid SDKのセットアップを完了している人は、左上の「閉じる」ボタンを押してキャンセルできます。

//image[setup-androidstudio0][次回もセットアップウィザードを起動するか確認するダイアログ][scale=0.45]{
//}

セットアップウィザードをキャンセルすると、@<img>{setup-androidstudio0}のダイアログが表示されます。
ここで"Re-run the setup wizard"を選択してOKを押すと、次回起動時にセットアップウィザードが起動します。

なお、既にAndroid SDKのセットアップを完了している人は、次の「Android SDKの場所を設定する」を参考に、
Android StudioにAndroid SDKの場所を設定してください。

=====[/column]

//image[mac-androidstudio-setup4][License Agreement][scale=0.3]{
//}

セットアップを進めるには、インストールする全てのパッケージについて、ライセンスに合意する必要があります。

それぞれライセンスを選択して、内容を読み、合意する場合は"Accept"を押してください。

「Finish」ボタンを押すには、表示されている全てのライセンスに合意する必要があります。
例えば、@<img>{mac-androidstudio-setup4}の場合、"android-sdk-license"と"intel-android-extra-license"の2つのライセンスに、それぞれ合意する必要があります。

全てのライセンスに合意して「Finish」のボタンを押すと、セットアップウィザードは、パッケージのダウンロードとインストールを開始します。

//image[mac-androidstudio-setup5][Download Components][scale=0.3]{
//}

//image[mac-androidstudio-setup6][パスワードの入力][scale=0.5]{
//}

インストールの途中でパスワードが求められる場合があります。パスワードを入力して「OK」を押します。

//image[mac-androidstudio-setup7][Download Components][scale=0.3]{
//}

ダウンロードとインストールを完了後、「Finish」を押すと、Android Studioが起動します。

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

Windowsの場合、Android SDKはC:\Users\@<tt>{[ユーザー名]}\AppData\Local\Android\sdkにインストールされます。

Stand-alone版のSDKは、C:\Users\@<tt>{[ユーザー名]}\AppData\Local\Android\android-sdkにインストールされます。

Mac OS Xの場合、/Users/@<tt>{ユーザー名}/Library/Android/sdkにインストールされます。

Stand-alone版のSDKは、ZIP書庫の形式でダウンロードして、android-sdk-macosxの名前で展開されます。

=====[/column]
