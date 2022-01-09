#ifndef WEBBROWSER_H
#define WEBBROWSER_H

#include <QMainWindow>
#include <QWebEngineView>

QT_BEGIN_NAMESPACE
namespace Ui { class WebBrowser; }
QT_END_NAMESPACE

class WebBrowser : public QMainWindow
{
    Q_OBJECT

public:
    WebBrowser(QWidget *parent = nullptr);
    ~WebBrowser();
    void paintEvent(QPaintEvent *event);

private slots:
//    void on_back_clicked();

//    void on_forward_clicked();

//    void on_refresh_clicked();

//    void on_go_clicked();

//    void on_addressInput_returnPressed();


    void on_pageview_2_customContextMenuRequested(const QPoint &pos);

private:
    Ui::WebBrowser *ui;
    QWebEngineView* webview;
    void loadPage();
};
#endif // WEBBROWSER_H
