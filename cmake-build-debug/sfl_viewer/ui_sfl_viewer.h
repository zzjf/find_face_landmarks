/********************************************************************************
** Form generated from reading UI file 'sfl_viewer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SFL_VIEWER_H
#define UI_SFL_VIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Viewer
{
public:
    QAction *action_Open;
    QAction *action_Close;
    QAction *actionPlay;
    QAction *actionBackward;
    QAction *actionForward;
    QAction *actionShowLandmarks;
    QAction *actionShowBBox;
    QAction *actionShowLabels;
    QAction *actionShowIDs;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *display;
    QHBoxLayout *frame_layout;
    QLabel *curr_frame_lbl;
    QSlider *frame_slider;
    QLabel *max_frame_lbl;
    QHBoxLayout *buttons_layout;
    QSpacerItem *horizontalSpacer;
    QToolButton *backward_btn;
    QToolButton *play_pause_btn;
    QToolButton *forward_btn;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_View;
    QMenu *menuPlayback;
    QStatusBar *statusbar;
    QToolBar *fileToolBar;
    QToolBar *viewToolBar;

    void setupUi(QMainWindow *Viewer)
    {
        if (Viewer->objectName().isEmpty())
            Viewer->setObjectName(QStringLiteral("Viewer"));
        Viewer->resize(805, 600);
        action_Open = new QAction(Viewer);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        QIcon icon(QIcon::fromTheme(QStringLiteral(":/images/open.png")));
        action_Open->setIcon(icon);
        action_Close = new QAction(Viewer);
        action_Close->setObjectName(QStringLiteral("action_Close"));
        actionPlay = new QAction(Viewer);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        QIcon icon1(QIcon::fromTheme(QStringLiteral(":/images/play.png")));
        actionPlay->setIcon(icon1);
        actionBackward = new QAction(Viewer);
        actionBackward->setObjectName(QStringLiteral("actionBackward"));
        QIcon icon2(QIcon::fromTheme(QStringLiteral(":/images/backward.png")));
        actionBackward->setIcon(icon2);
        actionForward = new QAction(Viewer);
        actionForward->setObjectName(QStringLiteral("actionForward"));
        QIcon icon3(QIcon::fromTheme(QStringLiteral(":/images/forward.png")));
        actionForward->setIcon(icon3);
        actionShowLandmarks = new QAction(Viewer);
        actionShowLandmarks->setObjectName(QStringLiteral("actionShowLandmarks"));
        actionShowLandmarks->setCheckable(true);
        actionShowLandmarks->setChecked(true);
        QIcon icon4(QIcon::fromTheme(QStringLiteral(":/images/landmarks.png")));
        actionShowLandmarks->setIcon(icon4);
        actionShowBBox = new QAction(Viewer);
        actionShowBBox->setObjectName(QStringLiteral("actionShowBBox"));
        actionShowBBox->setCheckable(true);
        actionShowBBox->setChecked(true);
        QIcon icon5(QIcon::fromTheme(QStringLiteral(":/images/bbox.png")));
        actionShowBBox->setIcon(icon5);
        actionShowLabels = new QAction(Viewer);
        actionShowLabels->setObjectName(QStringLiteral("actionShowLabels"));
        actionShowLabels->setCheckable(true);
        actionShowLabels->setChecked(false);
        QIcon icon6(QIcon::fromTheme(QStringLiteral(":/images/labels.png")));
        actionShowLabels->setIcon(icon6);
        actionShowIDs = new QAction(Viewer);
        actionShowIDs->setObjectName(QStringLiteral("actionShowIDs"));
        actionShowIDs->setCheckable(true);
        actionShowIDs->setChecked(true);
        QIcon icon7(QIcon::fromTheme(QStringLiteral(":/images/face_ids.png")));
        actionShowIDs->setIcon(icon7);
        centralwidget = new QWidget(Viewer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        display = new QLabel(centralwidget);
        display->setObjectName(QStringLiteral("display"));
        display->setMinimumSize(QSize(320, 240));
        display->setBaseSize(QSize(0, 0));

        verticalLayout->addWidget(display);

        frame_layout = new QHBoxLayout();
        frame_layout->setObjectName(QStringLiteral("frame_layout"));
        curr_frame_lbl = new QLabel(centralwidget);
        curr_frame_lbl->setObjectName(QStringLiteral("curr_frame_lbl"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(curr_frame_lbl->sizePolicy().hasHeightForWidth());
        curr_frame_lbl->setSizePolicy(sizePolicy);
        curr_frame_lbl->setMinimumSize(QSize(32, 0));
        curr_frame_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        frame_layout->addWidget(curr_frame_lbl);

        frame_slider = new QSlider(centralwidget);
        frame_slider->setObjectName(QStringLiteral("frame_slider"));
        frame_slider->setEnabled(false);
        frame_slider->setOrientation(Qt::Horizontal);

        frame_layout->addWidget(frame_slider);

        max_frame_lbl = new QLabel(centralwidget);
        max_frame_lbl->setObjectName(QStringLiteral("max_frame_lbl"));
        sizePolicy.setHeightForWidth(max_frame_lbl->sizePolicy().hasHeightForWidth());
        max_frame_lbl->setSizePolicy(sizePolicy);
        max_frame_lbl->setMinimumSize(QSize(32, 0));

        frame_layout->addWidget(max_frame_lbl);


        verticalLayout->addLayout(frame_layout);

        buttons_layout = new QHBoxLayout();
        buttons_layout->setObjectName(QStringLiteral("buttons_layout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttons_layout->addItem(horizontalSpacer);

        backward_btn = new QToolButton(centralwidget);
        backward_btn->setObjectName(QStringLiteral("backward_btn"));

        buttons_layout->addWidget(backward_btn);

        play_pause_btn = new QToolButton(centralwidget);
        play_pause_btn->setObjectName(QStringLiteral("play_pause_btn"));

        buttons_layout->addWidget(play_pause_btn);

        forward_btn = new QToolButton(centralwidget);
        forward_btn->setObjectName(QStringLiteral("forward_btn"));

        buttons_layout->addWidget(forward_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttons_layout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(buttons_layout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        Viewer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Viewer);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 805, 21));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QStringLiteral("menu_View"));
        menuPlayback = new QMenu(menubar);
        menuPlayback->setObjectName(QStringLiteral("menuPlayback"));
        Viewer->setMenuBar(menubar);
        statusbar = new QStatusBar(Viewer);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Viewer->setStatusBar(statusbar);
        fileToolBar = new QToolBar(Viewer);
        fileToolBar->setObjectName(QStringLiteral("fileToolBar"));
        Viewer->addToolBar(Qt::TopToolBarArea, fileToolBar);
        viewToolBar = new QToolBar(Viewer);
        viewToolBar->setObjectName(QStringLiteral("viewToolBar"));
        Viewer->addToolBar(Qt::TopToolBarArea, viewToolBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menuPlayback->menuAction());
        menubar->addAction(menu_View->menuAction());
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Close);
        menu_View->addAction(actionShowLandmarks);
        menu_View->addAction(actionShowBBox);
        menu_View->addAction(actionShowIDs);
        menu_View->addAction(actionShowLabels);
        menuPlayback->addAction(actionPlay);
        menuPlayback->addAction(actionBackward);
        menuPlayback->addAction(actionForward);
        fileToolBar->addAction(action_Open);
        viewToolBar->addAction(actionShowLandmarks);
        viewToolBar->addAction(actionShowBBox);
        viewToolBar->addAction(actionShowIDs);
        viewToolBar->addAction(actionShowLabels);

        retranslateUi(Viewer);

        QMetaObject::connectSlotsByName(Viewer);
    } // setupUi

    void retranslateUi(QMainWindow *Viewer)
    {
        Viewer->setWindowTitle(QApplication::translate("Viewer", "Sequence Face Landmarks Viewer", Q_NULLPTR));
        action_Open->setText(QApplication::translate("Viewer", "&Open", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Open->setShortcut(QApplication::translate("Viewer", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Close->setText(QApplication::translate("Viewer", "&Close", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Close->setShortcut(QApplication::translate("Viewer", "Esc", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPlay->setText(QApplication::translate("Viewer", "&Play", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionPlay->setShortcut(QApplication::translate("Viewer", "Space", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionBackward->setText(QApplication::translate("Viewer", "&Backward", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionBackward->setShortcut(QApplication::translate("Viewer", "Left", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionForward->setText(QApplication::translate("Viewer", "&Forward", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionForward->setShortcut(QApplication::translate("Viewer", "Right", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowLandmarks->setText(QApplication::translate("Viewer", "Show Landmarks", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionShowLandmarks->setShortcut(QApplication::translate("Viewer", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowBBox->setText(QApplication::translate("Viewer", "Show Bounding Box", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionShowBBox->setShortcut(QApplication::translate("Viewer", "Ctrl+B", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowLabels->setText(QApplication::translate("Viewer", "Show Labels", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionShowLabels->setShortcut(QApplication::translate("Viewer", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowIDs->setText(QApplication::translate("Viewer", "Show IDs", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionShowIDs->setShortcut(QApplication::translate("Viewer", "Ctrl+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        display->setText(QString());
        curr_frame_lbl->setText(QApplication::translate("Viewer", "------", Q_NULLPTR));
        max_frame_lbl->setText(QApplication::translate("Viewer", "------", Q_NULLPTR));
        backward_btn->setText(QApplication::translate("Viewer", "...", Q_NULLPTR));
        play_pause_btn->setText(QApplication::translate("Viewer", "...", Q_NULLPTR));
        forward_btn->setText(QApplication::translate("Viewer", "...", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("Viewer", "&File", Q_NULLPTR));
        menu_View->setTitle(QApplication::translate("Viewer", "&View", Q_NULLPTR));
        menuPlayback->setTitle(QApplication::translate("Viewer", "&Playback", Q_NULLPTR));
        fileToolBar->setWindowTitle(QApplication::translate("Viewer", "toolBar", Q_NULLPTR));
        viewToolBar->setWindowTitle(QApplication::translate("Viewer", "toolBar_2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Viewer: public Ui_Viewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SFL_VIEWER_H
