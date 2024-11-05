// Copyright (C) 2024 UnionTech Software Technology Co., Ltd.
// SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only
#pragma once

#include <QQuickItem>

class ItemA : public QQuickItem
{
    Q_OBJECT
    QML_ELEMENT
public:
    ItemA();



signals:

    // QQuickItem interface
public:
    bool contains(const QPointF &point) const override;

};
