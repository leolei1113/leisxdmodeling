#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qtdisplay.h"
#include "OccApplication.h"
#include "OccModel.h"

#include <QDockWidget>
#include <QTreeView>
#include <QVBoxLayout>
#include <QPushButton>
#include <QSizePolicy>
#include <QStandardItemModel>

#include <TCollection_AsciiString.hxx>
#include <OSD_Environment.hxx>
#include <TDocStd_Application.hxx>
#include <TDF_Data.hxx>
#include <TDocStd_Document.hxx>




class qtdisplay : public QMainWindow
{
    Q_OBJECT

public:
    qtdisplay(QWidget *parent = nullptr);
    ~qtdisplay();

private:
    Ui::qtdisplayClass ui;

    QStandardItemModel* m_itemmodel;
    QTreeView* m_treeview;
    TDocStd_Application* m_app;
    int                 m_docid = -1;
    OccModel* m_model;
    Handle(TDocStd_Document) m_doc;
    Handle(TDF_Data) m_df;
    TDF_Label m_rootlabel;
};
