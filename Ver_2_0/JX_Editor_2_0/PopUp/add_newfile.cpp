#include "add_newfile.h"
#include "ui_add_newfile.h"

add_newFile::add_newFile(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::add_newFile)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::CustomizeWindowHint);
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->comboBox->addItem(".json",QVariant(1));
    ui->comboBox->addItem(".xml",QVariant(2));
    this->setModal(true);
}

add_newFile::~add_newFile()
{
    delete ui;
}

void add_newFile::on_ExitButtom_clicked()
{
    this->close();
    ui->FileWay->clear();
    ui->NameFile->clear();
}


void add_newFile::on_pushButton_clicked()
{
    qDebug()<<ui->NameFile->text();
    qDebug()<<ui->FileWay->text();
    if(ui->NameFile->text().isEmpty() || ui->NameFile->text() == "Please Write name")
    {
        ui->NameFile->clear();
        ui->NameFile->setText("Please Write name");
    }
    if(ui->FileWay->text().isEmpty() || ui->FileWay->text() == "Please Choose way")
    {
        ui->FileWay->clear();
        ui->FileWay->setText("Please Choose way");
    }
    else
    {
        this->_filename = ui->NameFile->text();
        this->_filetype = ui->comboBox->currentText();
        this->close();
        ui->FileWay->clear();
        ui->NameFile->clear();
        emit CreatingNewFile(_filename,_fileway,_filetype);

    }
}


void add_newFile::on_pushButton_2_clicked()
{
    ui->FileWay->clear();
    QString _name = QFileDialog :: getExistingDirectory( this , tr( "Open Directory" ) ," ", QFileDialog :: ShowDirsOnly | QFileDialog :: DontResolveSymlinks);
    ui->FileWay->setText(_name);
    this->_fileway = _name;
}

