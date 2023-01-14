# 2chDepthCheck
2ch (だった掲示板サイト) のdat落ち監視ツール。
2012年くらいにつくったアプリだけれど、一応まだ動くみたいです。

subject.txtを取得してスレッド深度を調査し，
一定深度以下になると警告するツールです．

## 各部説明

- Board       ... 板URL．https だと動きません。仕様です。 ex) http://hibari.2ch.net/news4vip/
- スレ一覧    ... 上に表示されているリストです．
                      スレッドをダブルクリックするとブラウザで開きます．
                      右クリックでキーワード追加等のメニューを表示します．
- 監視リスト  ... 下に表示されているリストです．
  - Keyword    ... スレッドの検出に使うキーワード．ダブルクリックで編集できます．
                         全角/半角は区別しません．半角スペースで区切るとand検索します．
                          ex) 絵を描きたいけど
                          ex) 落書 うp
  - Match      ... Keywordに一致したスレッドが表示されます．
                         クリックするとブラウザで開きます．
  - Depth      ... 現在のスレッド深度．
                         この値が警告深度を下回るとアラームが鳴ります．
  - a          ... チェックを入れると大文字/小文字を区別して検索します．
  - E          ... チェックを外すと警告深度以下でもアラームを鳴らしません．
  - 消         ... キーワード削除．
- Warn Depth  ... 警告深度．
- Interval    ... リロード周期．

## 動作説明

  - 監視中のスレッドが警告深度を下回ると，アラームが鳴り，
    キーワードが橙に強調されます．
  - 新たにキーワードに一致したスレッドが見つかると，アラームが鳴り，
    キーワードが黄色に強調されます．
  - 一度キーワードに一致したスレッドが見つかると
    レス数が1000に達するか，キーワードを変更しない限り，そのスレッドを追い続けます．
  - 監視中のスレッドが完走し，新たにキーワードに一致したスレッドが見つかると，
    アラームが鳴り，キーワードが緑に強調されます．
  - スレ一覧の下の方にあるスレッドを優先して監視します．

## Thanks.
  落スレ ID:N/t5uAb+O
  http://hibari.2ch.net/test/read.cgi/news4vip/1313670864/88