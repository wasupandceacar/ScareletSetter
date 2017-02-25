#ifndef SCARELETSETTER_H
#define SCARELETSETTER_H

#pragma execution_character_set("utf-8")

#include <QLabel>
#include <QtWidgets/QApplication>
#include <QTextCodec>
#include <QPushButton>
#include <QLineEdit>
#include <QWidget>  
#include <QCheckBox>
#include <QTimer>

class ScareletSetter : public QWidget
{
	Q_OBJECT

public:
	ScareletSetter(QWidget *parent = 0);

	QPushButton *playerbutton;
	QPushButton *bombbutton;
	QPushButton *powerbutton;
	QPushButton *pointbutton;
	QPushButton *grazebutton;
	QPushButton *scorebutton;
	QPushButton *highscorebutton;
	QPushButton *rankbutton;

	QLineEdit *playeredit;
	QLineEdit *bombedit;
	QLineEdit *poweredit;
	QLineEdit *pointedit;
	QLineEdit *grazeedit;
	QLineEdit *scoreedit;
	QLineEdit *highscoreedit;
	QLineEdit *rankedit;

	QLabel *playerlabel;
	QLabel *bomblabel;
	QLabel *powerlabel;
	QLabel *pointlabel;
	QLabel *grazelabel;
	QLabel *scorelabel;
	QLabel *highscorelabel;
	QLabel *ranklabel;

	QCheckBox *playerbox;
	QCheckBox *bombbox;
	QCheckBox *powerbox;
	QCheckBox *pointbox;
	QCheckBox *grazebox;
	QCheckBox *scorebox;
	QCheckBox *highscorebox;
	QCheckBox *rankbox;

	private slots:
	void SetPlayer();
	void SetBomb();
	void SetPower();
	void SetPoint();
	void SetGraze();
	void SetScore();
	void SetHighScore();
	void SetRank();

	int checkprog();
	void checkbox();

private:
	void SetData(int choice, int num);

	//¼ÆÊ±Æ÷
	QTimer *timer;
};

#endif
