#include <wx/wx.h>
#include <iostream>
#include <string.h>
using namespace std;

class GridSizer : public wxFrame
{
public:
  GridSizer(const wxString& title);
  wxBoxSizer *sizer;
  wxGridSizer *gs;
  wxTextCtrl *display;
  
  void onCls (wxCommandEvent&);
  void onBt0 (wxCommandEvent&);
  void onBt1 (wxCommandEvent&);
  void onBt2 (wxCommandEvent&);
  void onBt3(wxCommandEvent&);
  void onBt4(wxCommandEvent&);
  void onBt5(wxCommandEvent&);
  void onBt6(wxCommandEvent&);
  void onBt7(wxCommandEvent&);
  void onBt8(wxCommandEvent&);
  void onBt9(wxCommandEvent&);
  void onBtIgu(wxCommandEvent&);
  void onBtSum (wxCommandEvent&);
  void onBtMul(wxCommandEvent&);
  void onBtDiv(wxCommandEvent&);
  void onBtRes(wxCommandEvent&);
  void onBtClo(wxCommandEvent&);
  void onBtBac(wxCommandEvent&);
  void onBtPoi(wxCommandEvent&);
private:
  string texto1;
  string texto2;
  string valor1;
  string valor2;
  string operando;
  int operando1;
  int operando2;
  int nClicks;
  float total;
  	
  DECLARE_EVENT_TABLE()
};
