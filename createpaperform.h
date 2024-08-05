#ifndef CREATEPAPERFORM_H
#define CREATEPAPERFORM_H

#include <QWidget>

namespace Ui {
class createPaperForm;
}

class createPaperForm : public QWidget
{
    Q_OBJECT

public:
    explicit createPaperForm(QWidget *parent = nullptr);
    ~createPaperForm();

private:
    Ui::createPaperForm *ui;
};

#endif // CREATEPAPERFORM_H
