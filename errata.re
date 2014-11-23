= 正誤表

== Android Studioをインストールしよう

Android Studio 0.8.14からセットアップ方法が大幅に変更されています。

詳細は@<chapref>{install_jdk}および@<chapref>{install_android_studio}を参照してください。

=== Web APIで情報を取得する天気予報アプリを作ろう

==== P.78

『取得した天気情報を表示する』で、リスト6-3として表記されているファイル名に誤りがあります。

//table[list_6_3][]{
誤	正
-----------
@<tt>{my_activity.xml}	@<tt>{activity_my.xml}
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
誤	正
-----------
@<tt>{my_activity.java}	@<tt>{activity_my.xml}
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


==== P.186

リスト8-7の7行目、定数@<tt>{MISSILE_LAUNCH_WEIGHT}の記述が追加行に指定されていますが、ここで追加の必要はありません。
（既にリスト8-2で追加をしているため）


==== P.188 - 189 リスト8-8について

21行目、@<tt>{DrawThread}内で@<tt>{drawGame}メソッドを実行している記述がありますが、これは@<tt>{drawObject}メソッドの誤りです。

//table[list_8_8][]{
誤	正
-----------
@<tt>{drawGame(canvas);}	@<tt>{drawObject(canvas);}
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


==== P.221

掲載されているバージョンとAPI Levelの対照表で、@<tt>{API Level 20}のプラットフォームバージョンが@<tt>{Android Wear 4.4.1W}と記載がありますが、
これは@<tt>{Android Wear 4.4W}の誤りです。

//table[api_version][]{
誤	正
-----------
@<tt>{Android Wear 4.4.1W}	@<tt>{Android Wear 4.4W}
//}
