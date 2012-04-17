//---------------------------------------------------------------------------
#ifndef postoptH
#define postoptH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TOptDialog : public TForm
{
__published:
	TButton *BtnCancel;
	TButton *BtnOk;
	TOpenDialog *OpenDialog;
	TButton *BtnSave;
	TButton *BtnLoad;
	TLabel *Label5;
	TSaveDialog *SaveDialog;
	TPageControl *Misc;
	TTabSheet *TabSheet1;
	TLabel *Label3;
	TLabel *Label8;
	TLabel *LabelPosMode;
	TLabel *LabelFreq;
	TLabel *LabelSolution;
	TLabel *LabelElMask;
	TLabel *Label32;
	TLabel *Label35;
	TComboBox *DynamicModel;
	TComboBox *IonoOpt;
	TComboBox *TropOpt;
	TComboBox *PosMode;
	TComboBox *Freq;
	TComboBox *Solution;
	TComboBox *SatEphem;
	TEdit *ExSats;
	TCheckBox *NavSys1;
	TCheckBox *NavSys2;
	TCheckBox *NavSys3;
	TCheckBox *NavSys4;
	TTabSheet *TabSheet2;
	TLabel *Label25;
	TLabel *Label24;
	TLabel *Label13;
	TLabel *LabelHold;
	TLabel *Label22;
	TLabel *Label14;
	TLabel *Label11;
	TLabel *Label37;
	TComboBox *AmbRes;
	TEdit *ValidThresAR;
	TEdit *LockCntFixAmb;
	TEdit *OutCntResetAmb;
	TEdit *ElMaskAR;
	TEdit *SlipThres;
	TEdit *MaxAgeDiff;
	TEdit *RejectThres;
	TEdit *NumIter;
	TTabSheet *TabSheet3;
	TLabel *LabelSolFormat;
	TLabel *LabelTimeFormat;
	TLabel *LabelLatLonFormat;
	TLabel *LabelFieldSep;
	TLabel *Label2;
	TLabel *Label17;
	TLabel *Label18;
	TLabel *Label20;
	TLabel *Label36;
	TComboBox *SolFormat;
	TComboBox *TimeFormat;
	TComboBox *LatLonFormat;
	TEdit *FieldSep;
	TComboBox *OutputDatum;
	TComboBox *OutputHeight;
	TComboBox *OutputGeoid;
	TComboBox *OutputHead;
	TComboBox *OutputOpt;
	TComboBox *DebugTrace;
	TTabSheet *TabSheet4;
	TLabel *Label29;
	TGroupBox *GroupBox3;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label16;
	TEdit *MeasErrR1;
	TEdit *MeasErr2;
	TEdit *MeasErr3;
	TEdit *MeasErr4;
	TGroupBox *GroupBox4;
	TLabel *Label26;
	TLabel *Label27;
	TLabel *Label28;
	TEdit *PrNoise1;
	TEdit *PrNoise2;
	TEdit *PrNoise3;
	TEdit *SatClkStab;
	TTabSheet *TabSheet5;
	TLabel *Label4;
	TGroupBox *GroupRovAnt;
	TLabel *LabelRovAntD;
	TEdit *RovAntE;
	TEdit *RovAntN;
	TEdit *RovAntU;
	TEdit *RovPos1;
	TEdit *RovPos2;
	TEdit *RovPos3;
	TButton *BtnRovPos;
	TCheckBox *RovAntPcv;
	TComboBox *RovAnt;
	TComboBox *RovPosType;
	TGroupBox *GroupRefAnt;
	TLabel *LabelRefAntD;
	TEdit *RefAntE;
	TEdit *RefAntN;
	TEdit *RefAntU;
	TEdit *RefPos1;
	TEdit *RefPos2;
	TEdit *RefPos3;
	TButton *BtnRefPos;
	TCheckBox *RefAntPcv;
	TComboBox *RefAnt;
	TComboBox *RefPosType;
	TTabSheet *TabSheet7;
	TLabel *Label1;
	TSpeedButton *BtnAntPcvView;
	TLabel *Label38;
	TSpeedButton *BtnSatPcvView;
	TEdit *AntPcvFile;
	TButton *BtnAntPcvFile;
	TButton *BtnGoogleEarthFile;
	TEdit *GoogleEarthFile;
	TEdit *SatPcvFile;
	TButton *BtnSatPcvFile;
	TTabSheet *TabSheet6;
	TMemo *RovList;
	TLabel *Label19;
	TMemo *BaseList;
	TCheckBox *NavSys5;
	TLabel *Label63;
	TEdit *GeoidDataFile;
	TButton *BtnGeoidDataFile;
	TEdit *BaselineLen;
	TEdit *BaselineSig;
	TLabel *Label64;
	TEdit *MeasErr5;
	TCheckBox *BaselineConst;
	TLabel *Label10;
	TEdit *PrNoise4;
	TEdit *PrNoise5;
	TComboBox *DebugStatus;
	TLabel *Label33;
	TComboBox *GloAmbRes;
	TLabel *Label9;
	TEdit *TimeDecimal;
	TComboBox *TideCorr;
	TEdit *FixCntHoldAmb;
	TCheckBox *NavSys6;
	TLabel *Label15;
	TEdit *DCBFile;
	TButton *BtnDCBFile;
	TLabel *Label21;
	TEdit *NmeaIntv1;
	TEdit *NmeaIntv2;
	TSpeedButton *BtnDCBView;
	TLabel *Label31;
	TComboBox *SolStatic;
	TEdit *StaPosFile;
	TLabel *Label30;
	TSpeedButton *BtnStaPosView;
	TButton *BtnStaPosFile;
	TLabel *Label34;
	TEdit *OLFile;
	TSpeedButton *BtnOLFileView;
	TButton *BtnOLFile;
	TEdit *MeasErrR2;
	TEdit *ElMaskHold;
	TEdit *RejectGdop;
	TLabel *Label39;
	TLabel *Label40;
	TComboBox *IntpRefObs;
	TEdit *SbasSat;
	TLabel *Label41;
	TLabel *Label42;
	TComboBox *ComboBox1;
	TLabel *Label44;
	TLabel *Label45;
	TPanel *Panel1;
	TSpeedButton *SpeedButton1;
	TLabel *Label46;
	TLabel *Label62;
	TLabel *Label43;
	TLabel *Label65;
	TLabel *Label47;
	TEdit *IonoFile;
	TSpeedButton *BtnIonoView;
	TButton *BtnIonoFile;
	TComboBox *ElMask;
	TComboBox *SnrMask;
	void __fastcall BtnOkClick(TObject *Sender);
	void __fastcall RovAntPcvClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall BtnAntPcvFileClick(TObject *Sender);
	void __fastcall BtnGoogleEarthFileClick(TObject *Sender);
	void __fastcall BtnAntPcvViewClick(TObject *Sender);
	void __fastcall AmbResChange(TObject *Sender);
	void __fastcall NetRSCorrClick(TObject *Sender);
	void __fastcall SatClkCorrClick(TObject *Sender);
	void __fastcall PosModeChange(TObject *Sender);
	void __fastcall SolFormatChange(TObject *Sender);
	void __fastcall BtnLoadClick(TObject *Sender);
	void __fastcall BtnSaveClick(TObject *Sender);
	void __fastcall FreqChange(TObject *Sender);
	void __fastcall BtnRefPosClick(TObject *Sender);
	void __fastcall BtnRovPosClick(TObject *Sender);
	void __fastcall RovPosClick(TObject *Sender);
	void __fastcall RefPosClick(TObject *Sender);
	void __fastcall BtnStaPosViewClick(TObject *Sender);
	void __fastcall BtnStaPosFileClick(TObject *Sender);
	void __fastcall SbasCorrClick(TObject *Sender);
	void __fastcall OutputHeightClick(TObject *Sender);
	void __fastcall RefPosTypeChange(TObject *Sender);
	void __fastcall RovPosTypeChange(TObject *Sender);
	void __fastcall GetPos(int type, TEdit **edit, double *pos);
	void __fastcall SetPos(int type, TEdit **edit, double *pos);
	void __fastcall BtnSatPcvFileClick(TObject *Sender);
	void __fastcall BtnSatPcvViewClick(TObject *Sender);
	void __fastcall SatEphemClick(TObject *Sender);
	void __fastcall BtnGeoidDataFileClick(TObject *Sender);
	void __fastcall BaselineConstClick(TObject *Sender);
	void __fastcall NavSys2Click(TObject *Sender);
	void __fastcall IonoOptChange(TObject *Sender);
	void __fastcall TropOptChange(TObject *Sender);
	void __fastcall DynamicModelChange(TObject *Sender);
	void __fastcall SatEphemChange(TObject *Sender);
	void __fastcall RovAntClick(TObject *Sender);
	void __fastcall RefAntClick(TObject *Sender);
	void __fastcall BtnDCBViewClick(TObject *Sender);
	void __fastcall BtnDCBFileClick(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall BtnIonoViewClick(TObject *Sender);
	void __fastcall BtnIonoFileClick(TObject *Sender);
private:
	int RovPosTypeP,RefPosTypeP;
	void __fastcall GetOpt(void);
	void __fastcall SetOpt(void);
	void __fastcall LoadOpt(AnsiString file);
	void __fastcall SaveOpt(AnsiString file);
	void __fastcall ReadAntList(void);
	void __fastcall UpdateEnable(void);
public:
	__fastcall TOptDialog(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TOptDialog *OptDialog;
//---------------------------------------------------------------------------
#endif
