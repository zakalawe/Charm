#ifndef TRAYICON_H
#define TRAYICON_H

#include <QSystemTrayIcon>

class TrayIcon : public QSystemTrayIcon
{
    Q_OBJECT

public:
    explicit TrayIcon(QObject* parent = 0);
    virtual ~TrayIcon();

private Q_SLOTS:
    void slotActivated(QSystemTrayIcon::ActivationReason);

};

#endif // TRAYICON_H
