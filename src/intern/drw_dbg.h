/******************************************************************************
**  libDXFrw - Library to read/write DXF files (ascii & binary)              **
**                                                                           **
**  Copyright (C) 2011-2013 Rallaz, rallazz@gmail.com                        **
**                                                                           **
**  This library is free software, licensed under the terms of the GNU       **
**  General Public License as published by the Free Software Foundation,     **
**  either version 2 of the License, or (at your option) any later version.  **
**  You should have received a copy of the GNU General Public License        **
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.    **
******************************************************************************/

#ifndef DRW_DBG_H
#define DRW_DBG_H

#include <string>
#include <iostream>
//#include <iomanip>

#define DRW_DBGL(a) DRW_dbg::getInstance()->setLevel(a)
#define DRW_DBG(a) DRW_dbg::getInstance()->print(a)
#define DRW_DBGH(a) DRW_dbg::getInstance()->printH(a)
#define DRW_DBGB(a) DRW_dbg::getInstance()->printB(a)

//change to DRW_DBG
#define DBG(a) DRW_dbg::getInstance()->print(a)
#define DBGH(a) DRW_dbg::getInstance()->printH(a)

class print_none;

class DRW_dbg {
public:
    enum LEVEL {
        NONE,
        DEBUG
    };
    void setLevel(LEVEL lvl);
    static DRW_dbg *getInstance();
    void print(std::string s);
//    void print(long long int i);
    void print(double d);
    void printH(int i);
    void printB(int i);
private:
    DRW_dbg();
    static DRW_dbg *instance;
    LEVEL level;
    std::ios_base::fmtflags flags;
    print_none* prClass;
};


#endif // DRW_DBG_H
