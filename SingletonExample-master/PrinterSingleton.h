https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
//
// Created by mark on 1/29/20.
//

#include "PrinterManager.h"
#include <string>

#ifndef SINGLETONPATTERN_PRINTERSINGLETON_H
#define SINGLETONPATTERN_PRINTERSINGLETON_H

class PrinterSingleton {
private:

    static PrinterManager* theManager;
    PrinterSingleton() = default;

public:

    static PrinterManager* getPrinterManager() {
        if(theManager == nullptr)
            theManager = new PrinterManager("NotBob");

        return theManager;
    }
};

PrinterManager* PrinterSingleton::theManager = nullptr;

#endif //SINGLETONPATTERN_PRINTERSINGLETON_H
