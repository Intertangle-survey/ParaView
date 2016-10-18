/*=========================================================================

  Program:   ParaView
  Module:    vtkPVConnectivityFilter.h

  Copyright (c) Kitware, Inc.
  All rights reserved.
  See Copyright.txt or http://www.paraview.org/HTML/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
/**
 * @class   vtkPVConnectivityFilter
 * @brief   change the defaults for vtkConnectivityFilter
 *
 * vtkPVConnectivityFilter is a subclass of vtkConnectivityFilter.  It
 * changes the default settings.  We want different defaults than
 * vtkConnectivityFilter has, but we don't want the user to have access to
 * these parameters in the UI.
*/

#ifndef vtkPVConnectivityFilter_h
#define vtkPVConnectivityFilter_h

#include "vtkConnectivityFilter.h"
#include "vtkPVVTKExtensionsDefaultModule.h" //needed for exports

class VTKPVVTKEXTENSIONSDEFAULT_EXPORT vtkPVConnectivityFilter : public vtkConnectivityFilter
{
public:
  vtkTypeMacro(vtkPVConnectivityFilter, vtkConnectivityFilter);
  void PrintSelf(ostream& os, vtkIndent indent);

  static vtkPVConnectivityFilter* New();

protected:
  vtkPVConnectivityFilter();
  ~vtkPVConnectivityFilter(){};

private:
  vtkPVConnectivityFilter(const vtkPVConnectivityFilter&) VTK_DELETE_FUNCTION;
  void operator=(const vtkPVConnectivityFilter&) VTK_DELETE_FUNCTION;
};

#endif
