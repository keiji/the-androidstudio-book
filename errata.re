= 正誤表

== Android Studioをインストールしよう

Android Studio 0.8.14からセットアップ方法が大幅に変更されています。

== 新しいプロジェクトを作成しよう

=== Activityのテンプレートの変更

Android Studio 1.4から"Blank Activity"を選んだときに生成するActivityのコードが大幅に変更されています。

//image[create_project_add_activity][Empty Activityを選択][scale=0.25]{
//}

"Blank Activity"ではなく"Empty Activity"を選択すると、もっとも本書の内容に近いコードが生成されます。

=== 初期名称の変更

本書で、新規プロジェクト作成時に指定するActivity Name、Layout Name、Titleの初期値にとして、MyActivity/activity_my/MyActivityと、
名前に@<tt>{My}が付与されて記載されていますが、Android Studio 0.8.14からは@<tt>{Main}が付与されるように変更になりました。

以下に示す二つの方法から、一つを選んで読み進めてください。

 * 本書で記載されているMyActivity.javaなど@<tt>{My}が付与されている部分を、全て@<tt>{Main}に読み替える（推奨）
 * 新規プロジェクト作成時に、Activity Nameを@<tt>{MyActivity}。Layout Nameを@<tt>{activity_my}に変更する


== Web APIで情報を取得する天気予報アプリを作ろう

=== AndroidHttpClient

リスト6-2では、AndroidHttpClientクラスを使ってネットワークへアクセスしていますが、
このクラスはAndroid 5.1(API Level 22)から、deprecated（非推奨）に指定され、Android 6.0(API Level 23)では完全に削除されました@<fn>{about_androidhttpclient}。

//footnote[about_androidhttpclient][AndroidHttpClientの代わりに、HttpUrlConnectionを使用してください。]

最新のAndroid Studioではプロジェクトを生成すると自動的に@<tt>{compileSdkVersion}が23に設定されるので、正常にビルドができません。

解決方法は二つあります。

==== compileSdkVersionを22に設定する

@<tt>{app/build.gradle}を開いて、@<tt>{compileSdkVersion}を22以下に設定してください。

//list[compilesdkversion_22][compileSdkVersionを22に]{
  apply plugin: 'com.android.application'

  android {
-      compileSdkVersion 23
+      compileSdkVersion 22
       buildToolsVersion "23.0.1"
//}

==== AndroidHttpClientを使うことを明示的に設定する

@<tt>{app/build.gradle}を開いて@<tt>{useLibrary}を追加してください（@<list>{use_library}）

//list[use_library][useLibraryを追加する]{
  apply plugin: 'com.android.application'

  android {
+     useLibrary 'org.apache.http.legacy'
//}

== 障害物や穴を飛び越えるアクションゲームを作ろう

=== P.137

Android Studio 1.1から、新規プロジェクト作成時のアイコン画像が@<tt>{res/mipmap}に配置されるように変更になったため、@<tt>{res/drawable-xhdpi}を作成する必要があります。

drawable-xhdpiを作成するには、[Project View]の[res]にカーソルを合わせて、右クリック→[New]→[Directory]をクリックします（@<img>{add_resource_dir_chap7}）。

//image[add_resource_dir_chap7][New -> Directory][scale=0.25]{
//}

作成するディレクトリ名に、"drawable-xhdpi"と入力して[OK]をクリックします。

//image[create_xhdpi_dir_chap7][New Directory][scale=0.5]{
//}

=== P.159

『ゲームオーバーになったことをコールバックする』で、ファイル名に誤りがあります。

//table[list_7_21][]{
誤	@<tt>{GameOver.javaを開いて}
正	@<tt>{GameView.javaを開いて}
//}

== スコアによって難易度が変わるシューティングゲームを作ろう

=== P.179

Android Studio 1.1から、新規プロジェクト作成時のアイコン画像が@<tt>{res/mipmap}に配置されるように変更になったため、@<tt>{res/drawable-xhdpi}を作成する必要があります。

drawable-xhdpiを作成するには、[Project View]の[res]にカーソルを合わせて、右クリック→[New]→[Directory]をクリックします（@<img>{add_resource_dir_chap8}）。

//image[add_resource_dir_chap8][New -> Directory][scale=0.25]{
//}

作成するディレクトリ名に、"drawable-xhdpi"と入力して[OK]をクリックします。

//image[create_xhdpi_dir_chap8][New Directory][scale=0.5]{
//}

== 端末の傾きで玉を移動する迷路ゲームを作ろう

=== P.217

Android Studio 1.1から、新規プロジェクト作成時のアイコン画像が@<tt>{res/mipmap}に配置されるように変更になったため、@<tt>{res/drawable-xhdpi}を作成する必要があります。

drawable-xhdpiを作成するには、[Project View]の[res]にカーソルを合わせて、右クリック→[New]→[Directory]をクリックします（@<img>{add_resource_dir_chap9}）。

//image[add_resource_dir_chap9][New -> Directory][scale=0.25]{
//}

作成するディレクトリ名に、"drawable-xhdpi"と入力して[OK]をクリックします。

//image[create_xhdpi_dir_chap9][New Directory][scale=0.5]{
//}


=== P.255

リスト9-27に、@<tt>{LabyrinthView}クラスに変数@<tt>{seed}と、@<tt>{setSeed}メソッドを追加する記述が抜け落ちています。

@<tt>{LabyrinthView.java}を開いて、@<tt>{LabyrinthView}クラスに@<list>{list_9_27pre}の記述を追加します。

//list[list_9_27pre][LabyrinthViewに変数とsetSeedメソッドを追加]{
+    private int seed;

+    public void setSeed(int seed) {
+        this.seed = seed;
+    }
//}
