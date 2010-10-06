/********************************************************************************
** Form generated from reading UI file 'google_maps.ui'
**
** Created: Tue Oct 5 08:45:58 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOGLE_MAPS_H
#define UI_GOOGLE_MAPS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_Google_maps
{
public:
    QWebView *webView;

    void setupUi(QWidget *Google_maps)
    {
        if (Google_maps->objectName().isEmpty())
            Google_maps->setObjectName(QString::fromUtf8("Google_maps"));
        Google_maps->resize(496, 399);
        webView = new QWebView(Google_maps);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setGeometry(QRect(-10, -10, 512, 422));

        retranslateUi(Google_maps);

        QMetaObject::connectSlotsByName(Google_maps);
    } // setupUi

    void retranslateUi(QWidget *Google_maps)
    {
        Google_maps->setWindowTitle(QApplication::translate("Google_maps", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Google_maps: public Ui_Google_maps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOGLE_MAPS_H
