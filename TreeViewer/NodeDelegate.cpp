#include "NodeDelegate.h"

QSize Ui::NodeDelegate::sizeHint(const QStyleOptionViewItem& i_option,
  const QModelIndex& i_index) const
{
  if (i_index.data().canConvert<OperationNode>())
  {
    return OperationNode::sizeHint();
  }
  else if (i_index.data().canConvert<FigureNode>())
  {
    return FigureNode::sizeHint();
  }

  return QStyledItemDelegate::sizeHint(i_option, i_index);
}

void Ui::NodeDelegate::paint(QPainter* ip_painter,
  const QStyleOptionViewItem& i_option,
  const QModelIndex& i_index) const
{
  if (i_index.data().canConvert<OperationNode>())
  {
    auto node = qvariant_cast<OperationNode>(i_index.data());
    node.paint(ip_painter, i_option.rect);
  }
  else if (i_index.data().canConvert<FigureNode>())
  {
    auto node = qvariant_cast<FigureNode>(i_index.data());
    node.paint(ip_painter, i_option.rect);
  }

  QStyledItemDelegate::paint(ip_painter, i_option, i_index);
}
