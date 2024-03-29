#include "db_project.h"
#include <QApplication>

#include <QDebug>
#include <QResource>
#include <QFile>
#include <QTextStream>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    DB_project m_window;

    QPalette* palette = new QPalette();
    palette->setBrush(QPalette::Background, *(new QBrush(*(new QPixmap(PATH + "/img/bg.jpg")))));
    m_window.setPalette(*palette);


    m_window.show();

    return app.exec();
}
