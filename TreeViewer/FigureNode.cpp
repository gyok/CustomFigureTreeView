#include "FigureNode.h"

Ui::FigureNode::FigureNode()
  : m_figure_description{ "default figure" }
{}

Ui::FigureNode::FigureNode(const QString i_figure_description)
  : m_figure_description{ "Figure: " + i_figure_description }
{}

QSize Ui::FigureNode::sizeHint() { return QSize{ 100, 40 }; }

void Ui::FigureNode::paint(QPainter* ip_painter, const QRect& i_rect) const
{

  auto icon_size = i_rect.height() - m_icon_margin * 2;

  ip_painter->save();
  ip_painter->setPen(Qt::darkBlue);
  ip_painter->setBrush(Qt::yellow);
  ip_painter->translate(i_rect.topLeft());
  ip_painter->drawEllipse(m_icon_margin, m_icon_margin, icon_size, icon_size);
  ;
  ip_painter->drawText(icon_size + m_icon_margin * 2, (i_rect.height() + ip_painter->fontMetrics().capHeight()) / 2, m_figure_description);

  ip_painter->restore();
}
