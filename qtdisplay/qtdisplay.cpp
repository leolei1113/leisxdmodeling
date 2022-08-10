#include "qtdisplay.h"

qtdisplay::qtdisplay(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    QDockWidget* dockwidget = new QDockWidget(this);

    QTreeView* treeview = new QTreeView();

    dockwidget->setWidget(treeview);
    dockwidget->setTitleBarWidget(new QWidget());
    dockwidget->setFloating(false);
    addDockWidget(Qt::LeftDockWidgetArea, dockwidget);

    QDockWidget* dockmenu = new QDockWidget(this);
    QWidget* menuwidget = new QWidget();
    QVBoxLayout* menulay = new QVBoxLayout(menuwidget);

    //menu °´Å¥
    QHBoxLayout* basiclay = new QHBoxLayout();
    QPushButton* openbtn = new QPushButton("open");
    QPushButton* saveasbtn = new QPushButton("saveas");
    QPushButton* importbtn = new QPushButton("import");
    QPushButton* exportbtn = new QPushButton("export");
    QPushButton* undobtn = new QPushButton("undo");
    QPushButton* redobtn = new QPushButton("redo");
    QPushButton* testbtn = new QPushButton("test");

    basiclay->addWidget(openbtn);
    basiclay->addWidget(saveasbtn);
    basiclay->addWidget(importbtn);
    basiclay->addWidget(exportbtn);
    basiclay->addWidget(undobtn);
    basiclay->addWidget(redobtn);
    basiclay->addWidget(testbtn);

    QSpacerItem* item = new QSpacerItem(20, 20, QSizePolicy::Expanding);
    basiclay->addSpacerItem(item);

    //modify °´Å¥
    QHBoxLayout* modifylay = new QHBoxLayout();
	QPushButton* boolbtn = new QPushButton("bool");
	QPushButton* transformbtn = new QPushButton("transform");
	QPushButton* splitbtn = new QPushButton("split");
	QPushButton* assemblebtn = new QPushButton("assemble");
	QPushButton* fixbtn = new QPushButton("fix");
	QPushButton* removefacebtn = new QPushButton("removeface");

    QSpacerItem* itemmod = new QSpacerItem(20, 20, QSizePolicy::Expanding);

    modifylay->addWidget(boolbtn);
    modifylay->addWidget(transformbtn);
    modifylay->addWidget(splitbtn);
    modifylay->addWidget(assemblebtn);
    modifylay->addWidget(fixbtn);
    modifylay->addWidget(removefacebtn);

    menulay->addLayout(basiclay);
    menulay->addLayout(modifylay);
    dockmenu->setWidget(menuwidget);
    dockmenu->setTitleBarWidget(new QWidget());
    dockmenu->setFloating(false);
    addDockWidget(Qt::TopDockWidgetArea, dockmenu);

    m_itemmodel = new QStandardItemModel(m_treeview);
    m_itemmodel->setHorizontalHeaderLabels(QStringList() << QStringLiteral("PID"));
    m_treeview->setModel(m_itemmodel);

    QString exedir = QApplication::applicationDirPath();
    exedir += "/Shaders";

    //add occ env setting
    TCollection_AsciiString envsdvalue =
        TCollection_AsciiString((Standard_CString)exedir.toStdString().c_str());
    OSD_Environment asdr(TCollection_AsciiString("CSF_ShadersDirectory", envsdvalue));
    asdr.Build();

    //creating new document
    m_app = OccApplication::instance()->getApp();
    m_model = OccApplication::instance()->createNewDoc(m_docid);
    m_doc = m_model->getDoc();
    m_df = m_doc->GetData();
    m_rootlabel = m_df->Root();
    m_doc->SetUndoLimit(10);

    mvtkview = new 
}

qtdisplay::~qtdisplay()
{

}
