#include "OperationNode.h"

Ui::OperationNode::OperationNode()
  : m_operation_description{ "default operation" }
{}

Ui::OperationNode::OperationNode(const QString i_operation_description)
  : m_operation_description{ "operation: " + i_operation_description }
{}

QSize Ui::OperationNode::sizeHint() { return QSize{ 100, 20 }; }

void Ui::OperationNode::paint(QPainter* ip_painter, const QRect& i_rect) const
{

  auto icon_size = i_rect.height() - m_icon_margin * 2;

  ip_painter->save();

  ip_painter->setPen(Qt::darkBlue);
  ip_painter->setBrush(Qt::magenta);
  ip_painter->translate(i_rect.topLeft());
  ip_painter->drawRect(m_icon_margin, m_icon_margin, icon_size, icon_size);
  ip_painter->drawText(icon_size + m_icon_margin * 2, (i_rect.height() + ip_painter->fontMetrics().capHeight()) / 2, m_operation_description);

  ip_painter->restore();
}