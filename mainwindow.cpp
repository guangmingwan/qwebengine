#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWebChannel>
#include "bridge.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWebChannel *channel = new QWebChannel(this);
    channel->registerObject("bridge", (QObject*)bridge::instance());
    ui->widget->page()->setWebChannel(channel);
    //ui->widget->load(QUrl("http://www.yofus.com/h5/shop?seller=yofus_com"));
    //ui->widget->load(QUrl("http://html5test.com"));
   ui->widget->page()->load(QUrl(QStringLiteral("qrc:/index.html")));
   //ui->widget->page()->load(QUrl(QString("file:///%1/%2").arg(QApplication::applicationDirPath()).arg("index.html")));
    connect(ui->pbAlert, &QPushButton::clicked, [this]() {
            ui->widget->page()->runJavaScript("showAlert()");
        });
}

MainWindow::~MainWindow()
{
    delete ui;
}
