#include <QtGui>
#include <QString>
#include <iostream>
#include <unistd.h>

#include "mainwindow.h"
#include "fileparser.h"


int main(int argv, char *args[])
{
	
    Q_INIT_RESOURCE(chemvp);

    QApplication app(argv, args);

    //Check for, and load an xyz file if requested
    QString cmd_line_arg;
    if(argv<=1){
    	cmd_line_arg = "";
    }else{
      cmd_line_arg=args[1];
      if(cmd_line_arg == "--help" || cmd_line_arg == "-h" || argv>2){
        std::cout<<"Usage: chemvp [coordfile]"<<std::endl<<"Where coordfile is an xyz file"<<std::endl;
        exit(EXIT_FAILURE);
      }else{
      }
    }

    //Use the file name (if any) to create a new parser object
    FileParser *parser = new FileParser(cmd_line_arg);
    QPixmap pixmap("../images/splash.png");
    pixmap = pixmap.scaled(QSize(500, 300), Qt::KeepAspectRatio);
    QSplashScreen splash(pixmap);
    splash.showMessage("Created by Andy Simmonett and Justin Turney,\nCenter for Computational Chemistry, University of Georgia");
    splash.show();
    MainWindow mainWindow(parser);
    mainWindow.setGeometry(30, 50, 1200, 700);
    mainWindow.showNormal();
    sleep(7);
    splash.finish(&mainWindow);    

    return app.exec();
}