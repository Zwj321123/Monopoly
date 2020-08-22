#pragma once
//////////////////////////////////////////
//				MyForm.h				//
//			author: Wenjun Zeng			//
//			ID: 1715534					//
//			window form of the game		//
//////////////////////////////////////////
#include "dice.h"
#include "player.h"
#include <windows.h>
#include "asset.h"
#include <vector>
#include "Form_win.h"
#include "Form_lose.h"
namespace Project1 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	dice Dice1 = dice(6, 1);
	dice Dice2 = dice(2, 1);
	dice Dice3 = dice(3, 1);
	dice Dice4 = dice(300, 10);

	//two playerS(the user and computer)
	player Player_1 = player(2000, 22, 5, 22, 5, 51, 47, 532, 428, 0);
	player Player_2 = player(2000, 5, 4, 5, 4, 53, 47, 535, 427, 0);

	//each asset refers to a block
	/*
	asset asset0 = asset(0, 0, 0);			//start
	asset asset1 = asset(1, 100, 0);
	asset asset2 = asset(2, 10, 0);
	asset asset3 = asset(3, 200, 0);
	asset asset4 = asset(4, 150, 0);
	asset asset5 = asset(5, 250, 0);
	asset asset6 = asset(6, 10, 0);
	asset asset7 = asset(7, 200, 0);
	asset asset8 = asset(8, 300, 0);
	asset asset9 = asset(9, 150, 0);
	asset asset10 = asset(10, 250, 0);
	asset asset11 = asset(11, 100, 0);
	asset asset12 = asset(12, 10, 0);
	asset asset13 = asset(13, 200, 0);
	asset asset14 = asset(14, 50, 0);
	asset asset15 = asset(15, 10, 0);
	asset asset16 = asset(16, 300, 0);
	asset asset17 = asset(17, 50, 0);
	asset asset18 = asset(18, 150, 0);
	asset asset19 = asset(19, 0, 0);		//JAIL
	asset asset20 = asset(20, 100, 0);
	asset asset21 = asset(21, 200, 0);
	asset asset22 = asset(22, 10, 0);
	asset asset23 = asset(23, 300, 0);
	asset asset24 = asset(24, 10, 0);
	asset asset25 = asset(25, 150, 0);
	asset asset26 = asset(26, 50, 0);
	asset asset27 = asset(27, 200, 0);
	asset asset28 = asset(28, 250, 0);
	asset asset29 = asset(29, 50, 0);
	asset asset30 = asset(30, 150, 0);
	asset asset31 = asset(31, 10, 0);
	asset asset32 = asset(32, 200, 0);
	asset asset33 = asset(33, 300, 0);
	asset asset34 = asset(34, 10, 0);
	asset asset35 = asset(35, 250, 0);
	asset asset36 = asset(36, 50, 0);
	asset asset37 = asset(37, 100, 0);
	*/
	asset asset0 = asset(0, 0, 0);			//start
	asset asset1 = asset(1, Dice4.get_dice(), 0);
	asset asset2 = asset(2, Dice4.get_dice(), 0);
	asset asset3 = asset(3, Dice4.get_dice(), 0);
	asset asset4 = asset(4, Dice4.get_dice(), 0);
	asset asset5 = asset(5, Dice4.get_dice(), 0);
	asset asset6 = asset(6, Dice4.get_dice(), 0);
	asset asset7 = asset(7, Dice4.get_dice(), 0);
	asset asset8 = asset(8, Dice4.get_dice(), 0);
	asset asset9 = asset(9, Dice4.get_dice(), 0);
	asset asset10 = asset(10, Dice4.get_dice(), 0);
	asset asset11 = asset(11, Dice4.get_dice(), 0);
	asset asset12 = asset(12, Dice4.get_dice(), 0);
	asset asset13 = asset(13, Dice4.get_dice(), 0);
	asset asset14 = asset(14, Dice4.get_dice(), 0);
	asset asset15 = asset(15, Dice4.get_dice(), 0);
	asset asset16 = asset(16, Dice4.get_dice(), 0);
	asset asset17 = asset(17, Dice4.get_dice(), 0);
	asset asset18 = asset(18, Dice4.get_dice(), 0);
	asset asset19 = asset(19, 0, 0);		//JAIL
	asset asset20 = asset(20, Dice4.get_dice(), 0);
	asset asset21 = asset(21, Dice4.get_dice(), 0);
	asset asset22 = asset(22, Dice4.get_dice(), 0);
	asset asset23 = asset(23, Dice4.get_dice(), 0);
	asset asset24 = asset(24, Dice4.get_dice(), 0);
	asset asset25 = asset(25, Dice4.get_dice(), 0);
	asset asset26 = asset(26, Dice4.get_dice(), 0);
	asset asset27 = asset(27, Dice4.get_dice(), 0);
	asset asset28 = asset(28, Dice4.get_dice(), 0);
	asset asset29 = asset(29, Dice4.get_dice(), 0);
	asset asset30 = asset(30, Dice4.get_dice(), 0);
	asset asset31 = asset(31, Dice4.get_dice(), 0);
	asset asset32 = asset(32, Dice4.get_dice(), 0);
	asset asset33 = asset(33, Dice4.get_dice(), 0);
	asset asset34 = asset(34, Dice4.get_dice(), 0);
	asset asset35 = asset(35, Dice4.get_dice(), 0);
	asset asset36 = asset(36, Dice4.get_dice(), 0);
	asset asset37 = asset(37, Dice4.get_dice(), 0);
	bool is_Occupied;
	bool is_Occupied2;
	bool Buy = false;
	bool is_invested;
	int next_round = 0;
	int next_round2 = 0;
	vector<int> Vec_Owned;
	vector<int> Vec_Occupied;
	vector<asset> Vec_asset;
	/*
	asset2, asset3, asset4, asset5, asset6, asset7, asset8, asset9, asset10,
	asset11, asset12, asset13, asset14, asset15, asset16, asset17, asset18,asset19, asset20,
	asset31, asset32, asset33, asset34, asset35, asset36, asset37
	*/
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::PictureBox^ player2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox40;
	private: System::Windows::Forms::PictureBox^ pictureBox39;
	private: System::Windows::Forms::PictureBox^ pictureBox38;
	private: System::Windows::Forms::PictureBox^ pictureBox37;
	private: System::Windows::Forms::PictureBox^ pictureBox36;
	private: System::Windows::Forms::PictureBox^ pictureBox35;
	private: System::Windows::Forms::PictureBox^ pictureBox34;
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::PictureBox^ pictureBox28;
	private: System::Windows::Forms::PictureBox^ pictureBox27;
	private: System::Windows::Forms::PictureBox^ pictureBox26;
	private: System::Windows::Forms::PictureBox^ pictureBox25;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox76;
	private: System::Windows::Forms::PictureBox^ pictureBox75;
	private: System::Windows::Forms::PictureBox^ pictureBox74;
	private: System::Windows::Forms::PictureBox^ pictureBox73;
	private: System::Windows::Forms::PictureBox^ pictureBox72;
	private: System::Windows::Forms::PictureBox^ pictureBox71;
	private: System::Windows::Forms::PictureBox^ pictureBox70;
	private: System::Windows::Forms::PictureBox^ pictureBox69;
	private: System::Windows::Forms::PictureBox^ pictureBox68;
	private: System::Windows::Forms::PictureBox^ pictureBox67;
	private: System::Windows::Forms::PictureBox^ pictureBox66;
	private: System::Windows::Forms::PictureBox^ pictureBox65;
	private: System::Windows::Forms::PictureBox^ pictureBox64;
	private: System::Windows::Forms::PictureBox^ pictureBox63;
	private: System::Windows::Forms::PictureBox^ pictureBox62;
	private: System::Windows::Forms::PictureBox^ pictureBox61;
	private: System::Windows::Forms::PictureBox^ pictureBox60;
	private: System::Windows::Forms::PictureBox^ pictureBox59;
	private: System::Windows::Forms::PictureBox^ pictureBox58;
	private: System::Windows::Forms::PictureBox^ pictureBox57;
	private: System::Windows::Forms::PictureBox^ pictureBox56;
	private: System::Windows::Forms::PictureBox^ pictureBox55;
	private: System::Windows::Forms::PictureBox^ pictureBox54;
	private: System::Windows::Forms::PictureBox^ pictureBox53;
	private: System::Windows::Forms::PictureBox^ pictureBox52;
	private: System::Windows::Forms::PictureBox^ pictureBox51;
	private: System::Windows::Forms::PictureBox^ pictureBox50;
	private: System::Windows::Forms::PictureBox^ pictureBox49;
	private: System::Windows::Forms::PictureBox^ pictureBox48;
	private: System::Windows::Forms::PictureBox^ pictureBox47;
	private: System::Windows::Forms::PictureBox^ pictureBox46;
	private: System::Windows::Forms::PictureBox^ pictureBox45;
	private: System::Windows::Forms::PictureBox^ pictureBox44;
	private: System::Windows::Forms::PictureBox^ pictureBox43;
	private: System::Windows::Forms::PictureBox^ pictureBox42;
	private: System::Windows::Forms::PictureBox^ pictureBox41;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Label^ label15;

	




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->player2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox76 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox75 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox74 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox73 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Adobe Naskh Medium", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(651, -3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(534, 83);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Dragon Maid VS Thrombocyte";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->player2);
			this->panel1->Controls->Add(this->pictureBox76);
			this->panel1->Controls->Add(this->pictureBox75);
			this->panel1->Controls->Add(this->pictureBox74);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->pictureBox73);
			this->panel1->Controls->Add(this->pictureBox72);
			this->panel1->Controls->Add(this->pictureBox71);
			this->panel1->Controls->Add(this->pictureBox70);
			this->panel1->Controls->Add(this->pictureBox69);
			this->panel1->Controls->Add(this->pictureBox68);
			this->panel1->Controls->Add(this->pictureBox67);
			this->panel1->Controls->Add(this->pictureBox66);
			this->panel1->Controls->Add(this->pictureBox65);
			this->panel1->Controls->Add(this->pictureBox64);
			this->panel1->Controls->Add(this->pictureBox63);
			this->panel1->Controls->Add(this->pictureBox62);
			this->panel1->Controls->Add(this->pictureBox61);
			this->panel1->Controls->Add(this->pictureBox60);
			this->panel1->Controls->Add(this->pictureBox59);
			this->panel1->Controls->Add(this->pictureBox58);
			this->panel1->Controls->Add(this->pictureBox57);
			this->panel1->Controls->Add(this->pictureBox56);
			this->panel1->Controls->Add(this->pictureBox55);
			this->panel1->Controls->Add(this->pictureBox54);
			this->panel1->Controls->Add(this->pictureBox53);
			this->panel1->Controls->Add(this->pictureBox52);
			this->panel1->Controls->Add(this->pictureBox51);
			this->panel1->Controls->Add(this->pictureBox50);
			this->panel1->Controls->Add(this->pictureBox49);
			this->panel1->Controls->Add(this->pictureBox48);
			this->panel1->Controls->Add(this->pictureBox47);
			this->panel1->Controls->Add(this->pictureBox46);
			this->panel1->Controls->Add(this->pictureBox45);
			this->panel1->Controls->Add(this->pictureBox44);
			this->panel1->Controls->Add(this->pictureBox43);
			this->panel1->Controls->Add(this->pictureBox42);
			this->panel1->Controls->Add(this->pictureBox41);
			this->panel1->Controls->Add(this->pictureBox40);
			this->panel1->Controls->Add(this->pictureBox39);
			this->panel1->Controls->Add(this->pictureBox38);
			this->panel1->Controls->Add(this->pictureBox37);
			this->panel1->Controls->Add(this->pictureBox36);
			this->panel1->Controls->Add(this->pictureBox35);
			this->panel1->Controls->Add(this->pictureBox34);
			this->panel1->Controls->Add(this->pictureBox33);
			this->panel1->Controls->Add(this->pictureBox32);
			this->panel1->Controls->Add(this->pictureBox31);
			this->panel1->Controls->Add(this->pictureBox30);
			this->panel1->Controls->Add(this->pictureBox29);
			this->panel1->Controls->Add(this->pictureBox28);
			this->panel1->Controls->Add(this->pictureBox27);
			this->panel1->Controls->Add(this->pictureBox26);
			this->panel1->Controls->Add(this->pictureBox25);
			this->panel1->Controls->Add(this->pictureBox24);
			this->panel1->Controls->Add(this->pictureBox23);
			this->panel1->Controls->Add(this->pictureBox22);
			this->panel1->Controls->Add(this->pictureBox21);
			this->panel1->Controls->Add(this->pictureBox20);
			this->panel1->Controls->Add(this->pictureBox19);
			this->panel1->Controls->Add(this->pictureBox18);
			this->panel1->Controls->Add(this->pictureBox17);
			this->panel1->Controls->Add(this->pictureBox16);
			this->panel1->Controls->Add(this->pictureBox15);
			this->panel1->Controls->Add(this->pictureBox14);
			this->panel1->Controls->Add(this->pictureBox13);
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Controls->Add(this->pictureBox11);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(480, 83);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(855, 704);
			this->panel1->TabIndex = 1;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Adobe Arabic", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(254, 201);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(29, 48);
			this->label15->TabIndex = 77;
			this->label15->Text = L" ";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(33, 8);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(44, 57);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::PictureBox2_Click);
			// 
			// player2
			// 
			this->player2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player2.Image")));
			this->player2->Location = System::Drawing::Point(8, 6);
			this->player2->Name = L"player2";
			this->player2->Size = System::Drawing::Size(34, 50);
			this->player2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player2->TabIndex = 2;
			this->player2->TabStop = false;
			this->player2->Click += gcnew System::EventHandler(this, &MyForm::Player2_Click);
			// 
			// pictureBox76
			// 
			this->pictureBox76->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox76.Image")));
			this->pictureBox76->Location = System::Drawing::Point(0, 90);
			this->pictureBox76->Name = L"pictureBox76";
			this->pictureBox76->Size = System::Drawing::Size(54, 43);
			this->pictureBox76->TabIndex = 76;
			this->pictureBox76->TabStop = false;
			this->pictureBox76->Visible = false;
			// 
			// pictureBox75
			// 
			this->pictureBox75->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox75.Image")));
			this->pictureBox75->Location = System::Drawing::Point(0, 152);
			this->pictureBox75->Name = L"pictureBox75";
			this->pictureBox75->Size = System::Drawing::Size(54, 49);
			this->pictureBox75->TabIndex = 75;
			this->pictureBox75->TabStop = false;
			this->pictureBox75->Visible = false;
			// 
			// pictureBox74
			// 
			this->pictureBox74->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox74.Image")));
			this->pictureBox74->Location = System::Drawing::Point(0, 221);
			this->pictureBox74->Name = L"pictureBox74";
			this->pictureBox74->Size = System::Drawing::Size(54, 50);
			this->pictureBox74->TabIndex = 74;
			this->pictureBox74->TabStop = false;
			this->pictureBox74->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Adobe Arabic", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(294, 134);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(21, 35);
			this->label11->TabIndex = 77;
			this->label11->Text = L" ";
			// 
			// pictureBox73
			// 
			this->pictureBox73->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox73.Image")));
			this->pictureBox73->Location = System::Drawing::Point(0, 294);
			this->pictureBox73->Name = L"pictureBox73";
			this->pictureBox73->Size = System::Drawing::Size(54, 45);
			this->pictureBox73->TabIndex = 73;
			this->pictureBox73->TabStop = false;
			this->pictureBox73->Visible = false;
			// 
			// pictureBox72
			// 
			this->pictureBox72->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox72.Image")));
			this->pictureBox72->Location = System::Drawing::Point(0, 364);
			this->pictureBox72->Name = L"pictureBox72";
			this->pictureBox72->Size = System::Drawing::Size(54, 49);
			this->pictureBox72->TabIndex = 72;
			this->pictureBox72->TabStop = false;
			this->pictureBox72->Visible = false;
			// 
			// pictureBox71
			// 
			this->pictureBox71->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox71.Image")));
			this->pictureBox71->Location = System::Drawing::Point(0, 435);
			this->pictureBox71->Name = L"pictureBox71";
			this->pictureBox71->Size = System::Drawing::Size(54, 48);
			this->pictureBox71->TabIndex = 71;
			this->pictureBox71->TabStop = false;
			this->pictureBox71->Visible = false;
			// 
			// pictureBox70
			// 
			this->pictureBox70->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox70.Image")));
			this->pictureBox70->Location = System::Drawing::Point(0, 504);
			this->pictureBox70->Name = L"pictureBox70";
			this->pictureBox70->Size = System::Drawing::Size(54, 49);
			this->pictureBox70->TabIndex = 70;
			this->pictureBox70->TabStop = false;
			this->pictureBox70->Visible = false;
			// 
			// pictureBox69
			// 
			this->pictureBox69->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox69.Image")));
			this->pictureBox69->Location = System::Drawing::Point(0, 573);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(54, 51);
			this->pictureBox69->TabIndex = 69;
			this->pictureBox69->TabStop = false;
			this->pictureBox69->Visible = false;
			// 
			// pictureBox68
			// 
			this->pictureBox68->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox68.Image")));
			this->pictureBox68->Location = System::Drawing::Point(8, 658);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(54, 46);
			this->pictureBox68->TabIndex = 68;
			this->pictureBox68->TabStop = false;
			this->pictureBox68->Visible = false;
			// 
			// pictureBox67
			// 
			this->pictureBox67->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox67.Image")));
			this->pictureBox67->Location = System::Drawing::Point(92, 658);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(53, 46);
			this->pictureBox67->TabIndex = 67;
			this->pictureBox67->TabStop = false;
			this->pictureBox67->Visible = false;
			// 
			// pictureBox66
			// 
			this->pictureBox66->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.Image")));
			this->pictureBox66->Location = System::Drawing::Point(171, 658);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(48, 46);
			this->pictureBox66->TabIndex = 66;
			this->pictureBox66->TabStop = false;
			this->pictureBox66->Visible = false;
			// 
			// pictureBox65
			// 
			this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.Image")));
			this->pictureBox65->Location = System::Drawing::Point(246, 658);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(56, 46);
			this->pictureBox65->TabIndex = 65;
			this->pictureBox65->TabStop = false;
			this->pictureBox65->Visible = false;
			// 
			// pictureBox64
			// 
			this->pictureBox64->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox64.Image")));
			this->pictureBox64->Location = System::Drawing::Point(325, 658);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(50, 46);
			this->pictureBox64->TabIndex = 64;
			this->pictureBox64->TabStop = false;
			this->pictureBox64->Visible = false;
			// 
			// pictureBox63
			// 
			this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox63.Image")));
			this->pictureBox63->Location = System::Drawing::Point(404, 658);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(52, 46);
			this->pictureBox63->TabIndex = 63;
			this->pictureBox63->TabStop = false;
			this->pictureBox63->Visible = false;
			// 
			// pictureBox62
			// 
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(481, 658);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(46, 46);
			this->pictureBox62->TabIndex = 62;
			this->pictureBox62->TabStop = false;
			this->pictureBox62->Visible = false;
			// 
			// pictureBox61
			// 
			this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox61.Image")));
			this->pictureBox61->Location = System::Drawing::Point(554, 658);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(51, 46);
			this->pictureBox61->TabIndex = 61;
			this->pictureBox61->TabStop = false;
			this->pictureBox61->Visible = false;
			// 
			// pictureBox60
			// 
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(631, 658);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(56, 46);
			this->pictureBox60->TabIndex = 60;
			this->pictureBox60->TabStop = false;
			this->pictureBox60->Visible = false;
			// 
			// pictureBox59
			// 
			this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.Image")));
			this->pictureBox59->Location = System::Drawing::Point(709, 658);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(52, 46);
			this->pictureBox59->TabIndex = 59;
			this->pictureBox59->TabStop = false;
			this->pictureBox59->Visible = false;
			// 
			// pictureBox58
			// 
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(804, 573);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(48, 51);
			this->pictureBox58->TabIndex = 58;
			this->pictureBox58->TabStop = false;
			this->pictureBox58->Visible = false;
			this->pictureBox58->Click += gcnew System::EventHandler(this, &MyForm::PictureBox58_Click);
			// 
			// pictureBox57
			// 
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(801, 504);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(52, 49);
			this->pictureBox57->TabIndex = 57;
			this->pictureBox57->TabStop = false;
			this->pictureBox57->Visible = false;
			this->pictureBox57->WaitOnLoad = true;
			// 
			// pictureBox56
			// 
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(797, 431);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(57, 52);
			this->pictureBox56->TabIndex = 56;
			this->pictureBox56->TabStop = false;
			this->pictureBox56->Visible = false;
			// 
			// pictureBox55
			// 
			this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.Image")));
			this->pictureBox55->Location = System::Drawing::Point(804, 366);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(47, 47);
			this->pictureBox55->TabIndex = 55;
			this->pictureBox55->TabStop = false;
			this->pictureBox55->Visible = false;
			// 
			// pictureBox54
			// 
			this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.Image")));
			this->pictureBox54->Location = System::Drawing::Point(799, 289);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(52, 55);
			this->pictureBox54->TabIndex = 54;
			this->pictureBox54->TabStop = false;
			this->pictureBox54->Visible = false;
			// 
			// pictureBox53
			// 
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(799, 222);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(53, 52);
			this->pictureBox53->TabIndex = 53;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->Visible = false;
			// 
			// pictureBox52
			// 
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(799, 147);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(53, 54);
			this->pictureBox52->TabIndex = 52;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->Visible = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(799, 82);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(56, 51);
			this->pictureBox51->TabIndex = 51;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->Visible = false;
			// 
			// pictureBox50
			// 
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(799, 0);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(55, 51);
			this->pictureBox50->TabIndex = 50;
			this->pictureBox50->TabStop = false;
			this->pictureBox50->Visible = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(709, 0);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(52, 51);
			this->pictureBox49->TabIndex = 49;
			this->pictureBox49->TabStop = false;
			this->pictureBox49->Visible = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(631, 0);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(56, 51);
			this->pictureBox48->TabIndex = 48;
			this->pictureBox48->TabStop = false;
			this->pictureBox48->Visible = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(554, 0);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(61, 51);
			this->pictureBox47->TabIndex = 47;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->Visible = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(481, 0);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(53, 51);
			this->pictureBox46->TabIndex = 46;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Visible = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(398, 0);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(59, 51);
			this->pictureBox45->TabIndex = 45;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Visible = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(325, 0);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(56, 51);
			this->pictureBox44->TabIndex = 44;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Visible = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(246, 0);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(56, 51);
			this->pictureBox43->TabIndex = 43;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Visible = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(171, 0);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(53, 51);
			this->pictureBox42->TabIndex = 42;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Visible = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(95, 0);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(52, 51);
			this->pictureBox41->TabIndex = 41;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Visible = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(0, 90);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(54, 43);
			this->pictureBox40->TabIndex = 40;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Visible = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(0, 152);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(54, 49);
			this->pictureBox39->TabIndex = 39;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Visible = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(0, 223);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(54, 48);
			this->pictureBox38->TabIndex = 38;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Visible = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(0, 294);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(54, 45);
			this->pictureBox37->TabIndex = 37;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Visible = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(0, 364);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(54, 46);
			this->pictureBox36->TabIndex = 36;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Visible = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(0, 435);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(54, 48);
			this->pictureBox35->TabIndex = 35;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Visible = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(0, 504);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(54, 49);
			this->pictureBox34->TabIndex = 34;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Visible = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(0, 573);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(54, 51);
			this->pictureBox33->TabIndex = 33;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Visible = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(8, 658);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(54, 44);
			this->pictureBox32->TabIndex = 32;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Visible = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(92, 658);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(53, 46);
			this->pictureBox31->TabIndex = 31;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Visible = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(171, 658);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(48, 43);
			this->pictureBox30->TabIndex = 30;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Visible = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(246, 658);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(56, 44);
			this->pictureBox29->TabIndex = 29;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Visible = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(325, 658);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(50, 46);
			this->pictureBox28->TabIndex = 28;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Visible = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(404, 658);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(52, 46);
			this->pictureBox27->TabIndex = 27;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Visible = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(481, 658);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(46, 46);
			this->pictureBox26->TabIndex = 26;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Visible = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(554, 658);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(51, 46);
			this->pictureBox25->TabIndex = 25;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Visible = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(631, 658);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(56, 46);
			this->pictureBox24->TabIndex = 24;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Visible = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(709, 658);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(52, 46);
			this->pictureBox23->TabIndex = 23;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Visible = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(802, 573);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(49, 45);
			this->pictureBox22->TabIndex = 22;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Visible = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(802, 504);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(49, 49);
			this->pictureBox21->TabIndex = 21;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Visible = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(802, 435);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(50, 48);
			this->pictureBox20->TabIndex = 20;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Visible = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(802, 364);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(50, 49);
			this->pictureBox19->TabIndex = 19;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Visible = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(802, 289);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(50, 55);
			this->pictureBox18->TabIndex = 18;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Visible = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(801, 221);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(50, 54);
			this->pictureBox17->TabIndex = 17;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Visible = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(802, 152);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(50, 49);
			this->pictureBox16->TabIndex = 16;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Visible = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(801, 82);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(53, 51);
			this->pictureBox15->TabIndex = 15;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Visible = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(799, 0);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(54, 51);
			this->pictureBox14->TabIndex = 14;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Visible = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(709, 0);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(52, 51);
			this->pictureBox13->TabIndex = 13;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Visible = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(631, 0);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(56, 51);
			this->pictureBox12->TabIndex = 12;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Visible = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(554, 0);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(61, 51);
			this->pictureBox11->TabIndex = 11;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Visible = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(481, 0);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(53, 51);
			this->pictureBox10->TabIndex = 10;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(398, 0);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(59, 51);
			this->pictureBox9->TabIndex = 9;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(325, 0);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(56, 51);
			this->pictureBox8->TabIndex = 8;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(246, 0);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(56, 51);
			this->pictureBox7->TabIndex = 7;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(170, 0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(54, 51);
			this->pictureBox6->TabIndex = 6;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(95, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(52, 48);
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Adobe Arabic", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(301, 401);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(267, 48);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Please roll the dice";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::Label8_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(855, 704);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::PictureBox1_Click_1);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Adobe Arabic", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(454, 866);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 69);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Roll";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Adobe Arabic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(473, 788);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(241, 39);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Your dice number is:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"SimSun", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(720, 788);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 36);
			this->label3->TabIndex = 4;
			this->label3->Text = L"--";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::Label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Adobe Arabic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(988, 788);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(313, 39);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Opponent\'s dice number is:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"SimSun", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(1307, 788);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 36);
			this->label5->TabIndex = 6;
			this->label5->Text = L"--";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::Label5_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(205, 80);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(172, 204);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1379, 76);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(269, 192);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Adobe Arabic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(179, 303);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(232, 58);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Your Balance";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Adobe Arabic", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1373, 300);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(337, 58);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Opponent\'s Balance";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Adobe Arabic", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(249, 361);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 57);
			this->label9->TabIndex = 9;
			this->label9->Text = L"2000";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Adobe Arabic", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(1494, 352);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 57);
			this->label10->TabIndex = 10;
			this->label10->Text = L"2000";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Adobe Arabic", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(222, 428);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(42, 48);
			this->label12->TabIndex = 78;
			this->label12->Text = L"--";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Adobe Arabic", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(1473, 418);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(42, 48);
			this->label13->TabIndex = 77;
			this->label13->Text = L"--";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::Label13_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Adobe Arabic", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(703, 866);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 69);
			this->button2->TabIndex = 79;
			this->button2->Text = L"Buy";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click_2);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Adobe Arabic", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(972, 866);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 69);
			this->button3->TabIndex = 80;
			this->button3->Text = L"Invest";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(155, 533);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(71, 18);
			this->label14->TabIndex = 81;
			this->label14->Text = L"label14";
			this->label14->Visible = false;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Adobe Arabic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1211, 867);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(147, 69);
			this->button4->TabIndex = 82;
			this->button4->Text = L"Surrender";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 960);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Monopoly";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
