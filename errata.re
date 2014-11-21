= 正誤表

== Android Studioをインストールしよう

Android Studio 0.8.14からセットアップ方法が大幅に変更されています。

詳細は@<chapref>{install_jdk}および@<chapref>{install_android_studio}を参照してください。

== Web APIで情報を取得する天気予報アプリを作ろう

=== P.78

『取得した天気情報を表示する』で、リスト6-3として表記されているファイル名に誤りがありました。

誤: @<tt>{my_activity.xml} → 正: @<tt>{activity_my.xml}

=== P.109

『6-9 読み込み中を表示する』で、リスト6-20として表記されているファイル名に誤りがありました。

誤: @<tt>{my_activity.java} → 正: @<tt>{activity_my.xml}

=== P.110

リスト6-21に誤解を招く表記（インデントのずれ）がありました。
@<list>{list_6_21}がより正確な表記です。

//list[list_6_21][+記号は追加する行]{
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

=== P.114

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
