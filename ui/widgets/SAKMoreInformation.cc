﻿/*
 * Copyright (C) 2018-2019 wuuhii. All rights reserved.
 *
 * The file is encoding with utf-8 (with BOM). It is a part of QtSwissArmyKnife
 * project. The project is a open source project, you can get the source from:
 *     https://github.com/qter188/QtSwissArmyKnife
 *     https://gitee.com/qter188/QtSwissArmyKnife
 *
 * For more information about the project, please join our QQ group(952218522).
 * In addition, the email address of the project author is qter188@outlook.com.
 */
#include "SAKMoreInformation.hh"
#include "ui_SAKMoreInformation.h"

#include <QFile>

SAKMoreInformation::SAKMoreInformation(QWidget* parent)
    :QDialog (parent)
    ,ui(new Ui::SAKMoreInformation)
{
    ui->setupUi(this);
    setModal(true);

    textBrowserHistory = ui->textBrowserHistory;
    textBrowserHistory->clear();
    QFile file(":/resources/files/History.txt");
    if (file.open(QFile::ReadOnly)){
        QByteArray data = file.readAll();
        textBrowserHistory->setText(QString::fromUtf8(data));
    }
}
