#pragma once
#include <QPainter>

namespace Ui
{
  class FigureNode
  {
    const int m_icon_margin = 3;
    const QString m_figure_description;
  public:
    FigureNode();
    FigureNode(const QString i_figure_description);

    static QSize sizeHint();
    void paint(QPainter* ip_painter, const QRect& i_rect) const;
  };

  Q_DECLARE_METATYPE(FigureNode)
}