#ifndef RENAMEWINDOW_H
#define RENAMEWINDOW_H

#include <QDialog>

namespace Ui {
class RenameWindow;
}

class RenameWindow : public QDialog //класс переименования объекта
{
    Q_OBJECT

public:
    explicit RenameWindow(QWidget *parent = nullptr);
    ~RenameWindow();
    QString GetName();  //метод передачи имени

private slots:
    void on_btnOK_clicked();    // слот нажатия на "OK"

    void on_btnCancel_clicked();    // слот нажатия на "Cancel"

    void on_name_textEdited(const QString &arg1);   // слот получения имени объекта

private:
    Ui::RenameWindow *ui;   //указатель на объект соотв типа в классе основной формы
    QString name="";    //переменная для хранения нового имени выбранного файла
};

#endif // RENAMEWINDOW_H
