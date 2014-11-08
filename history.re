= 更新履歴

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
