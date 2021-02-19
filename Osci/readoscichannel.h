/******************************************************************************
**                                                                           **
**  Tektronix Plugin for LabAnlyser, control&visualize data of Tex Scopes.   **
**  Copyright (C) 2015-2021 Andreas Hoffmann                                 **
**                                                                           **
**  Tektronix Plugin is free software: you can redistribute it and/or modify **
**  it under the terms of the GNU General Public License as published by     **
**  the Free Software Foundation, either version 3 of the License, or        **
**  (at your option) any later version.                                      **
**                                                                           **
**  This program is distributed in the hope that it will be useful,          **
**  but WITHOUT ANY WARRANTY; without even the implied warranty of           **
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            **
**  GNU General Public License for more details.                             **
**                                                                           **
**  You should have received a copy of the GNU General Public License        **
**  along with this program.  If not, see http://www.gnu.org/licenses/.      **
**                                                                           **
*******************************************************************************
*******************************************************************************/

#pragma once
#include "../DataType/datastorage.h"
#include "TektronixClass.h"
#include "../Messenger/messengerclass.h"

class ReadOsciChannel
{
public:
    ReadOsciChannel(  QString DeviceName_, MessengerClass &messenger_, Tektronix &Osci_ ,  std::map<QString, DataStorage>& data);
    void ReadChannel(int Channel = 0);

private:
    std::map<QString, DataStorage> &m_data;
    QString DeviceName;
    Tektronix &Osci;
    MessengerClass &messenger;

};

