#include "mainwindow.h"
#include <QApplication>
#include <QWebEngineView>
#include <QDir>
int main(int argc, char *argv[])
{
//    QDir d(":/");
//    qDebug()<<"absolutePath: "<<d.absolutePath();
//    qDebug()<<"dirName: "<<d.dirName();
//    foreach (QFileInfo info, d.entryInfoList())
//    {
//       qDebug()<<"absoluteDir: "<<info.absoluteDir();
//       qDebug()<<"absoluteFilePath: "<<info.absoluteFilePath();
//       qDebug()<<"absolutePath: "<<info.absolutePath();
//       //.....其他内容
//    }

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

   // QWebEngineView *view = new QWebEngineView();
   //view->load(QUrl("https://getbootstrap.com/docs/4.1/examples/"));
   //view->show();

    return a.exec();
}
