#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMenu>

class MainMenu : public QMenu
{
    Q_OBJECT

public:
    MainMenu(QWidget *parent = nullptr);
    void setFullScreen(bool isOn);

public slots:
    void onEditorOpen(bool isOpen);

signals:
    void openClicked();
    void newClicked();
    void openSettingsClicked();
    void onlineHelpClicked();
    void aboutClicked();
    void closeFileClicked();
    void closeClicked();
    void fullScreenTriggered();
    void save();
    void saveAs();
    void exportSoundfonts();

private:
    QAction * _newAction;
    QAction * _openAction;
    QAction * _saveAction;
    QAction * _saveAsAction;
    QAction * _exportAction;
    QAction * _fullScreenAction;
    QAction * _settingsAction;
    QAction * _helpAction;
    QAction * _aboutAction;
    QAction * _closeFileAction;
    QAction * _closeAction;
};

#endif // MAINMENU_H
