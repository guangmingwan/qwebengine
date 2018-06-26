#include "bridge.h"
#include <QMessageBox>

bridge::bridge(QObject *parent) : QObject(parent)
{

}
bridge* bridge::instance()
{
    static bridge s_obj;
    return &s_obj;
}

void bridge::showMsgBox()
{
    QMessageBox::aboutQt(0, tr("Qt"));
}
