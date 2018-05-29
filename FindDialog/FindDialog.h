#pragma once

#include <QtWidgets>
#include <QtWidgets/QDialog>
#include "ui_FindDialog.h"
class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class FindDialog : public QDialog
{
	Q_OBJECT

public:
	FindDialog(QWidget *parent = Q_NULLPTR);

private:
	Ui::FindDialogClass ui;

	/*-----*/
	//new 
signals:
	void findNext(const QString &str,Qt::CaseSensitivity cs);
	void findPrevious(const QString &str,Qt::CaseSensitivity cs);
private slots:
	void findClicked();
	void enableFindButton(const QString &text);
private:
	QLabel * label;
	QLineEdit *lineEdit;
	QCheckBox *caseCheckBox;
	QCheckBox *backwardCheckBox;
	QPushButton *findButton;
	QPushButton *closeButton;
	/*-----*/
};
