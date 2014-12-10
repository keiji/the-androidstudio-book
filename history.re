= Android Studio更新内容

== 1.0 リリース

=== 変更の概要

==== インストーラー(Windows)の追加

Android Studio 1.0では、Windows用のインストーラーが追加されました。
これは、0.8.14 BETAで廃止された旧インストーラーに代わるものです。

//image[android-studio-installer-win][Android Studioのインストーラー][scale=0.5]{
//}

==== Android SDK Setup Wizardの追加

Android Studio 1.0では、Android SDK Setup Wizardが追加され、Android Studioの初回起動時に
Android SDKのダウンロードとセットアップが実行できるようになりました。

これは、0.8.14 BETAから、それまでAndroid Studioに含まれていたAndroid SDKがバンドルされなくなった変更を補填するものです。

また、Windows版についてはAndroid SDKが同梱されたインストーラーが標準となり、初回起動時に必要なパッケージのみをダウンロードするように変更されています。

//image[setup-androidstudio][Android StudioのSDK Setup][scale=0.35]{
//}

==== スタートメニューのテキスト変更

Android Studio 1.0では、起動時に表示されるメニューの各種テキストと、一部メニューの順番が変更されました。

//image[android-studio-start-menu][1.0のスタートメニュー（左）。旧スタートメニュー（右）][scale=0.5]{
//}

==== プロジェクト作成時の標準値の変更

これまでのAndroid Studioは、プロジェクト作成時に標準で、Activity名が@<tt>{MyActivity}、Layout名が@<tt>{activity_my}など、
@<tt>{My}を付加した命名になっていましたが、1.0ではこれらが@<tt>{Main}に変更されました。

また、新しくMenu Resource Nameを指定できるようになっています。

//image[new-project-1_0][標準値が変更されたProject作成画面][scale=0.25]{
//}

==== Gradle Plugin for Androidのサポートバージョン変更

Android Studio 1.0では、Gradle Plugin for Androidのサポートバージョンが@<tt>{1.0.0}以上となり、
それより前のバージョンのプロジェクトでは、Gradle Pluginのバージョンを更新する必要があります。

また、Gradle plugin for Androidの@<tt>{1.0.0}@<fn>{gradle_plugin}では、runProguardがminifyEnabledになるなど、
build.gradleのプロパティ名が変更されています。

//footnote[gradle_plugin][minifyEnabledが導入されたバージョンは、正確にはGradle Plugin for Android 0.14ですが、本文書ではリリースを基準にしているため、1.0.0と記載しています。]
