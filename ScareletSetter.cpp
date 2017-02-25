#include "ScareletSetter.h"

#include <QtWidgets/QApplication>
#include <Windows.h> 
#include <tlhelp32.h>
#include "Psapi.h"

ScareletSetter *SS;

PROCESSENTRY32 pe;
HANDLE hSnapshot;

//�޸�����
void ScareletSetter::SetData(int choice, int num){
	DWORD dwNumberOfBytesRead;
	hSnapshot = OpenProcess(PROCESS_ALL_ACCESS, false, (DWORD)pe.th32ProcessID);
	switch (choice){
	case 1:
		WriteProcessMemory(hSnapshot, (LPVOID)0x0069D4BA, &num, 1, &dwNumberOfBytesRead);
		break;
	case 2:
		WriteProcessMemory(hSnapshot, (LPVOID)0x0069D4BB, &num, 1, &dwNumberOfBytesRead);
		break;
	case 3:
		WriteProcessMemory(hSnapshot, (LPVOID)0x0069D4B0, &num, 4, &dwNumberOfBytesRead);
		break;
	case 4:
		WriteProcessMemory(hSnapshot, (LPVOID)0x0069D4B4, &num, 4, &dwNumberOfBytesRead);
		break;
	case 5:
		WriteProcessMemory(hSnapshot, (LPVOID)0x0069BCB4, &num, 4, &dwNumberOfBytesRead);
		break;
	case 6:
		WriteProcessMemory(hSnapshot, (LPVOID)0x0069BCA0, &num, 4, &dwNumberOfBytesRead);
		break;
	case 7:
		WriteProcessMemory(hSnapshot, (LPVOID)0x0069BCAC, &num, 4, &dwNumberOfBytesRead);
		break;
	case 8:
		WriteProcessMemory(hSnapshot, (LPVOID)0x0069D710, &num, 4, &dwNumberOfBytesRead);
		break;
	}
}

void ScareletSetter::SetPlayer(){
	if (checkprog()){
		int data = playeredit->text().toInt();
		if (data >= 0 && data <= 255){
			SetData(1, data);
		}
	}
}
void ScareletSetter::SetBomb(){
	if (checkprog()){
		int data = bombedit->text().toInt();
		if (data >= 0 && data <= 255){
			SetData(2, data);
		}
	}
}
void ScareletSetter::SetPower(){
	if (checkprog()){
		int data = poweredit->text().toInt();
		if (data >= 0 && data <= 2147483647){
			SetData(3, data);
		}
	}
}
void ScareletSetter::SetPoint(){
	if (checkprog()){
		int data = pointedit->text().toInt();
		if (data >= 0 && data <= 2147483647){
			SetData(4, data);
		}
	}
}
void ScareletSetter::SetGraze(){
	if (checkprog()){
		int data = grazeedit->text().toInt();
		if (data >= 0 && data <= 2147483647){
			SetData(5, data);
		}
	}
}
void ScareletSetter::SetScore(){
	if (checkprog()){
		int data = scoreedit->text().toInt();
		if (data >= 0 && data <= 2147483647){
			SetData(6, data);
		}
	}
}
void ScareletSetter::SetHighScore(){
	if (checkprog()){
		int data = highscoreedit->text().toInt();
		if (data >= 0 && data <= 2147483647){
			SetData(7, data);
		}
	}
}
void ScareletSetter::SetRank(){
	if (checkprog()){
		int data = rankedit->text().toInt();
		if (data >= 0 && data <= 2147483647){
			SetData(8, data);
		}
	}
}

//������
int ScareletSetter::checkprog(){
	PROCESSENTRY32 tmppe;
	DWORD id = 0;
	LPCTSTR name = L"�����g����.exe";
	HANDLE tmphSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	tmppe.dwSize = sizeof(PROCESSENTRY32);
	if (!Process32First(tmphSnapshot, &tmppe))
		return 0;
	do
	{
		tmppe.dwSize = sizeof(PROCESSENTRY32);
		if (Process32Next(tmphSnapshot, &tmppe) == FALSE)
			return 0;
		if (lstrcmp(tmppe.szExeFile, name) == 0){
			pe = tmppe;
			hSnapshot = tmphSnapshot;
			return 1;
		}
	} while (1);
}

//��鵥ѡ��
void ScareletSetter::checkbox(){
	if (checkprog()){
		this->setWindowTitle("������");
		if (playerbox->isChecked()){
			QString player = playeredit->text();
			if (player.length() != 0){
				SetData(1, player.toInt());
			}
		}
		if (bombbox->isChecked()){
			QString bomb = bombedit->text();
			if (bomb.length() != 0){
				SetData(2, bomb.toInt());
			}
		}
		if (powerbox->isChecked()){
			QString power = poweredit->text();
			if (power.length() != 0){
				SetData(3, power.toInt());
			}
		}
		if (pointbox->isChecked()){
			QString point = pointedit->text();
			if (point.length() != 0){
				SetData(4, point.toInt());
			}
		}
		if (grazebox->isChecked()){
			QString graze = grazeedit->text();
			if (graze.length() != 0){
				SetData(5, graze.toInt());
			}
		}
		if (scorebox->isChecked()){
			QString score = scoreedit->text();
			if (score.length() != 0){
				SetData(6, score.toInt());
			}
		}
		if (highscorebox->isChecked()){
			QString high = highscoreedit->text();
			if (high.length() != 0){
				SetData(7, high.toInt());
			}
		}
		if (rankbox->isChecked()){
			QString rank = rankedit->text();
			if (rank.length() != 0){
				SetData(8, rank.toInt());
			}
		}
	}else{
		this->setWindowTitle("����Ϸ");
	}
}

