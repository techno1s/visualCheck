#ifndef SSHMANAGER_H
#define SSHMANAGER_H

#include <QObject>

class SSHManager : public QObject {
Q_OBJECT

public:
explicit SSHManager(QObject *parent = nullptr);
void connectToValidator();
void executeCommand(const QString &command);

signals:
void commandOutput(const QString &output);
};

#endif // SSHMANAGER_H