#include "uactest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	uactest w;
	w.show();
	return a.exec();
}