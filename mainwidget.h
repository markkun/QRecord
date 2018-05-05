/******************************************************************
 Copyright (C) 2017 - All Rights Reserved by
 文 件 名 : mainwidget.h ---
 作 者    : 倪又华
 编写日期 : 2017
 说 明    :
 历史纪录 :
 <作者>    <日期>        <版本>        <内容>
  Niyh	   2017/7
*******************************************************************/
#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QAction>
#include <QMenu>

typedef enum
{
    UNKNOW,
    UP,
    DOWN,
} E_DIRECTION;

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = 0);
    ~MainWidget();

protected:
    QPoint m_startPoint;
    int m_nY;
    int m_nDirection;
    int m_nTimerId;
    bool m_bScaned;
    QString m_strScanResult;

protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);

    void paintEvent(QPaintEvent *e);
    void timerEvent(QTimerEvent *event);

private:
    QMenu *mainMenu;
private slots:
    void SltActionTriggered(QAction *action);

private:
    void ScanRecord();
};

#endif // MAINWIDGET_H
