#include "bibliographiegui.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf8"));
	QTextCodec::setCodecForTr(QTextCodec::codecForName("utf8"));
    QApplication a(argc, argv);
    bibliographieGui w;
    w.show();
    return a.exec();
}
