https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
//
// Created by mark on 1/29/20.
//

#include <string>
#include <iostream>
using std::cout;
using std::endl;


#ifndef SINGLETONPATTERN_PRINTERMANAGER_H
#define SINGLETONPATTERN_PRINTERMANAGER_H

class PrinterManager {
private:
    std::string printerManagerName;

public:
    PrinterManager(){
        printerManagerName = "Bob the Printer";
        cout << "Constructing Printer Object: " << printerManagerName << endl;
    }

    explicit PrinterManager(const std::string& n) {
        printerManagerName = n;
        cout << "Constructing Printer Object: " << printerManagerName << endl;
    }

    void doPrint() {
        cout << "This is from printer manager named: "
             << printerManagerName << endl;
    }
};


#endif //SINGLETONPATTERN_PRINTERMANAGER_H
