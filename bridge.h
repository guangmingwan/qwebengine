#ifndef BRIDGE_H
#define BRIDGE_H

#include <QObject>

class bridge : public QObject
{
    Q_OBJECT
public:
    static bridge* instance();
    explicit bridge(QObject *parent = nullptr);

signals:
public slots:
    void showMsgBox();
};

#endif // BRIDGE_H
