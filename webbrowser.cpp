#include "webbrowser.h"
#include "ui_webbrowser.h"

WebBrowser::WebBrowser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WebBrowser)
{
    ui->setupUi(this);

    webview = new QWebEngineView(ui->pageview_2);
    webview->load(QUrl("https://www.google.com"));
}

WebBrowser::~WebBrowser()
{
    delete ui;
}


//void WebBrowser::on_back_clicked()
//{
//    webview->back();
//}

//void WebBrowser::on_forward_clicked()
//{
//    webview->forward();
//}

//void WebBrowser::on_refresh_clicked()
//{
//    webview->reload();
//}

//void WebBrowser::on_go_clicked()
//{
//    loadPage();
//}

//void WebBrowser::on_addressInput_returnPressed()
//{
//    loadPage();
//}

void WebBrowser::loadPage()
{
//    QString url = ui->addressInput->text();
//    if (!url.startsWith("http://") && !url.startsWith("https://"))
//    {
//        url = "http://" + url;
//    }
//    ui->addressInput->setText(url);
//    webview->load(QUrl(url));
}

void WebBrowser::paintEvent(QPaintEvent *event)
{
    QMainWindow::paintEvent(event);
    webview->resize(ui->pageview_2->size());
}