//***************Roll button************************
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Buy = false;
		is_Occupied = false;
		is_Occupied2 = false;
		is_invested = false;
		label12->Text = ("--");
		label11->Text = " ";
		label13->Text = ("--");
		label8->Text = ("Please roll the dice");
		Vec_asset.push_back(asset0);
		Vec_asset.push_back(asset1);
		Vec_asset.push_back(asset2);
		Vec_asset.push_back(asset3);
		Vec_asset.push_back(asset4);
		Vec_asset.push_back(asset5);
		Vec_asset.push_back(asset6);
		Vec_asset.push_back(asset7);
		Vec_asset.push_back(asset8);
		Vec_asset.push_back(asset9);
		Vec_asset.push_back(asset10);
		Vec_asset.push_back(asset11);
		Vec_asset.push_back(asset12);
		Vec_asset.push_back(asset13);
		Vec_asset.push_back(asset14);
		Vec_asset.push_back(asset15);
		Vec_asset.push_back(asset16);
		Vec_asset.push_back(asset17);
		Vec_asset.push_back(asset18);
		Vec_asset.push_back(asset19);
		Vec_asset.push_back(asset20);
		Vec_asset.push_back(asset21);
		Vec_asset.push_back(asset22);
		Vec_asset.push_back(asset23);
		Vec_asset.push_back(asset24);
		Vec_asset.push_back(asset25);
		Vec_asset.push_back(asset26);
		Vec_asset.push_back(asset27);
		Vec_asset.push_back(asset28);
		Vec_asset.push_back(asset29);
		Vec_asset.push_back(asset30);
		Vec_asset.push_back(asset31);
		Vec_asset.push_back(asset32);
		Vec_asset.push_back(asset33);
		Vec_asset.push_back(asset34);
		Vec_asset.push_back(asset35);
		Vec_asset.push_back(asset36);
		Vec_asset.push_back(asset37);
		Vec_asset.push_back(asset0);

	//-------------Player_1's behavior------------------------
		if (Player_1.get_place() == 19) {
			next_round++;
		}
		if (next_round <1) {
			
			int Price = Player_1.getBalance();
			String^ Output3 = System::Convert::ToString(Price);
			label9->Text = Output3;

			Dice1.roll_dice();
			//move the figure
			int DiceNum = Dice1.get_dice();
			Player_1.move(DiceNum);
			pictureBox2->Location = Point(Player_1.getX(), Player_1.getY());
			String^ Output = System::Convert::ToString(DiceNum);
			label3->Text = Output;
			//OUTPUT the current asset's price:
			int current_value;
			for (int i = 0; i < Vec_asset.size(); i++) {
				if (Player_1.get_place() == Vec_asset[i].getPlace()) {
					current_value = Vec_asset[i].getValue();
				}
			}
			String^ current_Value = System::Convert::ToString(current_value);
			label15->Text = "The price of current asset is " + current_Value;

			
			//if the asset is occupied by the player himself/herself
			for (unsigned int i = 0; i < Vec_Owned.size(); i++) {
				if (Player_1.get_place() == Vec_Owned[i]) {
					is_Occupied = true;
				}
			}
			//the asset is occupied by Opponent

			for (int i = 0; i < Vec_Occupied.size(); i++) {
				if (Player_1.get_place() == Vec_Occupied[i]) {
					is_Occupied = true;
				}
			}
			if (is_Occupied) {
				for (int i = 1; i < Vec_asset.size() - 1; i++) {
					if ((Player_1.get_place() == Vec_asset[i].getPlace()) && (Vec_asset[i].getOwn() == 2)) {
						if (Vec_asset[i + 1].getOwn() == 2 || Vec_asset[i - 1].getOwn() == 2) {
							Player_1.withdrawBalance(Vec_asset[i].getValue() * 0.2);
							label12->Text = ("- got 20% fine");
							Player_2.addBalance(Vec_asset[i].getValue() * 0.2);
							label13->Text = ("+ 20% reward");
						}
						else if (Vec_asset[i + 1].getOwn() != 2 &&  Vec_asset[i - 1].getOwn() != 2) {
							Player_1.withdrawBalance(Vec_asset[i].getValue() * 0.1);
							label12->Text = ("- 10% fine");
							Player_2.addBalance(Vec_asset[i].getValue() * 0.1);
							label13->Text = ("+ 10% reward");
						}
					}
				}
			}
		}
		else { 
			next_round -= 2; 
			label8->Text = ("You are in the jail! \n Wait for a round.");
		}
	//-------------Player_2(AI)'s behavior------------------------
		if (Player_2.get_place() == 19) {
			next_round2 ++;
		}
		//if AI is not in Jail:
		if (next_round2 < 1) {
				Sleep(50);
				Dice1.roll_dice();
				int DiceNum2 = Dice1.get_dice();
				Player_2.move(DiceNum2);

				String^ Output2 = System::Convert::ToString(DiceNum2);
				label5->Text = Output2;
				player2->Location = Point(Player_2.getX(), Player_2.getY());

		//AI's strategy to buy assets
				int is_buy;
				int can_invest;
				Dice2.roll_dice();
				//When player_2¡¯s balance account is more than or equal to 300, it would preferentially
				//buy the assets whose prices are larger than 150
				int current_value2;
				for (int i = 0; i < Vec_asset.size(); i++) {
					if (Player_2.get_place() == Vec_asset[i].getPlace()) {
						current_value2 = Vec_asset[i].getValue();
					}
				}
				if (Player_2.getBalance() >= 300) {
					if (current_value2 >= 150) {
						is_buy = 1;
					}
					else {
						is_buy = Dice2.get_dice();
					}
				}
				else {
					is_buy =2;
				}
				//if the asset is occupied by AI (player_2)
				for (int i = 0; i < Vec_Occupied.size(); i++) {
					if (Player_2.get_place() == Vec_Occupied[i]) {
						is_Occupied = true;
					}
				}
				//if the asset is occupied by player_1:
				for (int i = 0; i < Vec_Owned.size(); i++) {
					if (Player_2.get_place() == Vec_Owned[i]) {
						is_Occupied2 = true;
					}
				}
				//if the asset is occupied by player_1, AI will get fine:
				if (is_Occupied2) {
					for (int i = 1; i < Vec_asset.size() - 1; i++) {
						if ((Player_2.get_place() == Vec_asset[i].getPlace()) && (Vec_asset[i].getOwn() == 1)) {
							if (Vec_asset[i + 1].getOwn() == 2 || Vec_asset[i - 1].getOwn() == 2) {
								Player_2.withdrawBalance(Vec_asset[i].getValue() * 0.2);
								label13->Text = ("- 20% fine");
								Player_1.addBalance(Vec_asset[i].getValue() * 0.2);
								label12->Text = ("+ 20% reward");
							}
							else if (Vec_asset[i + 1].getOwn() == 1 || Vec_asset[i + 1].getOwn() == 0 ||
								Vec_asset[i - 1].getOwn() == 1 || Vec_asset[i - 1].getOwn() == 0) {
								Player_2.withdrawBalance(Vec_asset[i].getValue() * 0.1);
								label13->Text = ("- 10% fine");
								Player_1.addBalance(Vec_asset[i].getValue() * 0.1);
								label12->Text = ("+ 10% reward");
							}
						}
					}
				}
				//if the asset is unoccupied, and AI decides to buy it:
				if (is_buy == 1) {
					switch (Player_2.get_place()) {
					case 1:
						Player_2.addBalance(-asset1.getValue());
						asset1.setOwn(2);
						Vec_Occupied.push_back(asset1.getPlace());
						pictureBox41->Visible = true;
						break;
					case 2:
						Player_2.addBalance(-asset2.getValue());
						asset2.setOwn(2);
						Vec_Occupied.push_back(asset2.getPlace());
						pictureBox42->Visible = true;
						break;
					case 3:
						Player_2.addBalance(-asset3.getValue());
						asset3.setOwn(2);
						Vec_Occupied.push_back(asset3.getPlace());
						pictureBox43->Visible = true;
						break;
					case 4:
						Player_2.addBalance(-asset4.getValue());
						asset4.setOwn(2);
						Vec_Occupied.push_back(asset4.getPlace());
						pictureBox44->Visible = true;
						break;
					case 5:
						Player_2.addBalance(-asset5.getValue());
						asset5.setOwn(1);
						Vec_Occupied.push_back(asset5.getPlace());
						pictureBox45->Visible = true;
						break;
					case 6:
						Player_2.addBalance(-asset6.getValue());
						asset6.setOwn(2);
						Vec_Occupied.push_back(asset6.getPlace());
						pictureBox46->Visible = true;
						break;
					case 7:
						Player_2.addBalance(-asset7.getValue());
						asset7.setOwn(2);
						Vec_Occupied.push_back(asset7.getPlace());
						pictureBox47->Visible = true;
						break;
					case 8:
						Player_2.addBalance(-asset8.getValue());
						asset8.setOwn(2);
						Vec_Occupied.push_back(asset8.getPlace());
						pictureBox48->Visible = true;
						break;
					case 9:
						Player_2.addBalance(-asset9.getValue());
						asset9.setOwn(2);
						Vec_Occupied.push_back(asset9.getPlace());
						pictureBox49->Visible = true;
						break;
					case 10:
						Player_2.addBalance(-asset10.getValue());
						asset10.setOwn(2);
						Vec_Occupied.push_back(asset10.getPlace());
						pictureBox50->Visible = true;
						break;
					case 11:
						Player_2.addBalance(-asset11.getValue());
						asset11.setOwn(2);
						Vec_Occupied.push_back(asset11.getPlace());
						pictureBox51->Visible = true;
						break;
					case 12:
						Player_2.addBalance(-asset12.getValue());
						asset12.setOwn(2);
						Vec_Occupied.push_back(asset12.getPlace());
						pictureBox52->Visible = true;
						break;
					case 13:
						Player_2.addBalance(-asset13.getValue());
						asset13.setOwn(2);
						Vec_Occupied.push_back(asset13.getPlace());
						pictureBox53->Visible = true;
						break;
					case 14:
						Player_2.addBalance(-asset14.getValue());
						asset14.setOwn(2);
						Vec_Occupied.push_back(asset14.getPlace());
						pictureBox54->Visible = true;
						break;
					case 15:
						Player_2.addBalance(-asset15.getValue());
						asset15.setOwn(2);
						Vec_Occupied.push_back(asset15.getPlace());
						pictureBox55->Visible = true;
						break;
					case 16:
						Player_2.addBalance(-asset16.getValue());
						asset16.setOwn(2);
						Vec_Occupied.push_back(asset16.getPlace());
						pictureBox56->Visible = true;
						break;
					case 17:
						Player_2.addBalance(-asset17.getValue());
						asset17.setOwn(2);
						Vec_Occupied.push_back(asset17.getPlace());
						pictureBox57->Visible = true;
						break;
					case 18:
						Player_2.addBalance(-asset18.getValue());
						asset18.setOwn(2);
						Vec_Occupied.push_back(asset18.getPlace());
						pictureBox58->Visible = true;
						break;
					case 19:	//Jail
						break;
					case 20:
						Player_2.addBalance(-asset20.getValue());
						asset20.setOwn(2);
						Vec_Occupied.push_back(asset20.getPlace());
						pictureBox59->Visible = true;
						break;
					case 21:
						Player_2.addBalance(-asset21.getValue());
						asset21.setOwn(2);
						Vec_Occupied.push_back(asset21.getPlace());
						pictureBox60->Visible = true;
						break;
					case 22:
						Player_2.addBalance(-asset22.getValue());
						asset22.setOwn(2);
						Vec_Occupied.push_back(asset22.getPlace());
						pictureBox61->Visible = true;
						break;
					case 23:
						Player_2.addBalance(-asset23.getValue());
						asset23.setOwn(2);
						Vec_Occupied.push_back(asset23.getPlace());
						pictureBox62->Visible = true;
						break;
					case 24:
						Player_2.addBalance(-asset24.getValue());
						asset24.setOwn(2);
						Vec_Occupied.push_back(asset24.getPlace());
						pictureBox63->Visible = true;
						break;
					case 25:
						Player_2.addBalance(-asset25.getValue());
						asset25.setOwn(2);
						Vec_Occupied.push_back(asset25.getPlace());
						pictureBox64->Visible = true;
						break;
					case 26:
						Player_2.addBalance(-asset26.getValue());
						asset26.setOwn(2);
						Vec_Occupied.push_back(asset26.getPlace());
						pictureBox65->Visible = true;
						break;
					case 27:
						Player_2.addBalance(-asset27.getValue());
						asset27.setOwn(2);
						Vec_Occupied.push_back(asset27.getPlace());
						pictureBox66->Visible = true;
						break;
					case 28:
						Player_2.addBalance(-asset28.getValue());
						asset28.setOwn(2);
						Vec_Occupied.push_back(asset28.getPlace());
						pictureBox67->Visible = true;
						break;
					case 29:
						Player_2.addBalance(-asset29.getValue());
						asset29.setOwn(2);
						Vec_Occupied.push_back(asset29.getPlace());
						pictureBox68->Visible = true;
						break;
					case 30:
						Player_2.addBalance(-asset30.getValue());
						asset30.setOwn(2);
						Vec_Occupied.push_back(asset30.getPlace());
						pictureBox69->Visible = true;
						break;
					case 31:
						Player_2.addBalance(-asset31.getValue());
						asset31.setOwn(2);
						Vec_Occupied.push_back(asset31.getPlace());
						pictureBox70->Visible = true;
						break;
					case 32:
						Player_2.addBalance(-asset32.getValue());
						asset32.setOwn(2);
						Vec_Occupied.push_back(asset32.getPlace());
						pictureBox71->Visible = true;
						break;
					case 33:
						Player_2.addBalance(-asset33.getValue());
						asset33.setOwn(2);
						Vec_Occupied.push_back(asset33.getPlace());
						pictureBox72->Visible = true;
						break;
					case 34:
						Player_2.addBalance(-asset34.getValue());
						asset34.setOwn(2);
						Vec_Occupied.push_back(asset34.getPlace());
						pictureBox73->Visible = true;
						break;
					case 35:
						Player_2.addBalance(-asset35.getValue());
						asset35.setOwn(2);
						Vec_Occupied.push_back(asset35.getPlace());
						pictureBox74->Visible = true;
						break;
					case 36:
						Player_2.addBalance(-asset36.getValue());
						asset36.setOwn(2);
						Vec_Occupied.push_back(asset36.getPlace());
						pictureBox75->Visible = true;
						break;
					case 37:
						Player_2.addBalance(-asset37.getValue());
						asset37.setOwn(2);
						Vec_Occupied.push_back(asset37.getPlace());
						pictureBox76->Visible = true;
						break;
					}
				}
				
		//AI's strategy to invest assets:
				if (Player_2.getBalance() < 600) {
					can_invest = 1;
				}
				else {
					Dice3.roll_dice();
					can_invest = Dice3.get_dice();
				}
				bool is_Occupied4 = false;
				for (unsigned int i = 0; i < Vec_Occupied.size(); i++) {
					if (Player_2.get_place() == Vec_Occupied[i]) {
						is_Occupied4 = true;
					}
				}
				if (is_Occupied4 && (can_invest == 2 || can_invest == 3)){
					switch (Player_2.get_place()) {
					case 1:
						Player_2.addBalance(-asset1.getValue() / 2);
						asset1.addValue(0.25 * asset1.getValue());
						break;
					case 2:
						Player_2.addBalance(-asset2.getValue() / 2);
						asset2.addValue(0.25 * asset2.getValue());
						break;
					case 3:
						Player_2.addBalance(-asset3.getValue() / 2);
						asset3.addValue(0.25 * asset3.getValue());
						break;
					case 4:
						Player_2.addBalance(-asset4.getValue() / 2);
						asset4.addValue(0.25 * asset4.getValue());
						break;
					case 5:
						Player_2.addBalance(-asset5.getValue() / 2);
						asset5.addValue(0.25 * asset5.getValue());
						break;
					case 6:
						Player_2.addBalance(-asset6.getValue() / 2);
						asset6.addValue(0.25 * asset6.getValue());
						break;
					case 7:
						Player_2.addBalance(-asset7.getValue() / 2);
						asset7.addValue(0.25 * asset7.getValue());
						break;
					case 8:
						Player_2.addBalance(-asset8.getValue() / 2);
						asset8.addValue(0.25 * asset8.getValue());
						break;
					case 9:
						Player_2.addBalance(-asset9.getValue() / 2);
						asset9.addValue(0.25 * asset9.getValue());
						break;
					case 10:
						Player_2.addBalance(-asset10.getValue() / 2);
						asset10.addValue(0.25 * asset10.getValue());
						break;
					case 11:
						Player_2.addBalance(-asset11.getValue() / 2);
						asset11.addValue(0.25 * asset11.getValue());
						break;
					case 12:
						Player_2.addBalance(-asset12.getValue() / 2);
						asset12.addValue(0.25 * asset12.getValue());
						break;
					case 13:
						Player_2.addBalance(-asset13.getValue() / 2);
						asset13.addValue(0.25 * asset13.getValue());
						break;
					case 14:
						Player_2.addBalance(-asset14.getValue() / 2);
						asset14.addValue(0.25 * asset14.getValue());
						break;
					case 15:
						Player_2.addBalance(-asset15.getValue() / 2);
						asset15.addValue(0.25 * asset15.getValue());
						break;
					case 16:
						Player_2.addBalance(-asset16.getValue() / 2);
						asset16.addValue(0.25 * asset16.getValue());
						break;
					case 17:
						Player_2.addBalance(-asset17.getValue() / 2);
						asset17.addValue(0.25 * asset17.getValue());
						break;
					case 18:
						Player_2.addBalance(-asset18.getValue() / 2);
						asset18.addValue(0.25 * asset18.getValue());
						break;
					case 20:
						Player_2.addBalance(-asset20.getValue() / 2);
						asset20.addValue(0.25 * asset20.getValue());
						break;
					case 21:
						Player_2.addBalance(-asset21.getValue() / 2);
						asset21.addValue(0.25 * asset21.getValue());
						break;
					case 22:
						Player_2.addBalance(-asset22.getValue() / 2);
						asset22.addValue(0.25 * asset22.getValue());
						break;
					case 23:
						Player_2.addBalance(-asset23.getValue() / 2);
						asset23.addValue(0.25 * asset23.getValue());
						break;
					case 24:
						Player_2.addBalance(-asset24.getValue() / 2);
						asset24.addValue(0.25 * asset24.getValue());
						break;
					case 25:
						Player_2.addBalance(-asset25.getValue() / 2);
						asset25.addValue(0.25 * asset25.getValue());
						break;
					case 26:
						Player_2.addBalance(-asset26.getValue() / 2);
						asset26.addValue(0.25 * asset26.getValue());
						break;
					case 27:
						Player_2.addBalance(-asset27.getValue() / 2);
						asset27.addValue(0.25 * asset27.getValue());
						break;
					case 28:
						Player_2.addBalance(-asset28.getValue() / 2);
						asset28.addValue(0.25 * asset28.getValue());
						break;
					case 29:
						Player_2.addBalance(-asset29.getValue() / 2);
						asset29.addValue(0.25 * asset29.getValue());
						break;
					case 30:
						Player_2.addBalance(-asset30.getValue() / 2);
						asset30.addValue(0.25 * asset30.getValue());
						break;
					case 31:
						Player_2.addBalance(-asset31.getValue() / 2);
						asset31.addValue(0.25 * asset31.getValue());
						break;
					case 32:
						Player_2.addBalance(-asset32.getValue() / 2);
						asset32.addValue(0.25 * asset32.getValue());
						break;
					case 33:
						Player_2.addBalance(-asset33.getValue() / 2);
						asset33.addValue(0.25 * asset33.getValue());
						break;
					case 34:
						Player_2.addBalance(-asset34.getValue() / 2);
						asset34.addValue(0.25 * asset34.getValue());
						break;
					case 35:
						Player_2.addBalance(-asset35.getValue() / 2);
						asset35.addValue(0.25 * asset35.getValue());
						break;
					case 36:
						Player_2.addBalance(-asset36.getValue() / 2);
						asset36.addValue(0.25 * asset36.getValue());
						break;
					case 37:
						Player_2.addBalance(-asset37.getValue() / 2);
						asset37.addValue(0.25 * asset37.getValue());
						break;
					}
					int Price1 = Player_2.getBalance();
					String ^ Output_invest = System::Convert::ToString(Price1);
					label10->Text = Output_invest;
					label11->Text = "Opponent has invested the asset!";
				}
				int Price2 = Player_2.getBalance();
				String ^ Output4 = System::Convert::ToString(Price2);
				label10->Text = Output4;
				is_Occupied4 = false;
			}
		else { 
			next_round2 -= 2; 
			label8->Text = ("Opponent is in the jail! \n You got an extra round.");
		}
	/////////////////////////////////
	//win or lose:
		if (Player_1.getBalance() <= 0 && Player_2.getBalance() > 0) {
			Form_lose^ form1 = gcnew Form_lose();
			form1->ShowDialog();
			Application::Exit();
		}
		if (Player_2.getBalance() <= 0 && Player_1.getBalance() > 0) {
			Form_win^ form2 = gcnew Form_win();
			form2->ShowDialog();
			Application::Exit();
		}
		vector<asset>().swap(Vec_asset);//clear out Vec_asset
	}

