#ifndef CHANGEREADER_H
#define CHANGEREADER_H

#include "dialogaddreader.h"
namespace Ui {
class DialogAddReader;
}

class changeReader : public DialogAddReader
{
public:
    changeReader();
public slots:
    void initValue();
};

#endif // CHANGEREADER_H
