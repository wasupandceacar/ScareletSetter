#include "ScareletSetter.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

	ScareletSetter *SS = new ScareletSetter();
	SS->show();

    return a.exec();
}