//**************Buy button:********************

	private: System::Void Button2_Click_2(System::Object^ sender, System::EventArgs^ e) {
		
		switch (Player_1.get_place()) {
		case 0:
			MessageBox::Show("cannot buy start point!");
			break;
		case 1:
			if (asset1.getOwn() == 0) {
				Player_1.addBalance(-asset1.getValue());
				asset1.setOwn(1);
				Vec_Owned.push_back(asset1.getPlace());
				pictureBox5->Visible = true;
			}
			else if(asset1.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset1.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 2:
			if (asset2.getOwn() == 0) {
				Player_1.addBalance(-asset2.getValue());
				asset2.setOwn(1);
				Vec_Owned.push_back(asset2.getPlace());
				pictureBox6->Visible = true;
			}
			else if (asset2.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset2.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 3:
			if (asset3.getOwn() == 0) {
				Player_1.addBalance(-asset3.getValue());
				asset3.setOwn(1);
				Vec_Owned.push_back(asset3.getPlace());
				pictureBox7->Visible = true;
			}
			else if (asset3.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset3.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 4:
			if (asset4.getOwn() == 0) {
				Player_1.addBalance(-asset4.getValue());
				asset4.setOwn(1);
				Vec_Owned.push_back(asset4.getPlace());
				pictureBox8->Visible = true;
			}
			else if (asset4.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset4.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 5:
			if (asset5.getOwn() == 0) {
				Player_1.addBalance(-asset5.getValue());
				asset5.setOwn(1);
				Vec_Owned.push_back(asset5.getPlace());
				pictureBox9->Visible = true;
			}
			else if (asset5.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset5.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 6:
			if (asset6.getOwn() == 0) {
				Player_1.addBalance(-asset6.getValue());
				asset6.setOwn(1);
				Vec_Owned.push_back(asset6.getPlace());
				pictureBox10->Visible = true;
			}
			else if (asset6.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset6.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 7:
			if (asset7.getOwn() == 0) {
				Player_1.addBalance(-asset7.getValue());
				asset7.setOwn(1);
				Vec_Owned.push_back(asset7.getPlace());
				pictureBox11->Visible = true;
			}
			else if (asset7.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset7.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 8:
			if (asset8.getOwn() == 0) {
				Player_1.addBalance(-asset8.getValue());
				asset8.setOwn(1);
				Vec_Owned.push_back(asset8.getPlace());
				pictureBox12->Visible = true;
			}
			else if (asset8.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset8.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 9:
			if (asset9.getOwn() == 0) {
				Player_1.addBalance(-asset9.getValue());
				asset9.setOwn(1);
				Vec_Owned.push_back(asset9.getPlace());
				pictureBox13->Visible = true;
			}
			else if (asset9.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset9.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 10:
			if (asset10.getOwn() == 0) {
				Player_1.addBalance(-asset10.getValue());
				asset10.setOwn(1);
				Vec_Owned.push_back(asset10.getPlace());
				pictureBox14->Visible = true;
			}
			else if (asset10.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset10.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 11:
			if (asset11.getOwn() == 0) {
				Player_1.addBalance(-asset11.getValue());
				asset11.setOwn(1);
				Vec_Owned.push_back(asset11.getPlace());
				pictureBox15->Visible = true;
			}
			else if (asset11.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset11.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 12:
			if (asset12.getOwn() == 0) {
				Player_1.addBalance(-asset12.getValue());
				asset12.setOwn(1);
				Vec_Owned.push_back(asset12.getPlace());
				pictureBox16->Visible = true;
			}
			else if (asset12.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset12.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 13:
			if (asset13.getOwn() == 0) {
				Player_1.addBalance(-asset13.getValue());
				asset13.setOwn(1);
				Vec_Owned.push_back(asset13.getPlace());
				pictureBox17->Visible = true;
			}
			else if (asset13.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset13.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 14:
			if (asset14.getOwn() == 0) {
				Player_1.addBalance(-asset14.getValue());
				asset14.setOwn(1);
				Vec_Owned.push_back(asset14.getPlace());
				pictureBox18->Visible = true;
			}
			else if (asset14.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset14.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 15:
			if (asset15.getOwn() == 0) {
				Player_1.addBalance(-asset15.getValue());
				asset15.setOwn(1);
				Vec_Owned.push_back(asset15.getPlace());
				pictureBox19->Visible = true;
			}
			else if (asset15.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset15.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 16:
			if (asset16.getOwn() == 0) {
				Player_1.addBalance(-asset16.getValue());
				asset16.setOwn(1);
				Vec_Owned.push_back(asset16.getPlace());
				pictureBox20->Visible = true;
			}
			else if (asset16.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset16.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 17:
			if (asset17.getOwn() == 0) {
				Player_1.addBalance(-asset17.getValue());
				asset17.setOwn(1);
				Vec_Owned.push_back(asset17.getPlace());
				pictureBox21->Visible = true;
			}
			else if (asset17.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset17.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 18:
			if (asset18.getOwn() == 0) {
				Player_1.addBalance(-asset18.getValue());
				asset18.setOwn(1);
				Vec_Owned.push_back(asset18.getPlace());
				pictureBox22->Visible = true;
			}
			else if (asset18.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset18.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 19://Jail
			MessageBox::Show("cannot buy the jail!");
			break;
		case 20:
			if (asset20.getOwn() == 0) {
				Player_1.addBalance(-asset20.getValue());
				asset20.setOwn(1);
				Vec_Owned.push_back(asset20.getPlace());
				pictureBox23->Visible = true;
			}
			else if (asset20.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset20.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 21:
			if (asset21.getOwn() == 0) {
				Player_1.addBalance(-asset21.getValue());
				asset21.setOwn(1);
				Vec_Owned.push_back(asset21.getPlace());
				pictureBox24->Visible = true;
			}
			else if (asset21.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset21.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 22:
			if (asset22.getOwn() == 0) {
				Player_1.addBalance(-asset22.getValue());
				asset22.setOwn(1);
				Vec_Owned.push_back(asset22.getPlace());
				pictureBox25->Visible = true;
			}
			else if (asset22.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset22.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 23:
			if (asset23.getOwn() == 0) {
				Player_1.addBalance(-asset23.getValue());
				asset23.setOwn(1);
				Vec_Owned.push_back(asset23.getPlace());
				pictureBox26->Visible = true;
			}
			else if (asset23.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset23.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 24:
			if (asset24.getOwn() == 0) {
				Player_1.addBalance(-asset24.getValue());
				asset24.setOwn(1);
				Vec_Owned.push_back(asset24.getPlace());
				pictureBox27->Visible = true;
			}
			else if (asset24.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset24.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 25:
			if (asset25.getOwn() == 0) {
				Player_1.addBalance(-asset25.getValue());
				asset25.setOwn(1);
				Vec_Owned.push_back(asset25.getPlace());
				pictureBox28->Visible = true;
			}
			else if (asset25.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset25.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 26:
			if (asset26.getOwn() == 0) {
				Player_1.addBalance(-asset26.getValue());
				asset26.setOwn(1);
				Vec_Owned.push_back(asset26.getPlace());
				pictureBox29->Visible = true;
			}
			else if (asset26.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset26.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 27:
			if (asset27.getOwn() == 0) {
				Player_1.addBalance(-asset27.getValue());
				asset27.setOwn(1);
				Vec_Owned.push_back(asset27.getPlace());
				pictureBox30->Visible = true;
			}
			else if (asset27.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset27.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 28:
			if (asset28.getOwn() == 0) {
				Player_1.addBalance(-asset28.getValue());
				asset28.setOwn(1);
				Vec_Owned.push_back(asset28.getPlace());
				pictureBox31->Visible = true;
			}
			else if (asset28.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset28.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 29:
			if (asset29.getOwn() == 0) {
				Player_1.addBalance(-asset29.getValue());
				asset29.setOwn(1);
				Vec_Owned.push_back(asset29.getPlace());
				pictureBox32->Visible = true;
			}
			else if (asset29.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset29.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 30:
			if (asset30.getOwn() == 0) {
				Player_1.addBalance(-asset30.getValue());
				asset30.setOwn(1);
				Vec_Owned.push_back(asset30.getPlace());
				pictureBox33->Visible = true;
			}
			else if (asset30.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset30.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 31:
			if (asset31.getOwn() == 0) {
				Player_1.addBalance(-asset31.getValue());
				asset31.setOwn(1);
				Vec_Owned.push_back(asset31.getPlace());
				pictureBox34->Visible = true;
			}
			else if (asset31.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset31.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 32:
			if (asset32.getOwn() == 0) {
				Player_1.addBalance(-asset32.getValue());
				asset32.setOwn(1);
				Vec_Owned.push_back(asset32.getPlace());
				pictureBox35->Visible = true;
			}
			else if (asset32.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset32.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 33:
			if (asset33.getOwn() == 0) {
				Player_1.addBalance(-asset33.getValue());
				asset33.setOwn(1);
				Vec_Owned.push_back(asset33.getPlace());
				pictureBox36->Visible = true;
			}
			else if (asset33.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset33.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 34:
			if (asset34.getOwn() == 0) {
				Player_1.addBalance(-asset34.getValue());
				asset34.setOwn(1);
				Vec_Owned.push_back(asset34.getPlace());
				pictureBox37->Visible = true;
			}
			else if (asset34.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset34.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 35:
			if (asset35.getOwn() == 0) {
				Player_1.addBalance(-asset35.getValue());
				asset35.setOwn(1);
				Vec_Owned.push_back(asset35.getPlace());
				pictureBox38->Visible = true;
			}
			else if (asset35.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset35.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 36:
			if (asset36.getOwn() == 0) {
				Player_1.addBalance(-asset36.getValue());
				asset36.setOwn(1);
				Vec_Owned.push_back(asset36.getPlace());
				pictureBox39->Visible = true;
			}
			else if (asset36.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset36.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		case 37:
			if (asset37.getOwn() == 0) {
				Player_1.addBalance(-asset37.getValue());
				asset37.setOwn(1);
				Vec_Owned.push_back(asset37.getPlace());
				pictureBox40->Visible = true;
			}
			else if (asset37.getOwn() == 2) {
				MessageBox::Show("The asset is occupied by Opponent!");
			}
			else if (asset37.getOwn() == 1) {
				MessageBox::Show("You have already owned it!");
			}
			break;
		}
		int Price = Player_1.getBalance();
		String ^ Output3 = System::Convert::ToString(Price);
		label9->Text = Output3;
		label15->Text = "You have bought the asset!";
	
	
}

//*************Invest button:********************  

private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Output4;
	bool is_Occupied3 = false;
	for (unsigned int i = 0; i < Vec_Owned.size(); i++) {
		if (Player_1.get_place() == Vec_Owned[i]) {
			is_Occupied3 = true;
		}
	}
	if (is_Occupied3 && !is_invested) {
		switch (Player_1.get_place()) {
		case 1:
			Player_1.addBalance(-asset1.getValue() / 2);
			asset1.addValue((int)(0.25 * asset1.getValue()));
			break;
		case 2:
			Player_1.addBalance(-asset2.getValue() / 2);
			asset2.addValue((int)0.25 * asset2.getValue());
			break;
		case 3:
			Player_1.addBalance(-asset3.getValue() / 2);
			asset3.addValue((int)0.25 * asset3.getValue());
			break;
		case 4:
			Player_1.addBalance(-asset4.getValue() / 2);
			asset4.addValue((int)0.25 * asset4.getValue());
			break;
		case 5:
			Player_1.addBalance(-asset5.getValue() / 2);
			asset5.addValue((int)0.25 * asset5.getValue());
			break;
		case 6:
			Player_1.addBalance(-asset6.getValue() / 2);
			asset6.addValue((int)0.25 * asset6.getValue());
			break;
		case 7:
			Player_1.addBalance(-asset7.getValue() / 2);
			asset7.addValue((int)0.25 * asset7.getValue());
			break;
		case 8:
			Player_1.addBalance(-asset8.getValue() / 2);
			asset8.addValue((int)0.25 * asset8.getValue());
			break;
		case 9:
			Player_1.addBalance(-asset9.getValue() / 2);
			asset9.addValue((int)0.25 * asset9.getValue());
			break;
		case 10:
			Player_1.addBalance(-asset10.getValue() / 2);
			asset10.addValue((int)0.25 * asset10.getValue());
			break;
		case 11:
			Player_1.addBalance(-asset11.getValue() / 2);
			asset11.addValue((int)0.25 * asset11.getValue());
			break;
		case 12:
			Player_1.addBalance(-asset12.getValue() / 2);
			asset12.addValue((int)0.25 * asset12.getValue());
			break;
		case 13:
			Player_1.addBalance(-asset13.getValue() / 2);
			asset13.addValue((int)0.25 * asset13.getValue());
			break;
		case 14:
			Player_1.addBalance(-asset14.getValue() / 2);
			asset14.addValue((int)0.25 * asset14.getValue());
			break;
		case 15:
			Player_1.addBalance(-asset15.getValue() / 2);
			asset15.addValue((int)0.25 * asset15.getValue());
			break;
		case 16:
			Player_1.addBalance(-asset16.getValue() / 2);
			asset16.addValue((int)0.25 * asset16.getValue());
			break;
		case 17:
			Player_1.addBalance(-asset17.getValue() / 2);
			asset17.addValue((int)0.25 * asset17.getValue());
			break;
		case 18:
			Player_1.addBalance(-asset18.getValue() / 2);
			asset18.addValue((int)0.25 * asset18.getValue());
			break;
		case 20:
			Player_1.addBalance(-asset20.getValue() / 2);
			asset20.addValue((int)0.25 * asset20.getValue());
			break;
		case 21:
			Player_1.addBalance(-asset21.getValue() / 2);
			asset21.addValue((int)0.25 * asset21.getValue());
			break;
		case 22:
			Player_1.addBalance(-asset22.getValue() / 2);
			asset22.addValue((int)0.25 * asset22.getValue());
			break;
		case 23:
			Player_1.addBalance(-asset23.getValue() / 2);
			asset23.addValue((int)0.25 * asset23.getValue());
			break;
		case 24:
			Player_1.addBalance(-asset24.getValue() / 2);
			asset24.addValue((int)0.25 * asset24.getValue());
			break;
		case 25:
			Player_1.addBalance(-asset25.getValue() / 2);
			asset25.addValue((int)0.25 * asset25.getValue());
			break;
		case 26:
			Player_1.addBalance(-asset26.getValue() / 2);
			asset26.addValue((int)0.25 * asset26.getValue());
			break;
		case 27:
			Player_1.addBalance(-asset27.getValue() / 2);
			asset27.addValue((int)0.25 * asset27.getValue());
			break;
		case 28:
			Player_1.addBalance(-asset28.getValue() / 2);
			asset28.addValue((int)0.25 * asset28.getValue());
			break;
		case 29:
			Player_1.addBalance(-asset29.getValue() / 2);
			asset29.addValue((int)0.25 * asset29.getValue());
			break;
		case 30:
			Player_1.addBalance(-asset30.getValue() / 2);
			asset30.addValue((int)0.25 * asset30.getValue());
			break;
		case 31:
			Player_1.addBalance(-asset31.getValue() / 2);
			asset31.addValue((int)0.25* asset31.getValue());
			break;
		case 32:
			Player_1.addBalance(-asset32.getValue() / 2);
			asset32.addValue((int)0.25* asset32.getValue());
			break;
		case 33:
			Player_1.addBalance(-asset33.getValue() / 2);
			asset33.addValue((int)0.25* asset33.getValue());
			break;
		case 34:
			Player_1.addBalance(-asset34.getValue() / 2);
			asset34.addValue((int)0.25* asset34.getValue());
			break;
		case 35:
			Player_1.addBalance(-asset35.getValue() / 2);
			asset35.addValue((int)0.25* asset35.getValue());
			break;
		case 36:
			Player_1.addBalance(-asset36.getValue() / 2);
			asset36.addValue((int)0.25* asset36.getValue());
			break;
		case 37:
			Player_1.addBalance(-asset37.getValue() / 2);
			asset37.addValue((int)0.25* asset37.getValue());
			break;
		
		}
		int Price1 = Player_1.getBalance();
		Output4 = System::Convert::ToString(Price1);
		label9->Text = Output4;
		label15->Text = ("You have invested the asset!");
		is_invested = true;
	}
	else {
		MessageBox::Show("The current asset cannot be invested");
	}
}
	
//******************surrender button************************
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Form_lose^ form1 = gcnew Form_lose();
	form1->ShowDialog();
	Application::Exit();
}

//Empty click functions, neglect them:
	private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
		 }
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Player2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void OpenFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void Button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void PictureBox58_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void Label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

//////////////////end of the code////////////////////
