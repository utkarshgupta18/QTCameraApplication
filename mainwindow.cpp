#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>
#include <QMessageBox>
#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <EmergentCameraAPIs.h>
#include <EvtParamAttribute.h>
#include <gigevisiondeviceinfo.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)//,ui(new Ui::MainWindow)
{
    m_button = new QPushButton("My Button", this);
    // set size and location of the button
    m_button->setGeometry(QRect(QPoint(20, 20), QSize(150, 70)));

    // Connect button signal to appropriate slot
    connect(m_button, SIGNAL (released()), this, SLOT (handleButton()));

    q_button = new QPushButton("Quit",this);
    q_button->setGeometry(QRect(QPoint(180, 20), QSize(150, 70)));
//    QObject::connect(q_button, SIGNAL (clicked()), &a, SLOT (quit()));
    connect(q_button, SIGNAL (clicked()), QApplication::instance(), SLOT(quit()));

    //ui->setupUi(this);
}

void MainWindow::handleButton()
{
    // change the text
    m_button->setText("Example Button Pushed");
    // resize button
    //m_button->resize(100,100);

    QMessageBox msgBox;
    msgBox.setText("Example Code");
    msgBox.exec();
}
/*void MainWindow::quit()
{
    connect(q_button, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));
}*/

MainWindow::~MainWindow()
{
//    delete ui;
}
