= 正誤表

== Android Studioをインストールしよう

Android Studio 2.0からセットアップ方法が大幅に変更されています。

最新のAndroid Studioに対応したセットアップの方法については、以下のURLを参照してください。

 * Android Studioセットアップガイド
 ** HTML版 @<href>{https://keiji.github.io/the-androidstudio-book/}
 ** PDF版 @<href>{https://keiji.github.io/the-androidstudio-book/archives/book.pdf}

== 【共通】プロジェクトの作成

=== 起動画面の変更

Android Studio 2.0から、起動画面のデザインが変更されています。

//image[start_android_studio][起動画面（Android Studio 2.0）][scale=0.2]{
//}

［Start a new Android Studio project］をクリックすると、プロジェクトの作成画面が起動します。

== 【共通】Project Viewの表示方法の変更

Android Studio 2.0から、Project Viewの表示方法が変更されています。

プロジェクト作成後、画面左上（@<img>{projectview1}）にある@<icon>{projectview1_icon}をクリックして、表示される一覧から［Project］を選択します（@<img>{projectview2}）。

//image[projectview1][枠で囲った部分をクリック][scale=0.25]{
//}

//image[projectview2][Projectを選択][scale=0.25]{
//}

== Android Studioをセットアップしよう（Windows編）

=== P.13

環境変数の追加について、掲載している図の赤枠位置に間違いがありました。

正しくは［ユーザー環境変数］の［新規］ボタンをクリックしてください。

//image[set_env4][ユーザー環境変数の［新規］をクリック][scale=0.5]{
//}


== Web APIで情報を取得する天気予報アプリを作ろう

=== P.83

リスト6-8に、@<tt>{result.setText(data);}の行を削除する記述が抜け落ちています。

//list[list_6_8_correct][result.setText(data); を削除]{
-    String data = WeatherApi.getWeather("400040");
-    result.setText(data);
+    final String data = WeatherApi.getWeather("400040");
//}


== 端末の傾きで玉を移動する迷路ゲームを作ろう

=== P.255

リスト9-28に、@<tt>{LabyrinthView}クラスにフィールド（変数）@<tt>{seed}と、@<tt>{setSeed}メソッドを追加する記述が抜け落ちています。

@<tt>{LabyrinthView.java}を開いて、@<tt>{LabyrinthView}クラスに@<list>{list_9_28pre}の記述を追加します。

//list[list_9_28pre][LabyrinthViewに変数とsetSeedメソッドを追加]{
+    private int seed;

+    public void setSeed(int seed) {
+        this.seed = seed;
+    }

  public void drawLabyrinth(Canvas canvas) {
//}
