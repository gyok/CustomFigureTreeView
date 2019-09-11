#pragma once
#include <QStyledItemDelegate>
#include "FigureNode.h"
#include "OperationNode.h"

namespace Ui
{
  class NodeDelegate : public QStyledItemDelegate
  {
    Q_OBJECT
  public:
    QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override;
    void paint(QPainter* ip_painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override;
  };
}

