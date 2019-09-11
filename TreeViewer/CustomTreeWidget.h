#pragma once
#include <QTreeWidget>
#include<QStyleFactory>
#include "NodeDelegate.h"

namespace Ui
{
  class CustomTreeWidget : public QTreeWidget
  {
  public:
    CustomTreeWidget(QWidget* ip_parent = Q_NULLPTR);
  };
}

