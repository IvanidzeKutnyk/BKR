#ifndef ADD_NEWFILE_H
#define ADD_NEWFILE_H

#include <QWidget>
#include <QDialog>
#include <QDebug>
#include <QFileDialog>
namespace Ui {
class add_newFile;
}

class add_newFile : public QDialog
{
    Q_OBJECT

public:
    explicit add_newFile(QDialog *parent = nullptr);
    ~add_newFile();

private slots:
    void on_ExitButtom_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    QString _filename;
    QString _fileway;
    QString _filetype;
    Ui::add_newFile *ui;
signals:
    void CreatingNewFile(QString _name,QString _way,QString _type);
};

#endif // ADD_NEWFILE_H
