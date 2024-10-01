//---------------------------------------------------------------------------

#ifndef Unit19H
#define Unit19H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm19 : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TTabSheet *TabSheet4;
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
private:	// User declarations
public:		// User declarations
	__fastcall TForm19(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm19 *Form19;
//---------------------------------------------------------------------------
#endif
