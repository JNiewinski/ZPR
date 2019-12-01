#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ZPR.h"

class ZPR : public QMainWindow
{
	Q_OBJECT

public:
	ZPR(QWidget *parent = Q_NULLPTR);

private:
	Ui::ZPRClass ui;
};
