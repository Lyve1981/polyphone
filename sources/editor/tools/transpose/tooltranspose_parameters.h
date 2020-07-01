/***************************************************************************
**                                                                        **
**  Polyphone, a soundfont editor                                         **
**  Copyright (C) 2013-2020 Davy Triponney                                **
**                                                                        **
**  This program is free software: you can redistribute it and/or modify  **
**  it under the terms of the GNU General Public License as published by  **
**  the Free Software Foundation, either version 3 of the License, or     **
**  (at your option) any later version.                                   **
**                                                                        **
**  This program is distributed in the hope that it will be useful,       **
**  but WITHOUT ANY WARRANTY; without even the implied warranty of        **
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the          **
**  GNU General Public License for more details.                          **
**                                                                        **
**  You should have received a copy of the GNU General Public License     **
**  along with this program. If not, see http://www.gnu.org/licenses/.    **
**                                                                        **
****************************************************************************
**           Author: Davy Triponney                                       **
**  Website/Contact: https://www.polyphone-soundfonts.com                 **
**             Date: 01.01.2013                                           **
***************************************************************************/

#ifndef TOOLTRANSPOSE_PARAMETERS_H
#define TOOLTRANSPOSE_PARAMETERS_H

#include "abstracttoolparameters.h"

class ToolTranspose_parameters: public AbstractToolParameters
{
public:
    /// Load the configuration from the ini file
    void loadConfiguration() override;

    /// Save the configuration in the ini file
    void saveConfiguration() override;
    
    double getSemiTones() { return _semiTones; }
    void setSemiTones(double semiTones) { _semiTones = semiTones; }
    
    bool getAdaptKeyRanges() { return _adaptKeyRanges; }
    void setAdaptKeyRanges(bool adaptKeyRanges) { _adaptKeyRanges = adaptKeyRanges; }
    
private:
    double _semiTones;
    bool _adaptKeyRanges;
};

#endif // TOOLTRANSPOSE_PARAMETERS_H
