#include "formstart.h"
#include "formunitselect.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    FormStart w;
//    w.show();
    FormUnitSelect form_unit_select;
    form_unit_select.show();

    return a.exec();
}
