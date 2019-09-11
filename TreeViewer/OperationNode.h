#pragma once
#include <QPainter>

namespace Ui
{
  class OperationNode
  {
    const int m_icon_margin = 3;
    const QString m_operation_description;
  public:
    OperationNode();
    OperationNode(const QString i_operation_description);

    static QSize sizeHint();
    void paint(QPainter* ip_painter, const QRect& i_rect) const;
  };

  Q_DECLARE_METATYPE(OperationNode)
}