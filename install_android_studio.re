= Android Studioのセットアップ

== Android Studioのインストール

Android Studioをインストールします。
まず、ブラウザから、次のURLにアクセスします。

@<href>{https://developer.android.com/sdk/index.html}

//image[download_androidstudio1][Android Studio 2.0][scale=0.2]{
//}

=== サイトの言語設定を「英語」に変更する

Android Developersサイトの日本語版にアクセスすると、古いバージョンのAndroid Studioをダウンロードしてしまう可能性があります。

それを防ぐために、ダウンロードの前にサイトの言語を「日本語」から「英語」に変更します。

表示する言語はサイトの最下部から設定します（@<img>{change_language}）。

//image[change_language][ダウンロードの前に言語設定を英語に変更する][scale=0.3]{
//}

=== ダウンロード

@<img>{download_androidstudio1}に表示されている緑色のボタン「DOWNLOAD ANDROID STUDIO 2.0 ...」をクリックします。

//image[download_androidstudio2][Android Studio 2.0][scale=0.2]{
//}

Android Studioをダウンロードするには、ライセンスに合意する必要があります（@<img>{download_androidstudio2}）。
表示されるライセンスを読み、合意する場合は下のチェックボックスをクリックしてから「DOWNLOAD ANDROID STUDIO 2.0 ...」をクリックします。

画面が切り替わり、Android Studioのパッケージがダウンロードされます。

ダウンロードするパッケージはMac版で約280MB、Windows版では約1.2GBと非常に大きいため、
必ずWi-Fiなどの高速で安定した通信が確保できる状況で実行してください。

=====[column]ダウンロード後の表示は？

ダウンロードが終わった後の手順は、使用しているブラウザによって異なります。
例えばMicrosoft Edgeの場合、「実行」するか「ダウンロードしたファイルのあるフォルダをエクスプローラーで開く（ダウンロードの表示）」か尋ねる画面が表示されます。

お使いのPCにウイルス対策ソフトやセキュリティソフトをインストールしている場合は、それらが警告を表示したり、Android SDKのダウンロードやダウンロードしたファイルが実行できない場合があります。
その場合、お使いのソフトウェアの設定を確認してください。

=====[/column]


=== インストール

==== Windowsの場合

ダウンロードしたパッケージは、実行可能な形式です@<fn>{win-filename}。
ダブルクリックで実行すると、インストーラーが起動します。

//footnote[win-filename][時期によってファイル名は異なります]

この際「ユーザーアカウント制御」が警告を出す場合があります。
発行元がGoogleになっていることを確認した後「はい」をクリックします。

//image[win-androidstudio-install1][発行元がGoogleであることを確認する][scale=0.5]{
//}

//image[win-androidstudio-install2][インストーラー][scale=0.45]{
//}

「Next」をクリックします。
なお、@<kw>{JDK, Java Development Kit}がインストールされていない場合、@<img>{win-androidstudio-install3-no-jdk}の画面が表示されます。

//image[win-androidstudio-install3-no-jdk][System Check][scale=0.45]{
//}

JDKをインストール済みで@<img>{win-androidstudio-install3-no-jdk}が表示された場合、JDKをインストールした場所を指定して「Next」をクリックします。

//image[win-androidstudio-install3][Choose Components][scale=0.45]{
//}

インストールするコンポーネントを選択する画面です。
標準の選択のまま「Next」をクリックします。

//image[win-androidstudio-install4][Lisence Agreement][scale=0.45]{
//}

Android Studioをインストールするにはライセンス規約への合意が必要です。
表示される規約を読んで、合意する場合は「I Agree」をクリックします。

//image[win-androidstudio-install5][Install Locations][scale=0.45]{
//}

Android StudioとAndroid SDKをインストールする場所を設定します。
ここではなにも変更せず「Next」をクリックします。

//image[win-androidstudio-install6][Choose Start Menu Folder][scale=0.45]{
//}

スタートメニューの名前を設定します。
「Install」をクリックするとAndroid Studioのインストールを開始します。
コンピュータの性能にも依りますが、インストールには10分から20分程度かかります。

完了したら「Next」をクリックします。

//image[win-androidstudio-install8][Completing the Android Studio Setup][scale=0.45]{
//}

インストールが完了した画面です。
「Next」をクリックすると最終確認画面が表示され、そのまま「Finish」をクリックとAndroid Studioが起動します。

==== Mac OS Xの場合

ダウンロードしたファイルはDMG（ディスクイメージ）形式です@<fn>{mac-filename}。
ダブルクリックで開くと、インストールを促す画面が表示されます。
表示されているAndroid Studioのアイコンを、ドラッグ＆ドロップで「アプリケーション」に移動します。

//footnote[mac-filename][時期によってファイル名は異なります]

//indepimage[mac-androidstudio-install][Android Studioをドラッグ＆ドロップで移動][scale=0.4]

== Android Studioの実行

=== Windowsの場合

//indepimage[win-launch-androidstudio1][スタートメニューからAndroid Studioのアイコンをクリック][scale=0.8]

スタートメニューを表示して「すべてのアプリ」から「Android Studio」のアイコンをクリックして実行します。

=== Mac OS Xの場合

//image[mac-androidstudio-launch][アプリケーション][scale=0.35]{
//}

「アプリケーション」にインストールした「Android Studio」をクリックして実行します（@<img>{mac-androidstudio-launch}）。

//image[mac-androidstudio-security1][セキュリティ警告][scale=0.5]{
//}

@<img>{mac-androidstudio-security1}のようなダイアログが表示されて実行できない場合は、セキュリティの設定が必要です。

//image[mac-androidstudio-security2][アプリケーション][scale=0.35]{
//}

「アプリケーション」から「システム環境設定」をクリックして実行します（@<img>{mac-androidstudio-security2}）。

//image[mac-androidstudio-security3][システム環境設定][scale=0.35]{
//}

「セキュリティとプライバシー」をクリックします。

//image[mac-androidstudio-security4][セキュリティとプライバシー][scale=0.35]{
//}

下に表示されている「"Android Studio"は開発元を確認できないため...」の右側の「このまま開く」をクリックします。

//image[mac-androidstudio-security5][セキュリティ確認][scale=0.5]{
//}

起動の確認が表示されるので「開く」をクリックします。


== Android SDKのセットアップ

Android Studioを最初に起動するとき、既にあるAndroid Studioの設定を引き継ぐかの確認が表示されます。

//indepimage[androidstudio-import-setting][Complete Installation][scale=0.5]

ここでは「I do not have...」が選択されていることを確認して「OK」をクリックすると、セットアップウィザードが表示されます。

//image[androidstudio-setup][セットアップウィザード（Windows版）][scale=0.3]{
//}

=====[column] セットアップウィザードのキャンセル

セットアップでは、非常に大きなパッケージをダウンロードします。
必ずWi-Fiなどの高速で安定した通信が確保できる状況で実行してください。

今はセットアップしたくない人、既にAndroid SDKのセットアップを完了している人は、「閉じる」をクリックしてキャンセルできます。

//image[win-androidstudio-setup0][次回もセットアップウィザードを起動するか確認するダイアログ][scale=0.45]{
//}

セットアップウィザードをキャンセルすると、@<img>{win-androidstudio-setup0}のダイアログが表示されます。
ここで"Re-run the setup wizard"を選択してOKをクリックすると、次回起動時にセットアップウィザードが起動します。

なお、既にAndroid SDKのセットアップを完了している人は、次の「Android SDKの場所を設定する」を参考に、Android StudioにAndroid SDKの場所を設定してください。

=====[/column]

=== Windowsの場合

//image[win-androidstudio-setup1][Welcome][scale=0.3]{
//}

「Next」をクリックします。

//image[win-androidstudio-setup2][Install Type][scale=0.3]{
//}

セットアップのタイプを選択します。
"Standard"を選択していることを確認してから「Next」をクリックします。

//image[win-androidstudio-setup3][Verify Setting][scale=0.3]{
//}

「Finish」をクリックすると、パッケージのダウンロードとインストールを開始します。

//image[win-androidstudio-setup4-uac][ユーザーアカウント制御][scale=0.5]{
//}

インストールの途中でユーザーアカウント制御による許可が求められた場合、「はい」をクリックします。

//image[win-androidstudio-setup5][Download Components][scale=0.3]{
//}

//image[win-androidstudio-setup6][Android Studio 2.0][scale=0.3]{
//}

完了後、「Finish」をクリックすると、Android Studioが起動します。

引き続き「［改訂版］Android Studioではじめる 簡単Androidアプリ開発」のChapter 4 『アプリを実行しよう』を参照して、アプリを実行する環境を整えてください。


=== Mac OS Xの場合

//image[mac-androidstudio-setup1][Welcome][scale=0.3]{
//}

「Next」をクリックするとセットアップを開始します。

//image[mac-androidstudio-setup2][セットアップタイプの選択][scale=0.3]{
//}

セットアップのタイプを選択します。
"Standard"を選択していることを確認してから「Next」をクリックします。

//image[mac-androidstudio-setup3][Verify Settings][scale=0.3]{
//}

「Finish」をクリックすると、パッケージのダウンロードとインストールを開始します。

//image[mac-androidstudio-setup4][Downloading Components][scale=0.3]{
//}

インストールの途中でパスワードが求められた場合、パスワードを入力して「OK」をクリックします。

//image[mac-androidstudio-setup5][Downloading Components][scale=0.3]{
//}

ダウンロードとインストールを完了後、「Finish」をクリックすると、Android Studioが起動します。

//image[mac-androidstudio-setup6][Android Studio 2.0][scale=0.3]{
//}

引き続き「［改訂版］Android Studioではじめる 簡単Androidアプリ開発」のChapter 4 『アプリを実行しよう』を参照して、アプリを実行する環境を整えてください。

=== Android SDKの場所を設定する

「Android SDKのセットアップ」でセットアップウィザードをキャンセルした人は、キャンセル後に表示されるAndroid StudioのスタートメニューからAndroid SDKのパスを設定できます。

//indepimage[setup_sdk_path1][Configure][scale=0.35]

Android Studioのスタートメニューから「Configure」→「Project Default」→「Project Structure」をクリックします。

//indepimage[setup_sdk_path2][Project Structure][scale=0.3]

「Android SDK Location」に、SDKをインストールしたディレクトリ（フォルダー）のパスを入力し、入力が終わったら「OK」をクリックして設定を終了します。

また、既に値が入力されている場合は、そのまま「OK」をクリックして設定を終了します。

=====[column] Android SDKの場所

Windowsの場合、Android SDKはC:\Users\@<tt>{[ユーザー名]}\AppData\Local\Android\Sdkにインストールされます。

Stand-alone版のSDKは、C:\Users\@<tt>{[ユーザー名]}\AppData\Local\Android\android-sdkにインストールされます。

Mac OS Xの場合、/Users/@<tt>{ユーザー名}/Library/Android/sdkにインストールされます。

Stand-alone版のSDKは、ZIP書庫の形式でダウンロードして、android-sdk-macosxの名前で展開されます。

=====[/column]
