#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <EmergentCameraAPIs.h>
#include <EvtParamAttribute.h>
#include <gigevisiondeviceinfo.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.showNormal();
/*  QPushButton quit;
    quit.setText("Quit");
    QObject::connect(&quit, SIGNAL (clicked()), &a, SLOT (quit()));
    quit.show();
*/
    //connect(q_button,SIGNAL(clicked()),q,SLOT(quit()));
    return a.exec();
}
