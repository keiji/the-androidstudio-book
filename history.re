= 更新履歴

== 1.0-RC リリース

=== 変更の概要

==== インストーラー(Windows)の追加

Android Studio 1.0-RCでは、Windows用のインストーラーが追加されました。
これは、0.8.14 BETAで廃止された旧インストーラーに代わるものです。

//image[android-studio-installer-win][Android Studioのインストーラー][scale=0.5]{
//}

==== Android SDK Setup Wizardの追加

Android Studio 1.0-RCでは、Android SDK Setup Wizardが追加され、Android Studioの初回起動時に
Android SDKのダウンロードとセットアップが実行できるようになりました。

これは、0.8.14 BETAから、それまでAndroid Studioに含まれていたAndroid SDKがバンドルされなくなった変更を補填するものです。

//image[setup-androidstudio][Android StudioのSDK Setup][scale=0.45]{
//}

==== スタートメニューのテキスト変更

Android Studio 1.0-RCでは、起動時に表示されるメニューの各種テキストと、一部メニューの順番が変更されました。

//image[android-studio-start-menu][1.0-RCのスタートメニュー（左）。旧スタートメニュー（右）][scale=0.5]{
//}

==== プロジェクト作成時の標準値の変更

これまでのAndroid Studioは、プロジェクト作成時に標準で、Activity名が@<tt>{MyActivity}、Layout名が@<tt>{activity_my}など、
@<tt>{My}を付加した命名になっていましたが、1.0-RCではこれらが@<tt>{Main}に変更されました。

また、新しくMenu Resource Nameを指定できるようになっています。

//image[new-project-1_0-RC][標準値が変更されたProject作成画面][scale=0.25]{
//}

==== Gradle Plugin for Androidのサポートバージョン変更

Android Studio 1.0-RCでは、Gradle Plugin for Androidのサポートバージョンが0.14以上となり、
それより前のバージョンのプロジェクトはビルドできなくなりました。

また、Gradle plugin for Androidの0.14では、runProguardがminifyEnabledになるなど、
build.gradleのプロパティ名が変更されています。

== 0.8.14 Betaリリース - Oct 29, 2014

@<href>{http://tools.android.com/recent/androidstudio0814inbetachannel}

=== 変更の概要

==== Android SDKの同梱の廃止

これまでのAndroid Studioは、ダウンロードすると、アプリ開発に必要なAndroid SDKが標準で含まれていました。
しかし、0.8.14よりパッケージが分割され、Android SDKは別にダウンロード、セットアップしなければならなくなりました。

==== Windows版インストーラーの（一時的な）廃止

これまでのWindows版Android Studioでは、インストーラーを実行して、セットアップしていました。
しかし、0.8.14よりインストーラーが廃止され、ZIP書庫の形式を展開してのセットアップに変更されました。

Android Tools ProjectのXavier Ducrohet氏は、Android Tools Projectのグループadt-devにおいて「Android SDKのセットアップも含めた新しいインストーラーを現在準備中である@<fn>{adt-dev}」と、述べています。
このことから、Windows版は将来的に、再びインストーラー形式での提供に戻ると思われます。

//footnote[adt-dev][Error: The Android SDK folder can no longer be inside the application folder： @<href>{https://groups.google.com/d/topic/adt-dev/LQyik6JIU_Q/discussion}]

==== プロジェクト作成時に表示されるビューの変更

これまでのAndroid Studioでは、新規プロジェクトを作成した場合、標準でProject Viewが表示されていましたが、
0.8.14より、Android Viewが表示されるように変更されました。

Android Viewでは、プロジェクトを単純な階層表示ではなく、Androidに則したツリー構成で表示するほか、
リソース修飾子が異なる同じ種類のリソースをまとめて表示します。

//image[project-android-view][Android View（左）、Project View（右）][scale=0.5]{
//}

==== AVD Managerデザイン変更

Android Studio 0.8.14では、@<kw>{AVD, Android Virtual Device} Managerのデザインが一新されました。

//image[new-avd-manager][新しいAVD Managerのデザイン][scale=0.25]{
//}

//image[old-avd-manager][旧AVD Managerのデザイン][scale=0.35]{
//}
