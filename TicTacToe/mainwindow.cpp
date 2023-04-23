#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool turn=false;
bool clicked1=false;
bool clicked2=false;
bool clicked3=false;
bool clicked4=false;
bool clicked5=false;
bool clicked6=false;
bool clicked7=false;
bool clicked8=false;
bool clicked9=false;

int winning_combinations[8][3] = {
    {0, 1, 2},  // rows
    {3, 4, 5},
    {6, 7, 8},
    {0, 3, 6},  // columns
    {1, 4, 7},
    {2, 5, 8},
    {0, 4, 8},  // diagonals
    {2, 4, 6}
};



void MainWindow::check()
{
    QString buttonText1 = ui->pushButton->text();
    QString buttonText2 = ui->pushButton_2->text();
    QString buttonText3 = ui->pushButton_3->text();
    QString buttonText4 = ui->pushButton_4->text();
    QString buttonText5 = ui->pushButton_5->text();
    QString buttonText6 = ui->pushButton_6->text();
    QString buttonText7 = ui->pushButton_7->text();
    QString buttonText8 = ui->pushButton_8->text();
    QString buttonText9 = ui->pushButton_9->text();
    QString tic[9] = { buttonText1, buttonText2, buttonText3, buttonText4, buttonText5, buttonText6, buttonText7, buttonText8, buttonText9 };
    bool foundWinner = false;
    for(int i=0;i<8 && !foundWinner;i++){
        if(tic[winning_combinations[i][0]]==tic[winning_combinations[i][1]]&&tic[winning_combinations[i][2]]==tic[winning_combinations[i][1]]&&!tic[winning_combinations[i][1]].isEmpty()){
            QMessageBox::warning(this, tr("Alert"), tr("player has won!"));
            foundWinner = true;
        }
    }
}





void MainWindow::on_pushButton_clicked()
{
    if(turn && !clicked1){
        ui->pushButton->setText("X");
        clicked1=true;
    }
    else if(!clicked1){
        ui->pushButton->setText("O");
        clicked1=true;
    }
    turn=!turn;
    check();
}


void MainWindow::on_pushButton_2_clicked()
{
    if(turn && !clicked2){
        ui->pushButton_2->setText("X");
        clicked2=true;
    }
    else if(!clicked2){
        ui->pushButton_2->setText("O");
        clicked2=true;
    }
    turn=!turn;
    check();
}


void MainWindow::on_pushButton_3_clicked()
{
    if(turn && !clicked3){
        ui->pushButton_3->setText("X");
        clicked3=true;
    }
    else if(!clicked3){
        ui->pushButton_3->setText("O");
        clicked3=true;
    }
    turn=!turn;
    check();
}


void MainWindow::on_pushButton_4_clicked()
{
    if(turn && !clicked4){
        ui->pushButton_4->setText("X");
        clicked4=true;
    }
    else if(!clicked4){
        ui->pushButton_4->setText("O");
        clicked4=true;
    }
    turn=!turn;
    check();
}



void MainWindow::on_pushButton_5_clicked()
{
    if(turn && !clicked5){
        ui->pushButton_5->setText("X");
        clicked5=true;
    }
    else if(!clicked5){
        ui->pushButton_5->setText("O");
        clicked5=true;
    }
    turn=!turn;
    check();
}


void MainWindow::on_pushButton_6_clicked()
{
    if(turn && !clicked6){
        ui->pushButton_6->setText("X");
        clicked6=true;
    }
    else if(!clicked6){
        ui->pushButton_6->setText("O");
        clicked6=true;
    }
    turn=!turn;
    check();
}


void MainWindow::on_pushButton_7_clicked()
{
    if(turn && !clicked7){
        ui->pushButton_7->setText("X");
        clicked7=true;
    }
    else if(!clicked7){
        ui->pushButton_7->setText("O");
        clicked7=true;
    }
    turn=!turn;
    check();
}




void MainWindow::on_pushButton_8_clicked()
{
    if(turn && !clicked8){
        ui->pushButton_8->setText("X");
        clicked8=true;
    }
    else if(!clicked8){
        ui->pushButton_8->setText("O");
        clicked8=true;
    }
    turn=!turn;
    check();
}



void MainWindow::on_pushButton_9_clicked()
{
    if(turn && !clicked9){
        ui->pushButton_9->setText("X");
        clicked9=true;
    }
    else if(!clicked9){
        ui->pushButton_9->setText("O");
        clicked9=true;
    }
    turn=!turn;
    check();
}



