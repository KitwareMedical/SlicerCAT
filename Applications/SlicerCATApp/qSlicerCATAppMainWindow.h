/*==============================================================================

  Copyright (c) Kitware, Inc.

  See http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware, Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qSlicerCATAppMainWindow_h
#define __qSlicerCATAppMainWindow_h

// SlicerCAT includes
#include "qSlicerCATAppExport.h"
class qSlicerCATAppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_SLICERCAT_APP_EXPORT qSlicerCATAppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qSlicerCATAppMainWindow(QWidget *parent=0);
  virtual ~qSlicerCATAppMainWindow();

public slots:
  void on_HelpAboutSlicerCATAppAction_triggered();

protected:
  qSlicerCATAppMainWindow(qSlicerCATAppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qSlicerCATAppMainWindow);
  Q_DISABLE_COPY(qSlicerCATAppMainWindow);
};

#endif