ScareletSetter::ScareletSetter(QWidget *parent)
	: QWidget(parent)
{
	SS = this;

	//���ڳ�ʼ��
	int width = GetSystemMetrics(SM_CXFULLSCREEN);
	int height = GetSystemMetrics(SM_CYFULLSCREEN);

	this->setWindowTitle("����Ϸ");
	this->setWindowFlags(Qt::WindowCloseButtonHint);
	this->setFixedSize(205, 220);
	this->move((width - 205) / 2, (height - 220) / 2);

	//��ǩ��ʼ��
	playerlabel = new QLabel("Player��", this);
	playerlabel->setGeometry(QRect(10, 10, 40, 25));
	bomblabel = new QLabel("Bomb��", this);
	bomblabel->setGeometry(QRect(10, 35, 40, 25));
	powerlabel = new QLabel("Power��", this);
	powerlabel->setGeometry(QRect(10, 60, 40, 25));
	pointlabel = new QLabel("Point��", this);
	pointlabel->setGeometry(QRect(10, 85, 40, 25));
	grazelabel = new QLabel("Graze��", this);
	grazelabel->setGeometry(QRect(10, 110, 40, 25));
	scorelabel = new QLabel("Score��", this);
	scorelabel->setGeometry(QRect(10, 135, 40, 25));
	highscorelabel = new QLabel("High��", this);
	highscorelabel->setGeometry(QRect(10, 160, 40, 25));
	ranklabel = new QLabel("Rank��", this);
	ranklabel->setGeometry(QRect(10, 185, 40, 25));

	//�ı����ʼ��
	playeredit = new QLineEdit(this);
	playeredit->setGeometry(QRect(60, 13, 35, 19));
	bombedit = new QLineEdit(this);
	bombedit->setGeometry(QRect(60, 38, 35, 19));
	poweredit = new QLineEdit(this);
	poweredit->setGeometry(QRect(60, 63, 35, 19));
	pointedit = new QLineEdit(this);
	pointedit->setGeometry(QRect(60, 88, 35, 19));
	grazeedit = new QLineEdit(this);
	grazeedit->setGeometry(QRect(60, 113, 35, 19));
	scoreedit = new QLineEdit(this);
	scoreedit->setGeometry(QRect(60, 138, 35, 19));
	highscoreedit = new QLineEdit(this);
	highscoreedit->setGeometry(QRect(60, 163, 35, 19));
	rankedit = new QLineEdit(this);
	rankedit->setGeometry(QRect(60, 188, 35, 19));

	//��ť��ʼ��
	playerbutton = new QPushButton("�޸�", this);
	playerbutton->setGeometry(QRect(105, 12, 35, 21));
	bombbutton = new QPushButton("�޸�", this);
	bombbutton->setGeometry(QRect(105, 37, 35, 21));
	powerbutton = new QPushButton("�޸�", this);
	powerbutton->setGeometry(QRect(105, 62, 35, 21));
	pointbutton = new QPushButton("�޸�", this);
	pointbutton->setGeometry(QRect(105, 87, 35, 21));
	grazebutton = new QPushButton("�޸�", this);
	grazebutton->setGeometry(QRect(105, 112, 35, 21));
	scorebutton = new QPushButton("�޸�", this);
	scorebutton->setGeometry(QRect(105, 137, 35, 21));
	highscorebutton = new QPushButton("�޸�", this);
	highscorebutton->setGeometry(QRect(105, 162, 35, 21));
	rankbutton = new QPushButton("�޸�", this);
	rankbutton->setGeometry(QRect(105, 187, 35, 21));

	//��ѡ���ʼ��
	playerbox = new QCheckBox("����", this);
	playerbox->setGeometry(QRect(150, 14, 50, 17));
	bombbox = new QCheckBox("����", this);
	bombbox->setGeometry(QRect(150, 39, 50, 17));
	powerbox = new QCheckBox("����", this);
	powerbox->setGeometry(QRect(150, 64, 50, 17));
	pointbox = new QCheckBox("����", this);
	pointbox->setGeometry(QRect(150, 89, 50, 17));
	grazebox = new QCheckBox("����", this);
	grazebox->setGeometry(QRect(150, 114, 50, 17));
	scorebox = new QCheckBox("����", this);
	scorebox->setGeometry(QRect(150, 139, 50, 17));
	highscorebox = new QCheckBox("����", this);
	highscorebox->setGeometry(QRect(150, 164, 50, 17));
	rankbox = new QCheckBox("����", this);
	rankbox->setGeometry(QRect(150, 189, 50, 17));

	//�����źŲ�
	connect(playerbutton, SIGNAL(clicked()), this, SLOT(SetPlayer()));
	connect(bombbutton, SIGNAL(clicked()), this, SLOT(SetBomb()));
	connect(powerbutton, SIGNAL(clicked()), this, SLOT(SetPower()));
	connect(pointbutton, SIGNAL(clicked()), this, SLOT(SetPoint()));
	connect(grazebutton, SIGNAL(clicked()), this, SLOT(SetGraze()));
	connect(scorebutton, SIGNAL(clicked()), this, SLOT(SetScore()));
	connect(highscorebutton, SIGNAL(clicked()), this, SLOT(SetHighScore()));
	connect(rankbutton, SIGNAL(clicked()), this, SLOT(SetRank()));

	//��������ʼ��
	timer = new QTimer(this);
	timer->start(100);
	connect(timer, SIGNAL(timeout()), this, SLOT(checkbox()));
}
