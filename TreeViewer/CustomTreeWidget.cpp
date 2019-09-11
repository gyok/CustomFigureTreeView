#include "CustomTreeWidget.h"

Ui::CustomTreeWidget::CustomTreeWidget(QWidget* ip_parent)
  : QTreeWidget{ip_parent}
{
  this->setItemDelegate(new NodeDelegate());
  this->setHeaderHidden(true);
  QList<QTreeWidgetItem*> items;
  QList<QTreeWidgetItem*> secondary_items;
  const int items_count = 3;
  for (auto i = 0; i < items_count; i++)
  {
    items.append(new QTreeWidgetItem(this));
    items.last()->setData(0, Qt::DisplayRole,
      QVariant::fromValue(OperationNode(QString("%1").arg(i)))
    );

    secondary_items.append(new QTreeWidgetItem(items.first()));
    secondary_items.last()->setData(0, Qt::DisplayRole,
      QVariant::fromValue(FigureNode(QString("%1 : %2").arg(items_count).arg(i)))
    );
  }
  items.append(secondary_items);
  this->insertTopLevelItems(0, items);
  this->setStyle(QStyleFactory::create("Windows"));
}