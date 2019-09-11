#include <QApplication>
#include <QTreeWidget>

#include "CustomTreeWidget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QTreeWidget* p_tree_widget = new Ui::CustomTreeWidget();
    p_tree_widget->show();

    return app.exec();
}
