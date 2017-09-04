#ifndef DENGUEME_H
#define DENGUEME_H

#include <QFile>
#include <QtCore/QDir>
#include <iostream>
#include <QString>
#include <QSettings>
#include <QDir>

#define ABS_APP_DIR QFileInfo(QCoreApplication::applicationFilePath()).absolutePath()

#ifdef Q_OS_LINUX
    #define DEFAULT_MODELS_DIR (ABS_APP_DIR + "/../share/dengueme/Models/")
#elif defined(Q_OS_MACOS)
    #define DEFAULT_MODELS_DIR (ABS_APP_DIR + "/Models/")
#else
    #define DEFAULT_MODELS_DIR (ABS_APP_DIR + "/Models/")
#endif

class MainWindow;

namespace dengueme {
    enum NameValidation {ValidName, EmptyName, FileExists, UnallowedChar};

    extern QSettings settingsFile;
    extern QHash<QString, QVariant> settingsTable;
    extern QString project;
    bool openFile(QFile &file, QFile::OpenMode flags = QFile::ReadOnly);
    bool openFile(QFile &file, QString filename, QFile::OpenMode flags = QFile::ReadOnly);
    bool copyFile(QString from, QString to, bool overwrite = false);
    bool copy(QString const& from, QString const& tgtFilePath, bool overwrite = false);
    bool remove(QString path);
    QString config(QString opt, QString def = QString());
    void saveconfig(QString opt, QString val);
    void setconfig(QString opt, QString val);
    bool createProject(QString name);
    bool createEmptyModel(QString filename);
    bool createDemo(QString type, QString xmlName, QString category);
    void setProject(QString);
    QString getProjectType();
    bool createModel(QString dest, QString type, QString category);
    NameValidation validateName(QString path, QString name, QString ext);
    QString purgeName(QString name);
    QList<QPair<QString, QStringList> > model_types();
    bool copy_dir_recursive(QString from_dir, QString to_dir, bool replace_on_conflit);


}

#endif // DENGUEME_H
