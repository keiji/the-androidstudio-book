= 正誤表

== Android Studioをインストールしよう

Android Studio 0.8.14からセットアップ方法が大幅に変更されています。

詳細はおよび@<chapref>{install_android_studio}を参照してください。

== 新しいプロジェクトを作成しよう

本書で、新規プロジェクト作成時に指定するActivity Name、Layout Name、Titleの初期値にとして、MyActivity/activity_my/MyActivityと、
名前に@<tt>{My}が付与されて記載されていますが、Android Studio 0.8.14からは@<tt>{Main}が付与されるように変更になりました。

以下に示す二つの方法から、一つを選んで読み進めてください。

 * 本書で記載されているMyActivity.javaなど@<tt>{My}が付与されている部分を、全て@<tt>{Main}に読み替える（推奨）
 * 新規プロジェクト作成時に、Activity Nameを@<tt>{MyActivity}。Layout Nameを@<tt>{activity_my}に変更する


=== Web APIで情報を取得する天気予報アプリを作ろう

==== P.77

リスト6-2の中段付近、BufferedReaderをインスタンス化している処理の最後尾に必要な閉じ括弧")"とセミコロン";"が抜け落ちています。

//list[list_6_2wrong][誤 リスト6-2]{
    BufferedReader br = new BufferedReader(
        new InputStreamReader(response.getEntity().getContent())
//}

//list[list_6_2correct][正 リスト6-2]{
    BufferedReader br = new BufferedReader(
        new InputStreamReader(response.getEntity().getContent()));
//}

===== 注意

リスト6-2では、AndroidHttpClientクラスを使ってネットワークへアクセスしていますが、
このクラスはAndroid 5.1(API Level 22)から、deprecated（非推奨）に指定されています@<fn>{about_androidhttpclient}。

本稿更新の時点で動作はしますが、留意が必要です。

//footnote[about_androidhttpclient][AndroidHttpClientの代わりに、HttpUrlConnectionを使用してください。]

==== P.78

『取得した天気情報を表示する』で、リスト6-3として表記されているファイル名に誤りがあります。

//table[list_6_3][]{
誤	@<tt>{my_activity.xml}
正	@<tt>{activity_my.xml}
//}

==== P.99

リスト6-14の15行目、ImageLoaderTaskのクラス宣言部の書き換えに関する記述が抜け落ちています。

//list[list_6_14][+記号は追加する行、-記号は削除する行]{
- public class ImageLoaderTask {
+ public class ImageLoaderTask extends AsyncTask<ImageView, Void, Bitmap> {
//}


==== P.105

リスト6-17の作業以前に、@<tt>{Temperature}クラスに@<tt>{toString}メソッドを追加する記述が抜け落ちています。

@<tt>{WeatherForecast.java}を開いて、@<tt>{Temperature}クラスに@<list>{list_6_17pre}の記述を追加します。

//list[list_6_17pre][toStringメソッド（+記号で示す範囲）をTemperatureクラスの中に追加]{
    public class Temperature {

+       @Override
+       public String toString() {
+           StringBuffer sb = new StringBuffer();
+
+           // 最低気温 / 最高気温
+           if (min.celsius != null) {
+               sb.append(min.celsius);
+           } else {
+               sb.append(" - ");
+           }
+           sb.append("℃ / ");
+
+           if (max.celsius != null) {
+               sb.append(max.celsius);
+           } else {
+               sb.append(" - ");
+           }
+           sb.append("℃");
+
+           return sb.toString();
+       }

    }
//}


==== P.109

『6-9 読み込み中を表示する』で、リスト6-20として表記されているファイル名に誤りがあります。

//table[list_6_20][]{
誤	@<tt>{my_activity.java}
正	@<tt>{activity_my.xml}
//}

==== P.110

リスト6-21にインデントのずれがあります。
@<list>{list_6_21}がより正確な表記です。

//list[list_6_21][+記号で示す行を追加]{
+ import android.widget.ProgressBar;

  public class MyActivity extends Activity {

+     private ProgressBar progress;

      private class GetWeatherForecastTask extends GetWeatherForecastApiTask {

+         @Override
+         protected void onPreExecute() {
+             super.onPreExecute();
+             progress.setVisibility(View.VISIBLE);
+         }

          @Override
          protected void onPostExecute(WeatherApi.WeatherForecast data) {
              super.onPostExecute(data);

+             progress.setVisibility(View.GONE);

              if (data != null) {
                  location.setText(data.location.area + " " +
                          data.location.prefecture + " " + data.location.city);
              }
          }

      // 省略

      @Override
      protected void onCreate(Bundle savedInstanceState) {
          super.onCreate(savedInstanceState);
          setContentView(R.layout.activity_my);
          location = (TextView) findViewById(R.id.tv_location);
          forecastLayout = (LinearLayout) findViewById(R.id.ll_forecasts);
+         progress = (ProgressBar) findViewById(R.id.progress);
          new GetWeatherForecastTask(this).execute("400040");
      }

//}


==== P.114

リスト6-27のimport文に不要な@<tt>{+}記号が表示されています。

これは執筆段階での追加(+)と削除(-)を示す指定が残ったもので、import文の先頭に@<tt>{+}をつけない表記が正しいものです。

//list[list_6_27][import文に+記号は不要]{
import android.content.Context;
import android.graphics.Bitmap;
import android.os.AsyncTask;
import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.Toast;

import org.json.JSONException;

import java.io.IOException;
//}


==== P.137

Android Studio 1.1から、新規プロジェクト作成時のアイコン画像が@<tt>{res/mipmap}に配置されるように変更になったため、@<tt>{res/drawable-xxhdpi}を作成する必要があります。

drawable-xxhdpiを作成するには、[Project View]の[res]にカーソルを合わせて、右クリック→[New]→[Directory]をクリックします（@<img>{add_resource_dir_chap7}）。

//image[add_resource_dir_chap7][New -> Directory][scale=0.25]{
//}

作成するディレクトリ名に、"drawable-xxhdpi"と入力して[OK]をクリックします。

//image[create_xxhdpi_dir_chap7][New Directory][scale=0.5]{
//}

==== P.150

リスト7-12で@<tt>{jumpDroid}メソッドがfloat型の引数@<tt>{power}の記載がありますが、これは誤りです。
@<tt>{jumpDroid}メソッドに引数は記述しません。

//table[list_7_12][]{
誤	@<tt>{private void jumpDroid(float power) { }
正	@<tt>{private void jumpDroid() { }
//}

==== P.159

『ゲームオーバーになったことをコールバックする』で、ファイル名に誤りがあります。

//table[list_7_21][]{
誤	@<tt>{GameOver.javaを開いて}
正	@<tt>{GameView.javaを開いて}
//}

==== P.179

Android Studio 1.1から、新規プロジェクト作成時のアイコン画像が@<tt>{res/mipmap}に配置されるように変更になったため、@<tt>{res/drawable-xxhdpi}を作成する必要があります。

drawable-xxhdpiを作成するには、[Project View]の[res]にカーソルを合わせて、右クリック→[New]→[Directory]をクリックします（@<img>{add_resource_dir_chap8}）。

//image[add_resource_dir_chap8][New -> Directory][scale=0.25]{
//}

作成するディレクトリ名に、"drawable-xxhdpi"と入力して[OK]をクリックします。

//image[create_xxhdpi_dir_chap8][New Directory][scale=0.5]{
//}

==== P.186

リスト8-7の7行目、定数@<tt>{MISSILE_LAUNCH_WEIGHT}の記述が追加行に指定されていますが、ここで追加の必要はありません。
（既にリスト8-2で追加をしているため）


==== P.188 - 189 リスト8-8について

21行目、@<tt>{DrawThread}内で@<tt>{drawGame}メソッドを実行している記述がありますが、これは@<tt>{drawObject}メソッドの誤りです。

//table[list_8_8][]{
誤	@<tt>{drawGame(canvas);}
正	@<tt>{drawObject(canvas);}
//}

P.189下部、@<tt>{onDraw}メソッド内、変数@<tt>{width}と@<tt>{height}の行に変更（削除と追加）が指定されていますが、変更の必要はありません。
（既にリスト8-2で、@<tt>{canvas.getWidth()}および@<tt>{canvas.getHeight()}としているため）

//list[list_8_8][+記号は追加する行、-記号は削除する行]{
    @Override
-   protected void onDraw(Canvas canvas) {
+   private void drawObject(Canvas canvas) {
-       super.onDraw(canvas);

        int width = canvas.getWidth();
        int height = canvas.getHeight();

+       canvas.drawColor(Color.WHITE);

        // 省略

        droid.draw(canvas);

-       invalidate();
    }
}
//}


==== P.194

リスト8-11、@<tt>{BaseObject}クラスの@<tt>{isAvailable}メソッド内への追加に関する記述が抜け落ちています。

//list[list_8_11][isAvailableメソッド内に+記号で示す行を追加]{
    public boolean isAvailable(int width, int height) {
        if (yPosition < 0 || xPosition < 0 || yPosition > height || xPosition > width) {
            return false;
        }

+       if (status == STATUS_DESTROYED) {
+           return false;
+       }

        return true;
    }
//}


==== P.211

掲載されているバージョンとAPI Levelの対照表で、@<tt>{API Level 20}のプラットフォームバージョンが@<tt>{Android Wear 4.4.1W}と記載がありますが、
これは@<tt>{Android Wear 4.4W}の誤りです。

//table[api_version][]{
誤	@<tt>{Android Wear 4.4.1W}
正	@<tt>{Android Wear 4.4W}
//}

==== P.217

Android Studio 1.1から、新規プロジェクト作成時のアイコン画像が@<tt>{res/mipmap}に配置されるように変更になったため、@<tt>{res/drawable-xxhdpi}を作成する必要があります。

drawable-xxhdpiを作成するには、[Project View]の[res]にカーソルを合わせて、右クリック→[New]→[Directory]をクリックします（@<img>{add_resource_dir_chap9}）。

//image[add_resource_dir_chap9][New -> Directory][scale=0.25]{
//}

作成するディレクトリ名に、"drawable-xxhdpi"と入力して[OK]をクリックします。

//image[create_xxhdpi_dir_chap9][New Directory][scale=0.5]{
//}


==== P.255

リスト9-27に、@<tt>{LabyrinthView}クラスに変数@<tt>{seed}と、@<tt>{setSeed}メソッドを追加する記述が抜け落ちています。

@<tt>{LabyrinthView.java}を開いて、@<tt>{LabyrinthView}クラスに@<list>{list_9_27pre}の記述を追加します。

//list[list_9_27pre][LabyrinthViewに変数とsetSeedメソッドを追加]{
+    private int seed;

+    public void setSeed(int seed) {
+        this.seed = seed;
+    }
//}
