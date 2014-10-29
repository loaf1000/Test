/**************************************************************
***************************************************************
***************************************************************

ID INFORMATION

Programmers			:			Laithe Marshall
Assignment #		:   		Program 1
Assignment Name		:	    	It's About Time
Course # and Title	:	    	CISC 192 - C++
Class Meeting Time	:	    	MW 9:35 - 12:45
Instructor			:	    	Professor Forman
Hours			   	:			40
Difficulty			:	    	5
Completion Date		:	    	October/26/2014
Project Name		:  	    	Program_1

***************************************************************
***************************************************************
CUSTOM DEFINED FUNCTIONS

calcHourCoords
calcMinuteCoords
calcMinuteTick
calcSecondCoords
calcTimeRemaining
clear
convertTime
countdown
displayNameStartTimeLabels
drawClock
drawClockImage
drawEdge
drawHorizontal
drawTime
drawVertical
echoAccountInfo
farewell
getAccountNumber
getPassword
laithesDraw0
laithesDraw1
laithesDraw2
laithesDraw3
laithesDraw4
laithesDraw5
laithesDraw6
laithesDraw7
laithesDraw8
laithesDraw9
welcome

***************************************************************
***************************************************************
EVENT-DRIVEN FUNCTIONS

buttonClockShow_Click
buttonContinue_Click
buttonExit_Click
buttonExitClockShow_Click
buttonStart_Click
clockShow_MouseHover
clockShow_MouseLeave
timerClock_Tick
timerClockShow_Tick
timerDateTime_Tick

***************************************************************
***************************************************************
PROGRAM DESCRIPTION

The program starts with a countdown and then welcomes the user to the Intergalactic Internet Service. 
The user is instructed to login with an account number and a password. The account number and password
are echoed back to the user. Next the user may enter their name and a start time or view a clock slide show.
When the user enters their name and start time, the program echoes both of them. The program will then display 
two clocks, one drawn and one from an image, that displays the correct hour, minute, and second hand placement.
The program the will also display the entered time in a HH:MM:SS format in orange. The user may enter their name
and a start time any number of times. When the user clicks the Exit button the program will display a countdown. After 
the countdown the program will display a farewell message, ID information, Credits, Media, and Stars in message boxes.
The program will then close.


***************************************************************
***************************************************************

CREDITS

Acknowledge those who helped you and whom you helped
Remember the “triangle of learning”

Thanks for assistance and inspiration from:

Thanks to Professor Forman for creating TDHOs.
Thanks to Christian who helped come up with the formula to draw minute & hour ticks.
Thanks to James for double checking my clock formula.

Thanks for the opportunity to assist and inspire:

Falmata
James
Larry

***************************************************************
***************************************************************

MEDIA

Music

Red Like Roses Music Box cover by ksmusicboxes
https ://soundcloud.com/ksmusicboxes/from-shadows-rwby-music-box

Forward to Time Past by John Willliams
http ://thepiratebay.se/torrent/6508827/Harry_Potter_-_The_Ultimate_Soundtrack_Collection

Sound Effects

Rocket Blast Off
http://www.youtube.com/watch?v=MmJ41X0B8xw

Images

Space Background
http ://www.hdwallpapersos.com/wp-content/uploads/2014/07/Hd-Wallpapers-Space-51.jpg

Handless Clock Image
http ://www.clker.com/cliparts/c/V/M/7/B/A/clock-without-arms-md.png

Clock Slideshow Clock Images

Clock Tree
http ://files.vladstudio.com/joy/treeofbooks/wcz/preview800x500.jpg

Eye Clock
http ://wallpaperswa.com/Art_Design/Monochrome/eyes_clocks_grayscale_monochrome_photomanipulations_2798x1894_wallpaper_32413/download_2798x1894

Greyscale Clocks Roman Numerals
http ://hdw.eweb4.com/wallpapers/6394/

Astrological Clock
http ://widewallpapers.info/wp-content/uploads/2014/08/clocks-prague-czech-republic-fresh-hd-wallpaper-Czech-Republic-HD-free-wallpapers-backgrounds-images-FHD-4k-download-2014-2015-2016.jpg

Creepy Bird Clock
http ://www.wallpaperup.com/uploads/wallpapers/2013/03/20/55072/aba405a4e79a0164e75ea6af54b88ce8.jpg

Melting Clock
http ://hd4desktop.com/images/b/1366x768_clocks-melt-Salvador-Dali-time-abstract-HD-Wallpaper.jpg

***************************************************************
***************************************************************
**************************************************************/
#pragma once

namespace Program_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
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
	private: System::Windows::Forms::Button^  buttonStart;
	private: System::Windows::Forms::PictureBox^  pictureBoxCountdown;
	private: System::Windows::Forms::Timer^  timerDateTime;
	private: System::Windows::Forms::Label^  labelDateTime;
	private: System::Windows::Forms::Label^  labelWelcomeTitle;
	private: System::Windows::Forms::Label^  labelWelcomeDescription;
	private: System::Windows::Forms::Button^  buttonContinue;
	private: System::Windows::Forms::Button^  buttonExit;
	private: System::Windows::Forms::Label^  labelAccountNumber;
	private: System::Windows::Forms::Label^  labelPassword;

	private: System::Windows::Forms::TextBox^  textBoxAccountNumber;

	private: System::Windows::Forms::TextBox^  textBoxPassword;
	private: System::Windows::Forms::PictureBox^  pictureBoxDrawnClock;
	private: System::Windows::Forms::PictureBox^  pictureBoxImageClock;
	private: System::Windows::Forms::Timer^  timerClock;
	private: System::Windows::Forms::Button^  buttonClockShow;
	private: System::Windows::Forms::Button^  buttonExitClockShow;
	private: System::Windows::Forms::Timer^  timerClockShow;







	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->pictureBoxCountdown = (gcnew System::Windows::Forms::PictureBox());
			this->timerDateTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelDateTime = (gcnew System::Windows::Forms::Label());
			this->labelWelcomeTitle = (gcnew System::Windows::Forms::Label());
			this->labelWelcomeDescription = (gcnew System::Windows::Forms::Label());
			this->buttonContinue = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->labelAccountNumber = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxAccountNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->pictureBoxDrawnClock = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxImageClock = (gcnew System::Windows::Forms::PictureBox());
			this->timerClock = (gcnew System::Windows::Forms::Timer(this->components));
			this->buttonClockShow = (gcnew System::Windows::Forms::Button());
			this->buttonExitClockShow = (gcnew System::Windows::Forms::Button());
			this->timerClockShow = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCountdown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxDrawnClock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxImageClock))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonStart
			// 
			this->buttonStart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->buttonStart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStart->ForeColor = System::Drawing::Color::White;
			this->buttonStart->Location = System::Drawing::Point(458, 556);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(93, 30);
			this->buttonStart->TabIndex = 0;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = false;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MyForm::buttonStart_Click);
			// 
			// pictureBoxCountdown
			// 
			this->pictureBoxCountdown->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxCountdown->Location = System::Drawing::Point(0, 0);
			this->pictureBoxCountdown->Name = L"pictureBoxCountdown";
			this->pictureBoxCountdown->Size = System::Drawing::Size(1008, 730);
			this->pictureBoxCountdown->TabIndex = 1;
			this->pictureBoxCountdown->TabStop = false;
			this->pictureBoxCountdown->Visible = false;

			// 
			// timerDateTime
			// 
			this->timerDateTime->Enabled = true;
			this->timerDateTime->Interval = 1000;
			this->timerDateTime->Tick += gcnew System::EventHandler(this, &MyForm::timerDateTime_Tick);
			// 
			// labelDateTime
			// 
			this->labelDateTime->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->labelDateTime->AutoSize = true;
			this->labelDateTime->BackColor = System::Drawing::Color::Transparent;
			this->labelDateTime->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDateTime->ForeColor = System::Drawing::Color::White;
			this->labelDateTime->Location = System::Drawing::Point(382, 630);
			this->labelDateTime->Name = L"labelDateTime";
			this->labelDateTime->Size = System::Drawing::Size(245, 46);
			this->labelDateTime->TabIndex = 2;
			this->labelDateTime->Text = L"The current time and date is:\r\n10/16/2014 12:20:57 PM";
			this->labelDateTime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelDateTime->Visible = false;
			// 
			// labelWelcomeTitle
			// 
			this->labelWelcomeTitle->AutoSize = true;
			this->labelWelcomeTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->labelWelcomeTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWelcomeTitle->ForeColor = System::Drawing::Color::White;
			this->labelWelcomeTitle->Location = System::Drawing::Point(258, 4);
			this->labelWelcomeTitle->Name = L"labelWelcomeTitle";
			this->labelWelcomeTitle->Size = System::Drawing::Size(493, 54);
			this->labelWelcomeTitle->TabIndex = 3;
			this->labelWelcomeTitle->Text = L"Welcome to Laithe\'s Intergalactic Internet Service\r\n                 On Laithe\'s "
				L"Intergalactic Travel\r\n";
			this->labelWelcomeTitle->Visible = false;

			// 
			// labelWelcomeDescription
			// 
			this->labelWelcomeDescription->AutoSize = true;
			this->labelWelcomeDescription->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->labelWelcomeDescription->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWelcomeDescription->ForeColor = System::Drawing::Color::White;
			this->labelWelcomeDescription->Location = System::Drawing::Point(211, 71);
			this->labelWelcomeDescription->MaximumSize = System::Drawing::Size(600, 0);
			this->labelWelcomeDescription->Name = L"labelWelcomeDescription";
			this->labelWelcomeDescription->Size = System::Drawing::Size(0, 27);
			this->labelWelcomeDescription->TabIndex = 4;
			this->labelWelcomeDescription->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelWelcomeDescription->Visible = false;
//			this->labelWelcomeDescription->TextChanged += gcnew System::EventHandler(this, &MyForm::labelWelcomeDescription_TextChanged);
			// 
			// buttonContinue
			// 
			this->buttonContinue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->buttonContinue->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonContinue->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonContinue->ForeColor = System::Drawing::Color::White;
			this->buttonContinue->Location = System::Drawing::Point(308, 352);
			this->buttonContinue->Name = L"buttonContinue";
			this->buttonContinue->Size = System::Drawing::Size(93, 30);
			this->buttonContinue->TabIndex = 5;
			this->buttonContinue->Text = L"Continue";
			this->buttonContinue->UseVisualStyleBackColor = false;
			this->buttonContinue->Visible = false;
			this->buttonContinue->Click += gcnew System::EventHandler(this, &MyForm::buttonContinue_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->buttonExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonExit->ForeColor = System::Drawing::Color::White;
			this->buttonExit->Location = System::Drawing::Point(603, 352);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(93, 30);
			this->buttonExit->TabIndex = 6;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Visible = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_Click);
			// 
			// labelAccountNumber
			// 
			this->labelAccountNumber->AutoSize = true;
			this->labelAccountNumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->labelAccountNumber->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAccountNumber->ForeColor = System::Drawing::Color::White;
			this->labelAccountNumber->Location = System::Drawing::Point(331, 243);
			this->labelAccountNumber->Name = L"labelAccountNumber";
			this->labelAccountNumber->Size = System::Drawing::Size(112, 27);
			this->labelAccountNumber->TabIndex = 7;
			this->labelAccountNumber->Text = L"Account #";
			this->labelAccountNumber->Visible = false;
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->labelPassword->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPassword->ForeColor = System::Drawing::Color::White;
			this->labelPassword->Location = System::Drawing::Point(331, 282);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(104, 27);
			this->labelPassword->TabIndex = 8;
			this->labelPassword->Text = L"Password";
			this->labelPassword->Visible = false;
			// 
			// textBoxAccountNumber
			// 
			this->textBoxAccountNumber->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAccountNumber->Location = System::Drawing::Point(481, 243);
			this->textBoxAccountNumber->Name = L"textBoxAccountNumber";
			this->textBoxAccountNumber->Size = System::Drawing::Size(176, 26);
			this->textBoxAccountNumber->TabIndex = 9;
			this->textBoxAccountNumber->Visible = false;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword->Location = System::Drawing::Point(481, 282);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(176, 26);
			this->textBoxPassword->TabIndex = 10;
			this->textBoxPassword->Visible = false;
			// 
			// pictureBoxDrawnClock
			// 
			this->pictureBoxDrawnClock->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxDrawnClock->Location = System::Drawing::Point(12, 407);
			this->pictureBoxDrawnClock->Name = L"pictureBoxDrawnClock";
			this->pictureBoxDrawnClock->Size = System::Drawing::Size(300, 300);
			this->pictureBoxDrawnClock->TabIndex = 11;
			this->pictureBoxDrawnClock->TabStop = false;
			// 
			// pictureBoxImageClock
			// 
			this->pictureBoxImageClock->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxImageClock->Location = System::Drawing::Point(696, 407);
			this->pictureBoxImageClock->Name = L"pictureBoxImageClock";
			this->pictureBoxImageClock->Size = System::Drawing::Size(300, 300);
			this->pictureBoxImageClock->TabIndex = 12;
			this->pictureBoxImageClock->TabStop = false;
			// 
			// timerClock
			// 
			this->timerClock->Interval = 1000;
			this->timerClock->Tick += gcnew System::EventHandler(this, &MyForm::timerClock_Tick);
			// 
			// buttonClockShow
			// 
			this->buttonClockShow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->buttonClockShow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonClockShow->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClockShow->ForeColor = System::Drawing::Color::White;
			this->buttonClockShow->Location = System::Drawing::Point(458, 520);
			this->buttonClockShow->Name = L"buttonClockShow";
			this->buttonClockShow->Size = System::Drawing::Size(93, 30);
			this->buttonClockShow->TabIndex = 13;
			this->buttonClockShow->Text = L"Clocks\?";
			this->buttonClockShow->UseVisualStyleBackColor = false;
			this->buttonClockShow->Visible = false;
			this->buttonClockShow->Click += gcnew System::EventHandler(this, &MyForm::buttonClockShow_Click);
			this->buttonClockShow->MouseLeave += gcnew System::EventHandler(this, &MyForm::clockShow_MouseLeave);
			this->buttonClockShow->MouseHover += gcnew System::EventHandler(this, &MyForm::clockShow_MouseHover);
			// 
			// buttonExitClockShow
			// 
			this->buttonExitClockShow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->buttonExitClockShow->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonExitClockShow->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonExitClockShow->ForeColor = System::Drawing::Color::White;
			this->buttonExitClockShow->Location = System::Drawing::Point(458, 700);
			this->buttonExitClockShow->Name = L"buttonExitClockShow";
			this->buttonExitClockShow->Size = System::Drawing::Size(93, 30);
			this->buttonExitClockShow->TabIndex = 14;
			this->buttonExitClockShow->Text = L"Exit";
			this->buttonExitClockShow->UseVisualStyleBackColor = false;
			this->buttonExitClockShow->Visible = false;
			this->buttonExitClockShow->Click += gcnew System::EventHandler(this, &MyForm::buttonExitClockShow_Click);
			// 
			// timerClockShow
			// 
			this->timerClockShow->Interval = 2000;
			this->timerClockShow->Tick += gcnew System::EventHandler(this, &MyForm::timerClockShow_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 730);
			this->Controls->Add(this->buttonExitClockShow);
			this->Controls->Add(this->buttonClockShow);
			this->Controls->Add(this->pictureBoxImageClock);
			this->Controls->Add(this->pictureBoxDrawnClock);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxAccountNumber);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->labelAccountNumber);
			this->Controls->Add(this->labelWelcomeDescription);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonContinue);
			this->Controls->Add(this->pictureBoxCountdown);
			this->Controls->Add(this->labelWelcomeTitle);
			this->Controls->Add(this->labelDateTime);
			this->Controls->Add(this->buttonStart);
			this->Name = L"MyForm";
			this->Text = L"Program 1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCountdown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxDrawnClock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxImageClock))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/*//////////////////////////////////////////////////////////////

							DECLARE GLOBAL CONSTANTS

		/////////////////////////////////////////////////////////////*/

		const String^ MY_NAME = "Laithe";

		///////////////////////////////////////////////////////////////

		/*//////////////////////////////////////////////////////////////

							DECLARE GLOBAL VARIABLES

		//////////////////////////////////////////////////////////////*/

		String^ name = "default name";


		///////////////////////////////////////////////////////////////



		/*//////////////////////////////////////////////////////////////

						CUSTOM DEFINED FUNCTIONS

		//////////////////////////////////////////////////////////////*/

		/**************************************************************

				NAME: calcHourCoords

				DESCRIPTION: Calculates the x,y value for the endpoint of the clock hour hand

				PRECONDITIONS: Assume that hour and minute are positive integers and provided by the user.
				Hour ranges from (0-23) and minute ranges from (0-59). xHour and yHour are passed by reference,
				and do not require an intial value but must of type double.

				POSTCONDITIONS: The angle of the hour hand is calculated by the formula hA = (hour*30 + minute/2).
				The angle is then converted into to radians with the formula A (in radians) = hA(in degrees) * pi/180.
				xHour is the x coordinate that is calculated using the formula xHour = (midpoint x value) + (Sin(A) * (hour hand length)).
				yHour is the y coordinate that is calculated using the formula yHour = (midpoint y value) - (Cos(A) * (hour hand length)).
				xHour and yHour are returned by reference.
				
				CALLED BY: drawClock, drawClockImage

				CALLS: None

		**************************************************************/


		void calcHourCoords(int hour, int minute, double &xHour, double &yHour)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////
			
			const double &pi = Math::PI;

			double hAngle = ((hour * 30) + (minute * 0.5)) * (pi / 180);

			////////////////////////////////////////////////////////////////////

			xHour = 150 + (Math::Sin(hAngle) * 60);
			yHour = 150 - (Math::Cos(hAngle) * 60);

		}

		/**************************************************************

		NAME: calcMinuteCoords

		DESCRIPTION: Calculates the x,y value for the endpoint of the clock minute hand

		PRECONDITIONS: Assume that minute is a positive integer and provided by the user.
		minute ranges from (0-59). xMinute and yMinute are passed by reference,
		and do not require an intial value but must of type double.

		POSTCONDITIONS: The angle of the minute hand is calculated by the formula mA = (minute * 6).
		The angle is then converted into to radians with the formula A (in radians) = mA(in degrees) * pi/180.
		xMinute is the x coordinate that is calculated using the formula xMinute = (midpoint x value) + (Sin(A) * (minute hand length)).
		yMinute is the y coordinate that is calculated using the formula yMinute = (midpoint y value) - (Cos(A) * (minute hand length)).
		xMinute and yMinute are returned by reference.

		CALLED BY: drawClock, drawClockImage

		CALLS: None

		**************************************************************/

		void calcMinuteCoords(int minute, double &xMinute, double &yMinute)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			
				const double &pi = Math::PI;

				double mAngle = (6 * minute) * (pi / 180);
			

			////////////////////////////////////////////////////////////////////

			xMinute = 150 + (Math::Sin(mAngle) * 100);
			yMinute = 150 - (Math::Cos(mAngle) * 100);
		}	

		/**************************************************************

		NAME: calcMinuteTick

		DESCRIPTION: Calculates the x,y value for the start point and the x,y for the endpoint of the clock minute ticks

		PRECONDITIONS: Assume that minute is a positive integer and provided by the user.
		minute ranges from (0-59). xTick, yTick, x2Tick, y2Tick are passed by reference,
		and do not require an intial value but must of type double.

		POSTCONDITIONS: The angle of the minute tick is calculated by the formula mA = (minute * 6).
		The angle is then converted into to radians with the formula A (in radians) = mA(in degrees) * pi/180.
		
		xTick is the start point x coordinate that is calculated using the formula: 
		xTick = (midpoint x value) + (Sin(A) * (length from midpoint of circle to starting point of the tick)).

		yTick is the start point y coordinate that is calculated using the formula :
		yTick = (midpoint y value) - (Cos(A) * (length from midpoint of circle to starting point of the tick)).

		x2Tick is the endpoint x coordinate that is calculated using the formula:
		x2Tick = (xTick) + (Sin(A) * (length of tick)).

		y2Tick is the endpoint y coordinate that is calculated using the formula :
		y2Tick = (yTick) - (Cos(A) * (length of tick)).
		
		xTick, yTick, x2Tick, y2Tick are returned by reference.

		CALLED BY: drawClock, drawClockImage

		CALLS: None

		**************************************************************/

		void calcMinuteTick(int minute, double &xTick, double &yTick, double &x2Tick, double &y2Tick)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////


			const double &pi = Math::PI;

			double mAngle = (6 * minute) * (pi / 180);


			////////////////////////////////////////////////////////////////////

			xTick = 150 + (Math::Sin(mAngle) * 130);
			yTick = 150 - (Math::Cos(mAngle) * 130);

			x2Tick = xTick + (Math::Sin(mAngle) * 15);
			y2Tick = yTick - (Math::Cos(mAngle) * 15);
		}

		/**************************************************************

		NAME: calcSecondCoords

		DESCRIPTION: Calculates the x,y value for the endpoint of the clock minute hand

		PRECONDITIONS: Assume that second is a positive integer and provided by the user.
		second ranges from (0-59). xSecond and ySecond are passed by reference,
		and do not require an intial value but must of type double.

		POSTCONDITIONS: The angle of the second hand is calculated by the formula mA = (second * 6).
		The angle is then converted into to radians with the formula A (in radians) = sA(in degrees) * pi/180.
		xMinute is the x coordinate that is calculated using the formula xSecond = (midpoint x value) + (Sin(A) * (second hand length)).
		yMinute is the y coordinate that is calculated using the formula ySecond = (midpoint y value) - (Cos(A) * (second hand length)).
		xSecond and ySecond are returned by reference.

		CALLED BY: drawClock, drawClockImage

		CALLS: None

		**************************************************************/

		void calcSecondCoords(int second, double &xSecond, double &ySecond)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////


			const double &pi = Math::PI;

			double sAngle = (6 * second) * (pi / 180);


			////////////////////////////////////////////////////////////////////

			xSecond = 150 + (Math::Sin(sAngle) * 110);
			ySecond = 150 - (Math::Cos(sAngle) * 110);
		}

		/**************************************************************

				NAME: calcTimeRemaining

				DESCRIPTION: Calculates the minutes and seconds to the next hour and displays
				it in a label. 

				Ex hour = 12, minute = 13, second = 55
				Display: ...That will be 46 minutes and 05 seconds until 13 hour.

				PRECONDITIONS: Assume hour, minute, and second are positive integers entered by the user.
				hour ranges from (0-23), minute ranges from (0-59), second ranges from (0-59).

				POSTCONDITIONS: None

				CALLED BY: buttonContinue_Click

				CALLS: none

		**************************************************************/

		void calcTimeRemaining(int hour, int minute, int second)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			TimeSpan originalTime = TimeSpan(0, hour, minute, second);
			TimeSpan secondTime = TimeSpan(0, (hour + 1), 0, 0);
			TimeSpan timeDifference = secondTime - originalTime;

			int minutesTill, secondsTill;

			////////////////////////////////////////////////////////////////////

			 minutesTill = timeDifference.Minutes;
			 secondsTill = timeDifference.Seconds;
			 hour = secondTime.Hours;

			if (second == 0)
			{  // .ToString("D2") the D2 is a command that will treat the integer as a decimal that will have at least two digits.
			   // if the integer value is only one digit .ToString("D2") will add a leading zero. 
				labelWelcomeDescription->Text += "\nThat will be " + (minutesTill).ToString("D2") + " minutes until "
					+ (hour).ToString("D2") + " hour.";
			}

			else
			{
				labelWelcomeDescription->Text += "\nThat will be " + (minutesTill).ToString("D2") + " minutes and "
					+ (secondsTill).ToString("D2") + " seconds until " + (hour).ToString("D2") + " hour.";
			}
		}

		/**************************************************************

				NAME: clear

				DESCRIPTION: Clears the drawing canvas by redrawing spaceImage

				PRECONDITIONS: clear requires an intialized Graphics canvas to draw the image on.

				POSTCONDITIONS: None

				CALLED BY: cutton_ClockShow_Click, buttonExitClockShow_Click, countdown, drawTime, welcome


				CALLS: None

		**************************************************************/

		void clear(Graphics^ &canvas)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			Image^ spaceImage = Image::FromFile("...//Media/Images//Hd-Wallpapers-Space-51.jpg");

			////////////////////////////////////////////////////////////////////



			//canvas->Clear(Color::Transparent);

			canvas->DrawImage(spaceImage, 0, 0, 1008, 730); // 1024-16 = 1008, 768-730 = 38 may be useful for stretching images manually

		}

		/**************************************************************

				NAME: convertTime

				DESCRIPTION: Converts the HH:MM:SS format to integer values for hour minute and second.

				PRECONDITIONS: Assume user has entered the hour, minute, and second in a string in HH:MM:SS format
				and that string is referenced by sTime. hour, minute, and second are also passed by reference, but do not need
				an intial value.

				POSTCONDITIONS: sTime is split into a String^ array splitTime, with a substring created by copying every
				character in sTime until the ":", in which the next substring will begin after the ":". These substrings are 
				then parsed to try to get a corresponding integer value of the hour, minute, and second. 
				These values are returned by reference in hour, minute, and second.

				CALLED BY: buttonContinue_Click

				CALLS: None

		**************************************************************/


		void convertTime(String^ &sTime, int &hour, int &minute, int &second)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			//int time, remainder;

			array<String^> ^splitTime;
			array<String^> ^separator = { ":" };

			////////////////////////////////////////////////////////////////////

		
				splitTime = sTime->Split(separator, System::StringSplitOptions::RemoveEmptyEntries);
				
				Int32::TryParse(splitTime[0], hour);
				Int32::TryParse(splitTime[1], minute);
				Int32::TryParse(splitTime[2], second);

				//Int32::TryParse(sTime, time);

				//hour = time / 10000;
				//remainder = time % 10000;
				//minute = remainder / 100;
				//second = remainder % 100;
		}

		/**************************************************************

				NAME: countdown

				DESCRIPTION: Displays a countsdown from 9 to 0 by drawing red numerals based on a 7 segment LED display
				and plays a rocket blast off sound at 0.

				PRECONDITIONS: countdown requires an intialized Graphics canvas to pass to the functions it calls.

				POSTCONDITIONS: None

				CALLED BY: farewell, welcome

				CALLS: clear, laithesDraw9, laithesDraw8, laithesDraw7, laithesDraw6, laithesDraw5
				laithesDraw4, laithesDraw3, laithesDraw2, laithesDraw1, laithesDraw0

		**************************************************************/

		void countdown(Graphics^ &canvas)
		{
			
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			System::Media::SoundPlayer sndPlayer("..//Media/Audio/Sound Effects/rocket blast off SFX.wav");

			////////////////////////////////////////////////////////////////////


			clear(canvas);

			laithesDraw9(400, 100, canvas);
			Threading::Thread::Sleep(1000);
			clear(canvas);

		
			laithesDraw8(400, 100, canvas);
			Threading::Thread::Sleep(1000);
			clear(canvas);

			laithesDraw7(400, 100, canvas);
			Threading::Thread::Sleep(1000);
			clear(canvas);


			laithesDraw6(400, 100, canvas);
			Threading::Thread::Sleep(1000);
			clear(canvas);


			laithesDraw5(400, 100, canvas);
			Threading::Thread::Sleep(1000);
			clear(canvas);


			laithesDraw4(400, 100, canvas);
			Threading::Thread::Sleep(1000);
			clear(canvas);


			laithesDraw3(400, 100, canvas);
			Threading::Thread::Sleep(1000);
			clear(canvas);


			laithesDraw2(400, 100, canvas);
			Threading::Thread::Sleep(1000);
			clear(canvas);

			sndPlayer.Play();

			laithesDraw1(400, 100, canvas);
			Threading::Thread::Sleep(1000);
			clear(canvas);

			laithesDraw0(400, 100, canvas);
			Threading::Thread::Sleep(1000);
			clear(canvas);
		}

		/**************************************************************

				NAME: displayNameStartTimeLabels

				DESCRIPTION: Displays labels and textboxes required to instruct and allow the user to input his/her name and 
				start time in HH:MM:SS format.

				PRECONDITIONS: None

				POSTCONDITIONS: None

				CALLED BY: buttonContinue_Click

				CALLS: None

		**************************************************************/


		void displayNameStartTimeLabels()
		{
			labelWelcomeDescription->Text = "Please enter your name and your start time. \n Start time format: hh:mm:ss \n (0-23 hour) (0-59 minute) (0-59 second)";


			labelAccountNumber->Visible = true;
			labelAccountNumber->Text = "Name";

			textBoxAccountNumber->Text = "Please enter your name.";
			textBoxAccountNumber->Visible = true;

			labelPassword->Visible = true;
			labelPassword->Text = "Start time";

			textBoxPassword->Visible = true;
			textBoxPassword->PasswordChar::set(0);
			textBoxPassword->Text = "HH:MM:SS";

			buttonContinue->Text = "Submit";

			buttonClockShow->Visible = true;
		}

		/**************************************************************

				NAME: drawClock

				DESCRIPTION: Draws a clock 300 by 300 in size with a black border, a white face, and with hour, minute, and second hands.

				PRECONDITIONS: Assume hour, minute, and second are positive integers entered by the user.
				hour ranges from (0-23), minute ranges from (0-59), second ranges from (0-59). These values are passed by reference.

				POSTCONDITIONS: None

				CALLED BY: buttonContinue_Click, timerClock_Tick

				CALLS: calcHourCoords, calcMinute, Coords, calcMinuteTick, calcSecondCoords

		**************************************************************/


		void drawClock(int &hour, int &minute, int &second)
		{
			

			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			double xHour = 0, yHour = 0, xMinute = 0, yMinute = 0, xSecond = 0, ySecond = 0;

			Brush^ drawBrushBlack = gcnew Drawing::SolidBrush(System::Drawing::Color::Black);
			Brush^ drawBrushWhite = gcnew Drawing::SolidBrush(System::Drawing::Color::White);


			Pen^ drawPenBlack = gcnew Drawing::Pen(System::Drawing::Color::Black, 4);//bug found if width is odd hour 00 will align, but not hour 12
			Pen^ drawPenBlackThin = gcnew Drawing::Pen(System::Drawing::Color::Black, 2);
			Pen^ drawPenPurple = gcnew Drawing::Pen(System::Drawing::Color::Purple, 4);
			Pen^ drawPenRed = gcnew Drawing::Pen(System::Drawing::Color::Red, 2);
			Pen^ drawPenOrange = gcnew Drawing::Pen(System::Drawing::Color::Orange, 6);

			Drawing::Font^ drawFont = gcnew Drawing::Font("Times New Roman", 14);

			Graphics^  canvas = pictureBoxDrawnClock->CreateGraphics();

			////////////////////////////////////////////////////////////////////


			canvas->FillEllipse(drawBrushBlack, 0, 0, 300, 300);
			canvas->FillEllipse(drawBrushWhite, 5, 5, 290, 290);


			//Draws the minute ticks using bolder lines that also represent the hour ticks

			for (int m = 0; m < 60; m ++) 
			{
				////////////////////////////////////////////////////////////////////
				//
				//				DECLARE LOCAL VARIABLES/OBJECTS
				//
				////////////////////////////////////////////////////////////////////

				double x1, x2, y1, y2;

				////////////////////////////////////////////////////////////////////
				
				calcMinuteTick(m, x1, y1, x2, y2);

				//Draws the minute ticks creating darker ticks for the hour ticks
				if (m % 5 == 0)
				{
					canvas->DrawLine(drawPenBlack, (int)x1, (int)y1, (int)x2, (int)y2);
				}

				else
				{
					canvas->DrawLine(drawPenBlackThin, (int)x1, (int)y1, (int)x2, (int)y2);
				}
				
				
			}

			//canvas->DrawLine(drawPenBlack, 150, 5, 150, 295); //vertical line used for spacing of numbers on the drawn clock
			//canvas->DrawLine(drawPenBlack, 5, 150, 295, 150); //horizontal line

			// Draws the numbers of the clock

			canvas->DrawString("12", drawFont, drawBrushBlack, 137, 20);
			canvas->DrawString("1", drawFont, drawBrushBlack, 200, 35);
			canvas->DrawString("2", drawFont, drawBrushBlack, 245, 80);
			canvas->DrawString("3", drawFont, drawBrushBlack, 260, 139);
			canvas->DrawString("4", drawFont, drawBrushBlack, 245, 195);
			canvas->DrawString("5", drawFont, drawBrushBlack, 200, 245);
			canvas->DrawString("6", drawFont, drawBrushBlack, 142, 260);
			canvas->DrawString("7", drawFont, drawBrushBlack, 80, 245);
			canvas->DrawString("8", drawFont, drawBrushBlack, 40, 195);
			canvas->DrawString("9", drawFont, drawBrushBlack, 25, 138);
			canvas->DrawString("10", drawFont, drawBrushBlack, 35, 80);
			canvas->DrawString("11", drawFont, drawBrushBlack, 80, 35);

			calcHourCoords(hour, minute, xHour, yHour);

			calcMinuteCoords(minute, xMinute, yMinute);

			calcSecondCoords(second, xSecond, ySecond);

			//Draws the Hour, Minute, and Second hand

			canvas->DrawLine(drawPenPurple, 150, 150, xMinute, yMinute);
			canvas->DrawLine(drawPenOrange, 150, 150, xHour, yHour);
			canvas->DrawLine(drawPenRed, 150, 150, xSecond, ySecond);

			
		}

		/**************************************************************

		NAME: drawClockImage

		DESCRIPTION: Draws a clock 300 by 300 in size, from an image, and with hour, minute, and second hands.

		PRECONDITIONS: Assume hour, minute, and second are positive integers entered by the user.
		hour ranges from (0-23), minute ranges from (0-59), second ranges from (0-59). These values are passed by reference.

		POSTCONDITIONS: None

		CALLED BY: buttonContinue_Click,

		CALLS: calcHourCoords, calcMinute, Coords, calcSecondCoords

		**************************************************************/

		void drawClockImage(int &hour, int &minute, int &second)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			double xHour = 0, yHour = 0, xMinute = 0, yMinute = 0, xSecond = 0, ySecond = 0;

			Pen^ drawPenPurple = gcnew Drawing::Pen(System::Drawing::Color::Purple, 4);
			Pen^ drawPenRed = gcnew Drawing::Pen(System::Drawing::Color::Red, 2);
			Pen^ drawPenOrange = gcnew Drawing::Pen(System::Drawing::Color::Orange, 6);

			Graphics^  canvas = pictureBoxImageClock->CreateGraphics();

			Image^ clockImage = Image::FromFile("...//Media/Images//clock-without-arms-md.png");

			////////////////////////////////////////////////////////////////////


			calcHourCoords(hour, minute, xHour, yHour);

			calcMinuteCoords(minute, xMinute, yMinute);

			calcSecondCoords(second, xSecond, ySecond);

			//Draws the Clock image and the Hour, Minute, and Second hand

			canvas->DrawImage(clockImage, 0, 0, 300, 300);

			canvas->DrawLine(drawPenPurple, 150, 150, xMinute, yMinute);
			canvas->DrawLine(drawPenOrange, 150, 150, xHour, yHour);
			canvas->DrawLine(drawPenRed, 150, 150, xSecond, ySecond);
		}

		/**************************************************************

				NAME: drawEdge

				DESCRIPTION: Draws a red polygon based on an array of points.

				PRECONDITIONS: Assume that programmer knows the points (x,y) in which he/she would like to draw a polygon and has put those
				points in a Point array. drawEdge requires an intialized Graphics canvas to draw its polygon on.

				POSTCONDITIONS: None

				CALLED BY: laithesDraw9, laithesDraw8, laithesDraw7, laithesDraw6, laithesDraw5
				laithesDraw4, laithesDraw3, laithesDraw2, laithesDraw1, laithesDraw0

				CALLS: None

		**************************************************************/

		void drawEdge(array<Point>^ coords, Graphics^ &canvas)
		{
			/*//////////////////////////////////////////////////////////////

			DECLARE LOCAL VARIABLES

			//////////////////////////////////////////////////////////////*/

			//canvas = this->CreateGraphics();

			Brush^ drawBrush = gcnew Drawing::SolidBrush(System::Drawing::Color::Red);

			///////////////////////////////////////////////////////////////

			canvas->FillPolygon(drawBrush, coords);

		}

		/**************************************************************

				NAME: drawHorizontal

				DESCRIPTION: Draws a red horizontal rectangle.

				PRECONDITIONS: Assume that programmer knows the starting point (col, row) in which he/she would 
				like to draw a horizontal rectangle as well as its length and width.
				drawHorizontal requires an intialized Graphics canvas to draw its horizontal rectangle on.

				POSTCONDITIONS: None

				CALLED BY: laithesDraw9, laithesDraw8, laithesDraw7, laithesDraw6, laithesDraw5
				laithesDraw4, laithesDraw3, laithesDraw2, laithesDraw1, laithesDraw0

				CALLS: None

		**************************************************************/

		void drawHorizontal(int col, int row, int length, int width, Graphics^ &canvas)
		{
			/*//////////////////////////////////////////////////////////////

			DECLARE LOCAL VARIABLES

			//////////////////////////////////////////////////////////////*/


			Brush^ drawBrush = gcnew Drawing::SolidBrush(System::Drawing::Color::Red);

			///////////////////////////////////////////////////////////////

			canvas->FillRectangle(drawBrush, col, row, length, width);
		}

		/**************************************************************

				NAME: drawTime

				DESCRIPTION: Draws the time in HH:MM:SS format including leading zeros on single digits.

				PRECONDITIONS: Assume hour, minute, and second are positive integers entered by the user.
				hour ranges from (0-23), minute ranges from (0-59), second ranges from (0-59). These values are passed by reference.
				fontName is a string of the name a recognized font on the system and is entered by the programmer.
				fontSize is a positive integer representing font size ranging from (8-72) and is entered by the programmer.
				POSTCONDITIONS: None

				CALLED BY: buttonContinue_Click

				CALLS: clear

		**************************************************************/

		void drawTime(int &hour, int &minute, int &second, String^ &fontName, int &fontSize)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			String^ time = hour.ToString("D2") + ":" + minute.ToString("D2") + ":" + second.ToString("D2");

			Brush^ drawBrushOrange = gcnew Drawing::SolidBrush(System::Drawing::Color::Orange);
			Drawing::Font^ drawFont = gcnew Drawing::Font(fontName, fontSize);


			Graphics^  canvas = pictureBoxCountdown->CreateGraphics();

			////////////////////////////////////////////////////////////////////

			clear(canvas);

			canvas->DrawString(time, drawFont, drawBrushOrange, 410, 407);
		}

		/**************************************************************

		NAME: drawVertical

		DESCRIPTION: Draws a red vertical rectangle.

		PRECONDITIONS: Assume that programmer knows the starting point (col, row) in which he/she would
		like to draw a vertical rectangle as well as its length and width.
		drawVertical requires an intialized Graphics canvas to draw its horizontal rectangle on.

		POSTCONDITIONS: None

		CALLED BY: laithesDraw9, laithesDraw8, laithesDraw7, laithesDraw6, laithesDraw5
		laithesDraw4, laithesDraw3, laithesDraw2, laithesDraw1, laithesDraw0

		CALLS: None

		**************************************************************/

		void drawVertical(int col, int row, int length, int width, Graphics^ &canvas)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			Brush^ drawBrush = gcnew Drawing::SolidBrush(System::Drawing::Color::Red);

			////////////////////////////////////////////////////////////////////


			canvas->FillRectangle(drawBrush, col, row, length, width);
		}

		/**************************************************************

				NAME: echoAccountInfo

				DESCRIPTION: Displays user inputed account number and password in a label.

				EX accountNumber = 12345, password = P@ssw0rd
				Display: Thank you for entering the account #: 12345 and the password: P@ssw0rd.

				PRECONDITIONS: accountNumber and password are both strings entered by user. acountNumber
				should have no other characters than (0-9) and be at a minimum length of 4 characters.
				password must be a minimum of 6 characters.

				POSTCONDITIONS: None

				CALLED BY: buttonContinue_Click

				CALLS: None

		**************************************************************/

		void echoAccountInfo(String^ accountNumber, String^ password)
		{
			labelWelcomeDescription->Text = "Thank you for entering the account #: " + accountNumber
											+ " and the password: " + password + ".";
		}

		/**************************************************************

				NAME: farewell

				DESCRIPTION: Displays a countdown and a farewell message, ID information, Credits, Media, and Stars in message boxes.
				farewell then closes the form.

				PRECONDITIONS: None

				POSTCONDITIONS: None

				CALLED BY: buttonExit_Click

				CALLS: countdown

		**************************************************************/

		void farewell()
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			Graphics^ canvas = pictureBoxCountdown->CreateGraphics();

			////////////////////////////////////////////////////////////////////

			countdown(canvas);

			MessageBox::Show(
				name + ", we hope you have enjoyed our internet service here at " + MY_NAME + "'s Intergalatic Travel Agency.",
				"SEE YOU SOON!" // message box caption
				);
			MessageBox::Show(
				"Programmers: \t\tLaithe Marshall\n"
				"Assignment #: \t\tProgram 1\n"
				"Assignment Name: \t\tIt's About Time\n"
				"Course # and Title: \t\tCISC 192 - C++\n"
				"Class Meeting Time: \t\tMW 9:35 - 12:45\n"
				"Instructor: \t\tProfessor Forman\n"
				"Hours: \t\t\t40\n"
				"Difficulty: \t\t\t5\n"
				"Completion Date: \t\tOctober/26/2014\n"
				"Project Name: \t\tProgram_1\n"
				, "ID INFORMATION" // message box caption
				);

			MessageBox::Show(
				"Thanks to Professor Forman for creating TDHOs.\n\n"
				, "CREDITS" // message box caption
				);

			MessageBox::Show(
				"Music\n\n"
				"Red Like Roses Music Box cover by ksmusicboxes\n"
				"https ://soundcloud.com/ksmusicboxes/from-shadows-rwby-music-box\n\n"

				"Forward to Time Past by John Willliams\n"
				"http ://thepiratebay.se/torrent/6508827/Harry_Potter_-_The_Ultimate_Soundtrack_Collection\n\n"

				"Sound Effects\n\n"
				"Rocket Blast Off\n"
				"http://www.youtube.com/watch?v=MmJ41X0B8xw\n\n"

				"Images\n\n"
				"Space Background\n"
				"http ://www.hdwallpapersos.com/wp-content/uploads/2014/07/Hd-Wallpapers-Space-51.jpg\n\n"

				"Handless Clock Image\n"
				"http ://www.clker.com/cliparts/c/V/M/7/B/A/clock-without-arms-md.png\n\n"

				"Clock Slideshow Clock Images\n\n"
				"Clock Tree\n"
				"http ://files.vladstudio.com/joy/treeofbooks/wcz/preview800x500.jpg\n\n"

				"Eye Clock\n"
				"http ://wallpaperswa.com/Art_Design/Monochrome/eyes_clocks_grayscale_monochrome_photomanipulations_2798x1894_wallpaper_32413/download_2798x1894\n\n"
				
				"Greyscale Clocks Roman Numerals\n"
				"http ://hdw.eweb4.com/wallpapers/6394/\n\n"
				
				"Astrological Clock\n"
				"http ://widewallpapers.info/wp-content/uploads/2014/08/clocks-prague-czech-republic-fresh-hd-wallpaper-Czech-Republic-HD-free-wallpapers-backgrounds-images-FHD-4k-download-2014-2015-2016.jpg\n\n"
				
				"Creepy Bird Clock\n"
				"http ://www.wallpaperup.com/uploads/wallpapers/2013/03/20/55072/aba405a4e79a0164e75ea6af54b88ce8.jpg\n\n"
				
				"Melting Clock\n"
				"http ://hd4desktop.com/images/b/1366x768_clocks-melt-Salvador-Dali-time-abstract-HD-Wallpaper.jpg\n\n"

				, "MEDIA" // message box caption
				);

			MessageBox::Show(

				"1. Insert 0's to formatted time without if statements 6\n"
				"2. Display clock at beginning with current time\n"
				"3. Take time data as hh:mm:ss\n"
				"4. Compute how many minutes to the next hour\n"
				"5. Play clock ticking sound or other appropriate sound in background\n"
				"6. Increase thickness of clock hands to stand out more\n"
				"7. Add button for musical slide show of many clocks\n"
				"8. Draw clock hands on clock image\n"
				"9. Two clocks, one drawn, on from image\n"
				"10. Add 1- 12 on drawn clock\n"
				"11. Extra pizzazz draw minute markers with for loop accounting for Hour markers\n"
				"12. Use DrawString to draw the time string\n"
				"13. Advanced Feature: Used string array to cycle through images for slide show \n"
				"14. Prompt user for hour minute and second and add second info in rest of program\n"
				"Total Stars: 14"
				, "STARS" // message box caption
				);

			Close();

		}

		/**************************************************************

				NAME: getAccountNumber

				DESCRIPTION: Returns the string of the account number entered by a user in a textbox.

				PRECONDITIONS: None

				POSTCONDITIONS: See Description

				CALLED BY: buttonContinue_Click

				CALLS: None

		**************************************************************/


		String^ getAccountNumber()
		{
			return textBoxAccountNumber->Text;
		}

		/**************************************************************

				NAME: getPassword

				DESCRIPTION: Returns a String^ of a password a user entered in a textbox

				PRECONDITIONS: Assume a String^ is passed by reference to the function. The String^ does not need an inital value.

				POSTCONDITIONS: The String^ is returned by reference.

				CALLED BY: buttonContinue_Click

				CALLS: none

		**************************************************************/


		void getPassword(String^ &password)
		{
			password = textBoxPassword->Text;
		}

		/**************************************************************

		NAME: laithesDraw0

		DESCRIPTION: Draws a red LED styled 0

		PRECONDITIONS: Assume programmer knows where he/she wants to place staring coordinates to draw the 0 (col, row)
		laithesDraw0 requires an intialized Graphics canvas to draw its 0.
		
		POSTCONDITIONS: None

		CALLED BY: countdown

		CALLS: drawEdge, drawHorizontal, drawVertical

		**************************************************************/


		void laithesDraw0(int col, int row, Graphics^ &canvas)
		{
			/*//////////////////////////////////////////////////////////////

			DECLARE LOCAL VARIABLES

			//////////////////////////////////////////////////////////////*/

			// pointRA1 pointLA1 represents 
			// R = right side, L = Left side
			// A = A segment, B = B Segment, C = C Segment, etc
			// 1 = triangle point 1, 2 = triangle point 2, 3 = triangle point 3

			/*
			Each point represents the the triangle on each edge of the


			7 Segment LED Display
			A
			-----
			F |  G  | B
			-----
			E |	    | C
			-----
			D
			*/
			//                     col, row 
			Point pointRA1 = Point(14 + col, 13 + row);
			Point pointRA2 = Point(27 + col, 0 + row);
			Point pointRA3 = Point(27 + col, 25 + row);

			Point pointLA1 = Point(192 + col, 13 + row);
			Point pointLA2 = Point(177 + col, 0 + row);
			Point pointLA3 = Point(177 + col, 25 + row);

			Point pointRB1 = Point(193 + col, 14 + row);
			Point pointRB2 = Point(180 + col, 27 + row);
			Point pointRB3 = Point(205 + col, 27 + row);

			Point pointLB1 = Point(193 + col, 189 + row);
			Point pointLB2 = Point(180 + col, 177 + row);
			Point pointLB3 = Point(205 + col, 177 + row);

			Point pointRC1 = Point(193 + col, 191 + row);
			Point pointRC2 = Point(180 + col, 206 + row);
			Point pointRC3 = Point(205 + col, 206 + row);

			Point pointLC1 = Point(193 + col, 371 + row);
			Point pointLC2 = Point(180 + col, 356 + row);
			Point pointLC3 = Point(205 + col, 356 + row);

			Point pointRD1 = Point(14 + col, 372 + row);
			Point pointRD2 = Point(27 + col, 359 + row);
			Point pointRD3 = Point(27 + col, 384 + row);

			Point pointLD1 = Point(192 + col, 372 + row);
			Point pointLD2 = Point(177 + col, 359 + row);
			Point pointLD3 = Point(177 + col, 384 + row);

			Point pointRE1 = Point(13 + col, 191 + row);
			Point pointRE2 = Point(0 + col, 206 + row);
			Point pointRE3 = Point(25 + col, 206 + row);

			Point pointLE1 = Point(13 + col, 371 + row);
			Point pointLE2 = Point(0 + col, 356 + row);
			Point pointLE3 = Point(25 + col, 356 + row);

			Point pointRF1 = Point(13 + col, 14 + row);
			Point pointRF2 = Point(0 + col, 27 + row);
			Point pointRF3 = Point(25 + col, 27 + row);

			Point pointLF1 = Point(13 + col, 189 + row);
			Point pointLF2 = Point(0 + col, 177 + row);
			Point pointLF3 = Point(25 + col, 177 + row);

			Point pointRG1 = Point(14 + col, 190 + row);
			Point pointRG2 = Point(27 + col, 177 + row);
			Point pointRG3 = Point(27 + col, 202 + row);

			Point pointLG1 = Point(192 + col, 190 + row);
			Point pointLG2 = Point(177 + col, 177 + row);
			Point pointLG3 = Point(177 + col, 202 + row);

			array<Point>^ triangleRA = { pointRA1, pointRA2, pointRA3 };
			array<Point>^ triangleLA = { pointLA1, pointLA2, pointLA3 };

			array<Point>^ triangleRB = { pointRB1, pointRB2, pointRB3 };
			array<Point>^ triangleLB = { pointLB1, pointLB2, pointLB3 };

			array<Point>^ triangleRC = { pointRC1, pointRC2, pointRC3 };
			array<Point>^ triangleLC = { pointLC1, pointLC2, pointLC3 };

			array<Point>^ triangleRD = { pointRD1, pointRD2, pointRD3 };
			array<Point>^ triangleLD = { pointLD1, pointLD2, pointLD3 };

			array<Point>^ triangleRE = { pointRE1, pointRE2, pointRE3 };
			array<Point>^ triangleLE = { pointLE1, pointLE2, pointLE3 };

			array<Point>^ triangleRF = { pointRF1, pointRF2, pointRF3 };
			array<Point>^ triangleLF = { pointLF1, pointLF2, pointLF3 };

			array<Point>^ triangleRG = { pointRG1, pointRG2, pointRG3 };
			array<Point>^ triangleLG = { pointLG1, pointLG2, pointLG3 };




			///////////////////////////////////////////////////////////////

			// segment A

			drawEdge(triangleRA, canvas);
			drawHorizontal(27 + col, 0 + row, 150, 25, canvas);
			drawEdge(triangleLA, canvas);

			// segment B

			drawEdge(triangleRB, canvas);
			drawVertical(180 + col, 27 + row, 25, 150, canvas);
			drawEdge(triangleLB, canvas);

			// segment C

			drawEdge(triangleRC, canvas);
			drawVertical(180 + col, 206 + row, 25, 150, canvas);
			drawEdge(triangleLC, canvas);

			// segment D

			drawEdge(triangleRD, canvas);
			drawHorizontal(27 + col, 359 + row, 150, 25, canvas);
			drawEdge(triangleLD, canvas);

			// segment E

			drawEdge(triangleRE, canvas);
			drawVertical(0 + col, 206 + row, 25, 150, canvas);
			drawEdge(triangleLE, canvas);

			// segment F

			drawEdge(triangleRF, canvas);
			drawVertical(0 + col, 27 + row, 25, 150, canvas);
			drawEdge(triangleLF, canvas);

			//// segment G

			//drawEdge(triangleRG);
			//drawHorizontal(27 + col, 177 + row, 150, 25);
			//drawEdge(triangleLG);
		}

		/**************************************************************

		NAME: laithesDraw1

		DESCRIPTION: Draws a red LED styled 1

		PRECONDITIONS: Assume programmer knows where he/she wants to place staring coordinates to draw the 1 (col, row)
		laithesDraw1 requires an intialized Graphics canvas to draw its 1.

		POSTCONDITIONS: None

		CALLED BY: countdown

		CALLS: drawEdge, drawHorizontal, drawVertical

		**************************************************************/

		void laithesDraw1(int col, int row, Graphics^ &canvas)
		{
			/*//////////////////////////////////////////////////////////////

			DECLARE LOCAL VARIABLES

			//////////////////////////////////////////////////////////////*/

			// pointRA1 pointLA1 represents 
			// R = right side, L = Left side
			// A = A segment, B = B Segment, C = C Segment, etc
			// 1 = triangle point 1, 2 = triangle point 2, 3 = triangle point 3

			/*
			Each point represents the the triangle on each edge of the


			7 Segment LED Display
			A
			-----
			F |  G  | B
			-----
			E |	    | C
			-----
			D
			*/
			//                     col, row 
			Point pointRA1 = Point(14 + col, 13 + row);
			Point pointRA2 = Point(27 + col, 0 + row);
			Point pointRA3 = Point(27 + col, 25 + row);

			Point pointLA1 = Point(192 + col, 13 + row);
			Point pointLA2 = Point(177 + col, 0 + row);
			Point pointLA3 = Point(177 + col, 25 + row);

			Point pointRB1 = Point(193 + col, 14 + row);
			Point pointRB2 = Point(180 + col, 27 + row);
			Point pointRB3 = Point(205 + col, 27 + row);

			Point pointLB1 = Point(193 + col, 189 + row);
			Point pointLB2 = Point(180 + col, 177 + row);
			Point pointLB3 = Point(205 + col, 177 + row);

			Point pointRC1 = Point(193 + col, 191 + row);
			Point pointRC2 = Point(180 + col, 206 + row);
			Point pointRC3 = Point(205 + col, 206 + row);

			Point pointLC1 = Point(193 + col, 371 + row);
			Point pointLC2 = Point(180 + col, 356 + row);
			Point pointLC3 = Point(205 + col, 356 + row);

			Point pointRD1 = Point(14 + col, 372 + row);
			Point pointRD2 = Point(27 + col, 359 + row);
			Point pointRD3 = Point(27 + col, 384 + row);

			Point pointLD1 = Point(192 + col, 372 + row);
			Point pointLD2 = Point(177 + col, 359 + row);
			Point pointLD3 = Point(177 + col, 384 + row);

			Point pointRE1 = Point(13 + col, 191 + row);
			Point pointRE2 = Point(0 + col, 206 + row);
			Point pointRE3 = Point(25 + col, 206 + row);

			Point pointLE1 = Point(13 + col, 371 + row);
			Point pointLE2 = Point(0 + col, 356 + row);
			Point pointLE3 = Point(25 + col, 356 + row);

			Point pointRF1 = Point(13 + col, 14 + row);
			Point pointRF2 = Point(0 + col, 27 + row);
			Point pointRF3 = Point(25 + col, 27 + row);

			Point pointLF1 = Point(13 + col, 189 + row);
			Point pointLF2 = Point(0 + col, 177 + row);
			Point pointLF3 = Point(25 + col, 177 + row);

			Point pointRG1 = Point(14 + col, 190 + row);
			Point pointRG2 = Point(27 + col, 177 + row);
			Point pointRG3 = Point(27 + col, 202 + row);

			Point pointLG1 = Point(192 + col, 190 + row);
			Point pointLG2 = Point(177 + col, 177 + row);
			Point pointLG3 = Point(177 + col, 202 + row);

			array<Point>^ triangleRA = { pointRA1, pointRA2, pointRA3 };
			array<Point>^ triangleLA = { pointLA1, pointLA2, pointLA3 };

			array<Point>^ triangleRB = { pointRB1, pointRB2, pointRB3 };
			array<Point>^ triangleLB = { pointLB1, pointLB2, pointLB3 };

			array<Point>^ triangleRC = { pointRC1, pointRC2, pointRC3 };
			array<Point>^ triangleLC = { pointLC1, pointLC2, pointLC3 };

			array<Point>^ triangleRD = { pointRD1, pointRD2, pointRD3 };
			array<Point>^ triangleLD = { pointLD1, pointLD2, pointLD3 };

			array<Point>^ triangleRE = { pointRE1, pointRE2, pointRE3 };
			array<Point>^ triangleLE = { pointLE1, pointLE2, pointLE3 };

			array<Point>^ triangleRF = { pointRF1, pointRF2, pointRF3 };
			array<Point>^ triangleLF = { pointLF1, pointLF2, pointLF3 };

			array<Point>^ triangleRG = { pointRG1, pointRG2, pointRG3 };
			array<Point>^ triangleLG = { pointLG1, pointLG2, pointLG3 };




			///////////////////////////////////////////////////////////////

			//// segment A

			//drawEdge(triangleRA);
			//drawHorizontal(27 + col, 0 + row, 150, 25);
			//drawEdge(triangleLA);

			// segment B

			drawEdge(triangleRB, canvas);
			drawVertical(180 + col, 27 + row, 25, 150, canvas);
			drawEdge(triangleLB, canvas);

			// segment C

			drawEdge(triangleRC, canvas);
			drawVertical(180 + col, 206 + row, 25, 150, canvas);
			drawEdge(triangleLC, canvas);

			//// segment D

			//drawEdge(triangleRD);
			//drawHorizontal(27 + col, 359 + row, 150, 25);
			//drawEdge(triangleLD);

			//// segment E

			//drawEdge(triangleRE);
			//drawVertical(0 + col, 206 + row, 25, 150);
			//drawEdge(triangleLE);

			//// segment F

			//drawEdge(triangleRF);
			//drawVertical(0 + col, 27 + row, 25, 150);
			//drawEdge(triangleLF);

			//// segment G

			//drawEdge(triangleRG);
			//drawHorizontal(27 + col, 177 + row, 150, 25);
			//drawEdge(triangleLG);
		}

		/**************************************************************

		NAME: laithesDraw2

		DESCRIPTION: Draws a red LED styled 2

		PRECONDITIONS: Assume programmer knows where he/she wants to place staring coordinates to draw the 2 (col, row)
		laithesDraw2 requires an intialized Graphics canvas to draw its 2.

		POSTCONDITIONS: None

		CALLED BY: countdown

		CALLS: drawEdge, drawHorizontal, drawVertical

		**************************************************************/

		void laithesDraw2(int col, int row, Graphics^ &canvas)
		{
			/*//////////////////////////////////////////////////////////////

			DECLARE LOCAL VARIABLES

			//////////////////////////////////////////////////////////////*/

			// pointRA1 pointLA1 represents 
			// R = right side, L = Left side
			// A = A segment, B = B Segment, C = C Segment, etc
			// 1 = triangle point 1, 2 = triangle point 2, 3 = triangle point 3

			/*
			Each point represents the the triangle on each edge of the


			7 Segment LED Display
			A
			-----
			F |  G  | B
			-----
			E |	    | C
			-----
			D
			*/
			//                     col, row 
			Point pointRA1 = Point(14 + col, 13 + row);
			Point pointRA2 = Point(27 + col, 0 + row);
			Point pointRA3 = Point(27 + col, 25 + row);

			Point pointLA1 = Point(192 + col, 13 + row);
			Point pointLA2 = Point(177 + col, 0 + row);
			Point pointLA3 = Point(177 + col, 25 + row);

			Point pointRB1 = Point(193 + col, 14 + row);
			Point pointRB2 = Point(180 + col, 27 + row);
			Point pointRB3 = Point(205 + col, 27 + row);

			Point pointLB1 = Point(193 + col, 189 + row);
			Point pointLB2 = Point(180 + col, 177 + row);
			Point pointLB3 = Point(205 + col, 177 + row);

			Point pointRC1 = Point(193 + col, 191 + row);
			Point pointRC2 = Point(180 + col, 206 + row);
			Point pointRC3 = Point(205 + col, 206 + row);

			Point pointLC1 = Point(193 + col, 371 + row);
			Point pointLC2 = Point(180 + col, 356 + row);
			Point pointLC3 = Point(205 + col, 356 + row);

			Point pointRD1 = Point(14 + col, 372 + row);
			Point pointRD2 = Point(27 + col, 359 + row);
			Point pointRD3 = Point(27 + col, 384 + row);

			Point pointLD1 = Point(192 + col, 372 + row);
			Point pointLD2 = Point(177 + col, 359 + row);
			Point pointLD3 = Point(177 + col, 384 + row);

			Point pointRE1 = Point(13 + col, 191 + row);
			Point pointRE2 = Point(0 + col, 206 + row);
			Point pointRE3 = Point(25 + col, 206 + row);

			Point pointLE1 = Point(13 + col, 371 + row);
			Point pointLE2 = Point(0 + col, 356 + row);
			Point pointLE3 = Point(25 + col, 356 + row);

			Point pointRF1 = Point(13 + col, 14 + row);
			Point pointRF2 = Point(0 + col, 27 + row);
			Point pointRF3 = Point(25 + col, 27 + row);

			Point pointLF1 = Point(13 + col, 189 + row);
			Point pointLF2 = Point(0 + col, 177 + row);
			Point pointLF3 = Point(25 + col, 177 + row);

			Point pointRG1 = Point(14 + col, 190 + row);
			Point pointRG2 = Point(27 + col, 177 + row);
			Point pointRG3 = Point(27 + col, 202 + row);

			Point pointLG1 = Point(192 + col, 190 + row);
			Point pointLG2 = Point(177 + col, 177 + row);
			Point pointLG3 = Point(177 + col, 202 + row);

			array<Point>^ triangleRA = { pointRA1, pointRA2, pointRA3 };
			array<Point>^ triangleLA = { pointLA1, pointLA2, pointLA3 };

			array<Point>^ triangleRB = { pointRB1, pointRB2, pointRB3 };
			array<Point>^ triangleLB = { pointLB1, pointLB2, pointLB3 };

			array<Point>^ triangleRC = { pointRC1, pointRC2, pointRC3 };
			array<Point>^ triangleLC = { pointLC1, pointLC2, pointLC3 };

			array<Point>^ triangleRD = { pointRD1, pointRD2, pointRD3 };
			array<Point>^ triangleLD = { pointLD1, pointLD2, pointLD3 };

			array<Point>^ triangleRE = { pointRE1, pointRE2, pointRE3 };
			array<Point>^ triangleLE = { pointLE1, pointLE2, pointLE3 };

			array<Point>^ triangleRF = { pointRF1, pointRF2, pointRF3 };
			array<Point>^ triangleLF = { pointLF1, pointLF2, pointLF3 };

			array<Point>^ triangleRG = { pointRG1, pointRG2, pointRG3 };
			array<Point>^ triangleLG = { pointLG1, pointLG2, pointLG3 };




			///////////////////////////////////////////////////////////////

			// segment A

			drawEdge(triangleRA, canvas);
			drawHorizontal(27 + col, 0 + row, 150, 25, canvas);
			drawEdge(triangleLA, canvas);

			// segment B

			drawEdge(triangleRB, canvas);
			drawVertical(180 + col, 27 + row, 25, 150, canvas);
			drawEdge(triangleLB, canvas);

			//// segment C

			//drawEdge(triangleRC);
			//drawVertical(180 + col, 206 + row, 25, 150);
			//drawEdge(triangleLC);

			// segment D

			drawEdge(triangleRD, canvas);
			drawHorizontal(27 + col, 359 + row, 150, 25, canvas);
			drawEdge(triangleLD, canvas);

			// segment E

			drawEdge(triangleRE, canvas);
			drawVertical(0 + col, 206 + row, 25, 150, canvas);
			drawEdge(triangleLE, canvas);

			//// segment F

			//drawEdge(triangleRF);
			//drawVertical(0 + col, 27 + row, 25, 150);
			//drawEdge(triangleLF);

			// segment G

			drawEdge(triangleRG, canvas);
			drawHorizontal(27 + col, 177 + row, 150, 25, canvas);
			drawEdge(triangleLG, canvas);
		}

		/**************************************************************

		NAME: laithesDraw3

		DESCRIPTION: Draws a red LED styled 3

		PRECONDITIONS: Assume programmer knows where he/she wants to place staring coordinates to draw the 3 (col, row)
		laithesDraw3 requires an intialized Graphics canvas to draw its 3.

		POSTCONDITIONS: None

		CALLED BY: countdown

		CALLS: drawEdge, drawHorizontal, drawVertical

		**************************************************************/

		void laithesDraw3(int col, int row, Graphics^ &canvas)
		{
			/*//////////////////////////////////////////////////////////////

			DECLARE LOCAL VARIABLES

			//////////////////////////////////////////////////////////////*/

			// pointRA1 pointLA1 represents 
			// R = right side, L = Left side
			// A = A segment, B = B Segment, C = C Segment, etc
			// 1 = triangle point 1, 2 = triangle point 2, 3 = triangle point 3

			/*
			Each point represents the the triangle on each edge of the


			7 Segment LED Display
			A
			-----
			F |  G  | B
			-----
			E |	    | C
			-----
			D
			*/
			//                     col, row 
			Point pointRA1 = Point(14 + col, 13 + row);
			Point pointRA2 = Point(27 + col, 0 + row);
			Point pointRA3 = Point(27 + col, 25 + row);

			Point pointLA1 = Point(192 + col, 13 + row);
			Point pointLA2 = Point(177 + col, 0 + row);
			Point pointLA3 = Point(177 + col, 25 + row);

			Point pointRB1 = Point(193 + col, 14 + row);
			Point pointRB2 = Point(180 + col, 27 + row);
			Point pointRB3 = Point(205 + col, 27 + row);

			Point pointLB1 = Point(193 + col, 189 + row);
			Point pointLB2 = Point(180 + col, 177 + row);
			Point pointLB3 = Point(205 + col, 177 + row);

			Point pointRC1 = Point(193 + col, 191 + row);
			Point pointRC2 = Point(180 + col, 206 + row);
			Point pointRC3 = Point(205 + col, 206 + row);

			Point pointLC1 = Point(193 + col, 371 + row);
			Point pointLC2 = Point(180 + col, 356 + row);
			Point pointLC3 = Point(205 + col, 356 + row);

			Point pointRD1 = Point(14 + col, 372 + row);
			Point pointRD2 = Point(27 + col, 359 + row);
			Point pointRD3 = Point(27 + col, 384 + row);

			Point pointLD1 = Point(192 + col, 372 + row);
			Point pointLD2 = Point(177 + col, 359 + row);
			Point pointLD3 = Point(177 + col, 384 + row);

			Point pointRE1 = Point(13 + col, 191 + row);
			Point pointRE2 = Point(0 + col, 206 + row);
			Point pointRE3 = Point(25 + col, 206 + row);

			Point pointLE1 = Point(13 + col, 371 + row);
			Point pointLE2 = Point(0 + col, 356 + row);
			Point pointLE3 = Point(25 + col, 356 + row);

			Point pointRF1 = Point(13 + col, 14 + row);
			Point pointRF2 = Point(0 + col, 27 + row);
			Point pointRF3 = Point(25 + col, 27 + row);

			Point pointLF1 = Point(13 + col, 189 + row);
			Point pointLF2 = Point(0 + col, 177 + row);
			Point pointLF3 = Point(25 + col, 177 + row);

			Point pointRG1 = Point(14 + col, 190 + row);
			Point pointRG2 = Point(27 + col, 177 + row);
			Point pointRG3 = Point(27 + col, 202 + row);

			Point pointLG1 = Point(192 + col, 190 + row);
			Point pointLG2 = Point(177 + col, 177 + row);
			Point pointLG3 = Point(177 + col, 202 + row);

			array<Point>^ triangleRA = { pointRA1, pointRA2, pointRA3 };
			array<Point>^ triangleLA = { pointLA1, pointLA2, pointLA3 };

			array<Point>^ triangleRB = { pointRB1, pointRB2, pointRB3 };
			array<Point>^ triangleLB = { pointLB1, pointLB2, pointLB3 };

			array<Point>^ triangleRC = { pointRC1, pointRC2, pointRC3 };
			array<Point>^ triangleLC = { pointLC1, pointLC2, pointLC3 };

			array<Point>^ triangleRD = { pointRD1, pointRD2, pointRD3 };
			array<Point>^ triangleLD = { pointLD1, pointLD2, pointLD3 };

			array<Point>^ triangleRE = { pointRE1, pointRE2, pointRE3 };
			array<Point>^ triangleLE = { pointLE1, pointLE2, pointLE3 };

			array<Point>^ triangleRF = { pointRF1, pointRF2, pointRF3 };
			array<Point>^ triangleLF = { pointLF1, pointLF2, pointLF3 };

			array<Point>^ triangleRG = { pointRG1, pointRG2, pointRG3 };
			array<Point>^ triangleLG = { pointLG1, pointLG2, pointLG3 };




			///////////////////////////////////////////////////////////////

			// segment A

			drawEdge(triangleRA, canvas);
			drawHorizontal(27 + col, 0 + row, 150, 25, canvas);
			drawEdge(triangleLA, canvas);

			// segment B

			drawEdge(triangleRB, canvas);
			drawVertical(180 + col, 27 + row, 25, 150, canvas);
			drawEdge(triangleLB, canvas);

			// segment C

			drawEdge(triangleRC, canvas);
			drawVertical(180 + col, 206 + row, 25, 150, canvas);
			drawEdge(triangleLC, canvas);

			// segment D

			drawEdge(triangleRD, canvas);
			drawHorizontal(27 + col, 359 + row, 150, 25, canvas);
			drawEdge(triangleLD, canvas);

			//// segment E

			//drawEdge(triangleRE);
			//drawVertical(0 + col, 206 + row, 25, 150);
			//drawEdge(triangleLE);

			//// segment F

			//drawEdge(triangleRF);
			//drawVertical(0 + col, 27 + row, 25, 150);
			//drawEdge(triangleLF);

			// segment G

			drawEdge(triangleRG, canvas);
			drawHorizontal(27 + col, 177 + row, 150, 25, canvas);
			drawEdge(triangleLG, canvas);
		}

		/**************************************************************

		NAME: laithesDraw4

		DESCRIPTION: Draws a red LED styled 4

		PRECONDITIONS: Assume programmer knows where he/she wants to place staring coordinates to draw the 4 (col, row)
		laithesDraw4 requires an intialized Graphics canvas to draw its 4.

		POSTCONDITIONS: None

		CALLED BY: countdown

		CALLS: drawEdge, drawHorizontal, drawVertical

		**************************************************************/

		void laithesDraw4(int col, int row, Graphics^ &canvas)
		{
			/*//////////////////////////////////////////////////////////////

			DECLARE LOCAL VARIABLES

			//////////////////////////////////////////////////////////////*/

			// pointRA1 pointLA1 represents 
			// R = right side, L = Left side
			// A = A segment, B = B Segment, C = C Segment, etc
			// 1 = triangle point 1, 2 = triangle point 2, 3 = triangle point 3

			/*
			Each point represents the the triangle on each edge of the


			7 Segment LED Display
			A
			-----
			F |  G  | B
			-----
			E |	    | C
			-----
			D
			*/
			//                     col, row 
			Point pointRA1 = Point(14 + col, 13 + row);
			Point pointRA2 = Point(27 + col, 0 + row);
			Point pointRA3 = Point(27 + col, 25 + row);

			Point pointLA1 = Point(192 + col, 13 + row);
			Point pointLA2 = Point(177 + col, 0 + row);
			Point pointLA3 = Point(177 + col, 25 + row);

			Point pointRB1 = Point(193 + col, 14 + row);
			Point pointRB2 = Point(180 + col, 27 + row);
			Point pointRB3 = Point(205 + col, 27 + row);

			Point pointLB1 = Point(193 + col, 189 + row);
			Point pointLB2 = Point(180 + col, 177 + row);
			Point pointLB3 = Point(205 + col, 177 + row);

			Point pointRC1 = Point(193 + col, 191 + row);
			Point pointRC2 = Point(180 + col, 206 + row);
			Point pointRC3 = Point(205 + col, 206 + row);

			Point pointLC1 = Point(193 + col, 371 + row);
			Point pointLC2 = Point(180 + col, 356 + row);
			Point pointLC3 = Point(205 + col, 356 + row);

			Point pointRD1 = Point(14 + col, 372 + row);
			Point pointRD2 = Point(27 + col, 359 + row);
			Point pointRD3 = Point(27 + col, 384 + row);

			Point pointLD1 = Point(192 + col, 372 + row);
			Point pointLD2 = Point(177 + col, 359 + row);
			Point pointLD3 = Point(177 + col, 384 + row);

			Point pointRE1 = Point(13 + col, 191 + row);
			Point pointRE2 = Point(0 + col, 206 + row);
			Point pointRE3 = Point(25 + col, 206 + row);

			Point pointLE1 = Point(13 + col, 371 + row);
			Point pointLE2 = Point(0 + col, 356 + row);
			Point pointLE3 = Point(25 + col, 356 + row);

			Point pointRF1 = Point(13 + col, 14 + row);
			Point pointRF2 = Point(0 + col, 27 + row);
			Point pointRF3 = Point(25 + col, 27 + row);

			Point pointLF1 = Point(13 + col, 189 + row);
			Point pointLF2 = Point(0 + col, 177 + row);
			Point pointLF3 = Point(25 + col, 177 + row);

			Point pointRG1 = Point(14 + col, 190 + row);
			Point pointRG2 = Point(27 + col, 177 + row);
			Point pointRG3 = Point(27 + col, 202 + row);

			Point pointLG1 = Point(192 + col, 190 + row);
			Point pointLG2 = Point(177 + col, 177 + row);
			Point pointLG3 = Point(177 + col, 202 + row);

			array<Point>^ triangleRA = { pointRA1, pointRA2, pointRA3 };
			array<Point>^ triangleLA = { pointLA1, pointLA2, pointLA3 };

			array<Point>^ triangleRB = { pointRB1, pointRB2, pointRB3 };
			array<Point>^ triangleLB = { pointLB1, pointLB2, pointLB3 };

			array<Point>^ triangleRC = { pointRC1, pointRC2, pointRC3 };
			array<Point>^ triangleLC = { pointLC1, pointLC2, pointLC3 };

			array<Point>^ triangleRD = { pointRD1, pointRD2, pointRD3 };
			array<Point>^ triangleLD = { pointLD1, pointLD2, pointLD3 };

			array<Point>^ triangleRE = { pointRE1, pointRE2, pointRE3 };
			array<Point>^ triangleLE = { pointLE1, pointLE2, pointLE3 };

			array<Point>^ triangleRF = { pointRF1, pointRF2, pointRF3 };
			array<Point>^ triangleLF = { pointLF1, pointLF2, pointLF3 };

			array<Point>^ triangleRG = { pointRG1, pointRG2, pointRG3 };
			array<Point>^ triangleLG = { pointLG1, pointLG2, pointLG3 };




			///////////////////////////////////////////////////////////////

			//// segment A

			//drawEdge(triangleRA);
			//drawHorizontal(27 + col, 0 + row, 150, 25);
			//drawEdge(triangleLA);

			// segment B

			drawEdge(triangleRB, canvas);
			drawVertical(180 + col, 27 + row, 25, 150, canvas);
			drawEdge(triangleLB, canvas);

			// segment C

			drawEdge(triangleRC, canvas);
			drawVertical(180 + col, 206 + row, 25, 150, canvas);
			drawEdge(triangleLC, canvas);

			//// segment D

			//drawEdge(triangleRD);
			//drawHorizontal(27 + col, 359 + row, 150, 25);
			//drawEdge(triangleLD);

			//// segment E

			//drawEdge(triangleRE);
			//drawVertical(0 + col, 206 + row, 25, 150);
			//drawEdge(triangleLE);

			// segment F

			drawEdge(triangleRF, canvas);
			drawVertical(0 + col, 27 + row, 25, 150, canvas);
			drawEdge(triangleLF, canvas);

			// segment G

			drawEdge(triangleRG, canvas);
			drawHorizontal(27 + col, 177 + row, 150, 25, canvas);
			drawEdge(triangleLG, canvas);
		}

		/**************************************************************

		NAME: laithesDraw5

		DESCRIPTION: Draws a red LED styled 5

		PRECONDITIONS: Assume programmer knows where he/she wants to place staring coordinates to draw the 5 (col, row)
		laithesDraw5 requires an intialized Graphics canvas to draw its 5.

		POSTCONDITIONS: None

		CALLED BY: countdown

		CALLS: drawEdge, drawHorizontal, drawVertical

		**************************************************************/

		void laithesDraw5(int col, int row, Graphics^ &canvas)
		{
			/*//////////////////////////////////////////////////////////////

			DECLARE LOCAL VARIABLES

			//////////////////////////////////////////////////////////////*/

			// pointRA1 pointLA1 represents 
			// R = right side, L = Left side
			// A = A segment, B = B Segment, C = C Segment, etc
			// 1 = triangle point 1, 2 = triangle point 2, 3 = triangle point 3

			/*
			Each point represents the the triangle on each edge of the


			7 Segment LED Display
			A
			-----
			F |  G  | B
			-----
			E |	    | C
			-----
			D
			*/
			//                     col, row 
			Point pointRA1 = Point(14 + col, 13 + row);
			Point pointRA2 = Point(27 + col, 0 + row);
			Point pointRA3 = Point(27 + col, 25 + row);

			Point pointLA1 = Point(192 + col, 13 + row);
			Point pointLA2 = Point(177 + col, 0 + row);
			Point pointLA3 = Point(177 + col, 25 + row);

			Point pointRB1 = Point(193 + col, 14 + row);
			Point pointRB2 = Point(180 + col, 27 + row);
			Point pointRB3 = Point(205 + col, 27 + row);

			Point pointLB1 = Point(193 + col, 189 + row);
			Point pointLB2 = Point(180 + col, 177 + row);
			Point pointLB3 = Point(205 + col, 177 + row);

			Point pointRC1 = Point(193 + col, 191 + row);
			Point pointRC2 = Point(180 + col, 206 + row);
			Point pointRC3 = Point(205 + col, 206 + row);

			Point pointLC1 = Point(193 + col, 371 + row);
			Point pointLC2 = Point(180 + col, 356 + row);
			Point pointLC3 = Point(205 + col, 356 + row);

			Point pointRD1 = Point(14 + col, 372 + row);
			Point pointRD2 = Point(27 + col, 359 + row);
			Point pointRD3 = Point(27 + col, 384 + row);

			Point pointLD1 = Point(192 + col, 372 + row);
			Point pointLD2 = Point(177 + col, 359 + row);
			Point pointLD3 = Point(177 + col, 384 + row);

			Point pointRE1 = Point(13 + col, 191 + row);
			Point pointRE2 = Point(0 + col, 206 + row);
			Point pointRE3 = Point(25 + col, 206 + row);

			Point pointLE1 = Point(13 + col, 371 + row);
			Point pointLE2 = Point(0 + col, 356 + row);
			Point pointLE3 = Point(25 + col, 356 + row);

			Point pointRF1 = Point(13 + col, 14 + row);
			Point pointRF2 = Point(0 + col, 27 + row);
			Point pointRF3 = Point(25 + col, 27 + row);

			Point pointLF1 = Point(13 + col, 189 + row);
			Point pointLF2 = Point(0 + col, 177 + row);
			Point pointLF3 = Point(25 + col, 177 + row);

			Point pointRG1 = Point(14 + col, 190 + row);
			Point pointRG2 = Point(27 + col, 177 + row);
			Point pointRG3 = Point(27 + col, 202 + row);

			Point pointLG1 = Point(192 + col, 190 + row);
			Point pointLG2 = Point(177 + col, 177 + row);
			Point pointLG3 = Point(177 + col, 202 + row);

			array<Point>^ triangleRA = { pointRA1, pointRA2, pointRA3 };
			array<Point>^ triangleLA = { pointLA1, pointLA2, pointLA3 };

			array<Point>^ triangleRB = { pointRB1, pointRB2, pointRB3 };
			array<Point>^ triangleLB = { pointLB1, pointLB2, pointLB3 };

			array<Point>^ triangleRC = { pointRC1, pointRC2, pointRC3 };
			array<Point>^ triangleLC = { pointLC1, pointLC2, pointLC3 };

			array<Point>^ triangleRD = { pointRD1, pointRD2, pointRD3 };
			array<Point>^ triangleLD = { pointLD1, pointLD2, pointLD3 };

			array<Point>^ triangleRE = { pointRE1, pointRE2, pointRE3 };
			array<Point>^ triangleLE = { pointLE1, pointLE2, pointLE3 };

			array<Point>^ triangleRF = { pointRF1, pointRF2, pointRF3 };
			array<Point>^ triangleLF = { pointLF1, pointLF2, pointLF3 };

			array<Point>^ triangleRG = { pointRG1, pointRG2, pointRG3 };
			array<Point>^ triangleLG = { pointLG1, pointLG2, pointLG3 };




			///////////////////////////////////////////////////////////////

			// segment A

			drawEdge(triangleRA, canvas);
			drawHorizontal(27 + col, 0 + row, 150, 25, canvas);
			drawEdge(triangleLA, canvas);

			//// segment B

			//drawEdge(triangleRB);
			//drawVertical(180 + col, 27 + row, 25, 150);
			//drawEdge(triangleLB);

			// segment C

			drawEdge(triangleRC, canvas);
			drawVertical(180 + col, 206 + row, 25, 150, canvas);
			drawEdge(triangleLC, canvas);

			// segment D

			drawEdge(triangleRD, canvas);
			drawHorizontal(27 + col, 359 + row, 150, 25, canvas);
			drawEdge(triangleLD, canvas);

			//// segment E

			//drawEdge(triangleRE);
			//drawVertical(0 + col, 206 + row, 25, 150);
			//drawEdge(triangleLE);

			// segment F

			drawEdge(triangleRF, canvas);
			drawVertical(0 + col, 27 + row, 25, 150, canvas);
			drawEdge(triangleLF, canvas);

			// segment G

			drawEdge(triangleRG, canvas);
			drawHorizontal(27 + col, 177 + row, 150, 25, canvas);
			drawEdge(triangleLG, canvas);
		}

		/**************************************************************

		NAME: laithesDraw6

		DESCRIPTION: Draws a red LED styled 6

		PRECONDITIONS: Assume programmer knows where he/she wants to place staring coordinates to draw the 6 (col, row)
		laithesDraw6 requires an intialized Graphics canvas to draw its 6.

		POSTCONDITIONS: None

		CALLED BY: countdown

		CALLS: drawEdge, drawHorizontal, drawVertical

		**************************************************************/

		void laithesDraw6(int col, int row, Graphics^ &canvas)
		{
			/*//////////////////////////////////////////////////////////////

			DECLARE LOCAL VARIABLES

			//////////////////////////////////////////////////////////////*/

			// pointRA1 pointLA1 represents 
			// R = right side, L = Left side
			// A = A segment, B = B Segment, C = C Segment, etc
			// 1 = triangle point 1, 2 = triangle point 2, 3 = triangle point 3

			/*
			Each point represents the the triangle on each edge of the


			7 Segment LED Display
			A
			-----
			F |  G  | B
			-----
			E |	    | C
			-----
			D
			*/
			//                     col, row 
			Point pointRA1 = Point(14 + col, 13 + row);
			Point pointRA2 = Point(27 + col, 0 + row);
			Point pointRA3 = Point(27 + col, 25 + row);

			Point pointLA1 = Point(192 + col, 13 + row);
			Point pointLA2 = Point(177 + col, 0 + row);
			Point pointLA3 = Point(177 + col, 25 + row);

			Point pointRB1 = Point(193 + col, 14 + row);
			Point pointRB2 = Point(180 + col, 27 + row);
			Point pointRB3 = Point(205 + col, 27 + row);

			Point pointLB1 = Point(193 + col, 189 + row);
			Point pointLB2 = Point(180 + col, 177 + row);
			Point pointLB3 = Point(205 + col, 177 + row);

			Point pointRC1 = Point(193 + col, 191 + row);
			Point pointRC2 = Point(180 + col, 206 + row);
			Point pointRC3 = Point(205 + col, 206 + row);

			Point pointLC1 = Point(193 + col, 371 + row);
			Point pointLC2 = Point(180 + col, 356 + row);
			Point pointLC3 = Point(205 + col, 356 + row);

			Point pointRD1 = Point(14 + col, 372 + row);
			Point pointRD2 = Point(27 + col, 359 + row);
			Point pointRD3 = Point(27 + col, 384 + row);

			Point pointLD1 = Point(192 + col, 372 + row);
			Point pointLD2 = Point(177 + col, 359 + row);
			Point pointLD3 = Point(177 + col, 384 + row);

			Point pointRE1 = Point(13 + col, 191 + row);
			Point pointRE2 = Point(0 + col, 206 + row);
			Point pointRE3 = Point(25 + col, 206 + row);

			Point pointLE1 = Point(13 + col, 371 + row);
			Point pointLE2 = Point(0 + col, 356 + row);
			Point pointLE3 = Point(25 + col, 356 + row);

			Point pointRF1 = Point(13 + col, 14 + row);
			Point pointRF2 = Point(0 + col, 27 + row);
			Point pointRF3 = Point(25 + col, 27 + row);

			Point pointLF1 = Point(13 + col, 189 + row);
			Point pointLF2 = Point(0 + col, 177 + row);
			Point pointLF3 = Point(25 + col, 177 + row);

			Point pointRG1 = Point(14 + col, 190 + row);
			Point pointRG2 = Point(27 + col, 177 + row);
			Point pointRG3 = Point(27 + col, 202 + row);

			Point pointLG1 = Point(192 + col, 190 + row);
			Point pointLG2 = Point(177 + col, 177 + row);
			Point pointLG3 = Point(177 + col, 202 + row);

			array<Point>^ triangleRA = { pointRA1, pointRA2, pointRA3 };
			array<Point>^ triangleLA = { pointLA1, pointLA2, pointLA3 };

			array<Point>^ triangleRB = { pointRB1, pointRB2, pointRB3 };
			array<Point>^ triangleLB = { pointLB1, pointLB2, pointLB3 };

			array<Point>^ triangleRC = { pointRC1, pointRC2, pointRC3 };
			array<Point>^ triangleLC = { pointLC1, pointLC2, pointLC3 };

			array<Point>^ triangleRD = { pointRD1, pointRD2, pointRD3 };
			array<Point>^ triangleLD = { pointLD1, pointLD2, pointLD3 };

			array<Point>^ triangleRE = { pointRE1, pointRE2, pointRE3 };
			array<Point>^ triangleLE = { pointLE1, pointLE2, pointLE3 };

			array<Point>^ triangleRF = { pointRF1, pointRF2, pointRF3 };
			array<Point>^ triangleLF = { pointLF1, pointLF2, pointLF3 };

			array<Point>^ triangleRG = { pointRG1, pointRG2, pointRG3 };
			array<Point>^ triangleLG = { pointLG1, pointLG2, pointLG3 };




			///////////////////////////////////////////////////////////////

			//// segment A

			//drawEdge(triangleRA);
			//drawHorizontal(27 + col, 0 + row, 150, 25);
			//drawEdge(triangleLA);

			//// segment B

			//drawEdge(triangleRB);
			//drawVertical(180 + col, 27 + row, 25, 150);
			//drawEdge(triangleLB);

			// segment C

			drawEdge(triangleRC, canvas);
			drawVertical(180 + col, 206 + row, 25, 150, canvas);
			drawEdge(triangleLC, canvas);

			// segment D

			drawEdge(triangleRD, canvas);
			drawHorizontal(27 + col, 359 + row, 150, 25, canvas);
			drawEdge(triangleLD, canvas);

			// segment E

			drawEdge(triangleRE, canvas);
			drawVertical(0 + col, 206 + row, 25, 150, canvas);
			drawEdge(triangleLE, canvas);

			// segment F

			drawEdge(triangleRF, canvas);
			drawVertical(0 + col, 27 + row, 25, 150, canvas);
			drawEdge(triangleLF, canvas);

			// segment G

			drawEdge(triangleRG, canvas);
			drawHorizontal(27 + col, 177 + row, 150, 25, canvas);
			drawEdge(triangleLG, canvas);
		}

		/**************************************************************

		NAME: laithesDraw7

		DESCRIPTION: Draws a red LED styled 7

		PRECONDITIONS: Assume programmer knows where he/she wants to place staring coordinates to draw the 7 (col, row)
		laithesDraw7 requires an intialized Graphics canvas to draw its 7.

		POSTCONDITIONS: None

		CALLED BY: countdown

		CALLS: drawEdge, drawHorizontal, drawVertical

		**************************************************************/

		void laithesDraw7(int col, int row, Graphics^ &canvas)
		{
			/*//////////////////////////////////////////////////////////////

			DECLARE LOCAL VARIABLES

			//////////////////////////////////////////////////////////////*/

			// pointRA1 pointLA1 represents 
			// R = right side, L = Left side
			// A = A segment, B = B Segment, C = C Segment, etc
			// 1 = triangle point 1, 2 = triangle point 2, 3 = triangle point 3

			/*
			Each point represents the the triangle on each edge of the


			7 Segment LED Display
			A
			-----
			F |  G  | B
			-----
			E |	    | C
			-----
			D
			*/
			//                     col, row 
			Point pointRA1 = Point(14 + col, 13 + row);
			Point pointRA2 = Point(27 + col, 0 + row);
			Point pointRA3 = Point(27 + col, 25 + row);

			Point pointLA1 = Point(192 + col, 13 + row);
			Point pointLA2 = Point(177 + col, 0 + row);
			Point pointLA3 = Point(177 + col, 25 + row);

			Point pointRB1 = Point(193 + col, 14 + row);
			Point pointRB2 = Point(180 + col, 27 + row);
			Point pointRB3 = Point(205 + col, 27 + row);

			Point pointLB1 = Point(193 + col, 189 + row);
			Point pointLB2 = Point(180 + col, 177 + row);
			Point pointLB3 = Point(205 + col, 177 + row);

			Point pointRC1 = Point(193 + col, 191 + row);
			Point pointRC2 = Point(180 + col, 206 + row);
			Point pointRC3 = Point(205 + col, 206 + row);

			Point pointLC1 = Point(193 + col, 371 + row);
			Point pointLC2 = Point(180 + col, 356 + row);
			Point pointLC3 = Point(205 + col, 356 + row);

			Point pointRD1 = Point(14 + col, 372 + row);
			Point pointRD2 = Point(27 + col, 359 + row);
			Point pointRD3 = Point(27 + col, 384 + row);

			Point pointLD1 = Point(192 + col, 372 + row);
			Point pointLD2 = Point(177 + col, 359 + row);
			Point pointLD3 = Point(177 + col, 384 + row);

			Point pointRE1 = Point(13 + col, 191 + row);
			Point pointRE2 = Point(0 + col, 206 + row);
			Point pointRE3 = Point(25 + col, 206 + row);

			Point pointLE1 = Point(13 + col, 371 + row);
			Point pointLE2 = Point(0 + col, 356 + row);
			Point pointLE3 = Point(25 + col, 356 + row);

			Point pointRF1 = Point(13 + col, 14 + row);
			Point pointRF2 = Point(0 + col, 27 + row);
			Point pointRF3 = Point(25 + col, 27 + row);

			Point pointLF1 = Point(13 + col, 189 + row);
			Point pointLF2 = Point(0 + col, 177 + row);
			Point pointLF3 = Point(25 + col, 177 + row);

			Point pointRG1 = Point(14 + col, 190 + row);
			Point pointRG2 = Point(27 + col, 177 + row);
			Point pointRG3 = Point(27 + col, 202 + row);

			Point pointLG1 = Point(192 + col, 190 + row);
			Point pointLG2 = Point(177 + col, 177 + row);
			Point pointLG3 = Point(177 + col, 202 + row);

			array<Point>^ triangleRA = { pointRA1, pointRA2, pointRA3 };
			array<Point>^ triangleLA = { pointLA1, pointLA2, pointLA3 };

			array<Point>^ triangleRB = { pointRB1, pointRB2, pointRB3 };
			array<Point>^ triangleLB = { pointLB1, pointLB2, pointLB3 };

			array<Point>^ triangleRC = { pointRC1, pointRC2, pointRC3 };
			array<Point>^ triangleLC = { pointLC1, pointLC2, pointLC3 };

			array<Point>^ triangleRD = { pointRD1, pointRD2, pointRD3 };
			array<Point>^ triangleLD = { pointLD1, pointLD2, pointLD3 };

			array<Point>^ triangleRE = { pointRE1, pointRE2, pointRE3 };
			array<Point>^ triangleLE = { pointLE1, pointLE2, pointLE3 };

			array<Point>^ triangleRF = { pointRF1, pointRF2, pointRF3 };
			array<Point>^ triangleLF = { pointLF1, pointLF2, pointLF3 };

			array<Point>^ triangleRG = { pointRG1, pointRG2, pointRG3 };
			array<Point>^ triangleLG = { pointLG1, pointLG2, pointLG3 };




			///////////////////////////////////////////////////////////////

			// segment A

			drawEdge(triangleRA, canvas);
			drawHorizontal(27 + col, 0 + row, 150, 25, canvas);
			drawEdge(triangleLA, canvas);

			// segment B

			drawEdge(triangleRB, canvas);
			drawVertical(180 + col, 27 + row, 25, 150, canvas);
			drawEdge(triangleLB, canvas);

			// segment C

			drawEdge(triangleRC, canvas);
			drawVertical(180 + col, 206 + row, 25, 150, canvas);
			drawEdge(triangleLC, canvas);

			//// segment D

			//drawEdge(triangleRD);
			//drawHorizontal(27 + col, 359 + row, 150, 25);
			//drawEdge(triangleLD);

			//// segment E

			//drawEdge(triangleRE);
			//drawVertical(0 + col, 206 + row, 25, 150);
			//drawEdge(triangleLE);

			//// segment F

			//drawEdge(triangleRF);
			//drawVertical(0 + col, 27 + row, 25, 150);
			//drawEdge(triangleLF);

			//// segment G

			//drawEdge(triangleRG);
			//drawHorizontal(27 + col, 177 + row, 150, 25);
			//drawEdge(triangleLG);
		}

		/**************************************************************

		NAME: laithesDraw8

		DESCRIPTION: Draws a red LED styled 8

		PRECONDITIONS: Assume programmer knows where he/she wants to place staring coordinates to draw the 8 (col, row)
		laithesDraw8 requires an intialized Graphics canvas to draw its 8.

		POSTCONDITIONS: None

		CALLED BY: countdown

		CALLS: drawEdge, drawHorizontal, drawVertical

		**************************************************************/

		void laithesDraw8(int col, int row, Graphics^ &canvas)
		{
			/*//////////////////////////////////////////////////////////////

			DECLARE LOCAL VARIABLES

			//////////////////////////////////////////////////////////////*/

			// pointRA1 pointLA1 represents 
			// R = right side, L = Left side
			// A = A segment, B = B Segment, C = C Segment, etc
			// 1 = triangle point 1, 2 = triangle point 2, 3 = triangle point 3

			/*
			Each point represents the the triangle on each edge of the


			7 Segment LED Display
			A
			-----
			F |  G  | B
			-----
			E |	    | C
			-----
			D
			*/
			//                     col, row 
			Point pointRA1 = Point(14 + col, 13 + row);
			Point pointRA2 = Point(27 + col, 0 + row);
			Point pointRA3 = Point(27 + col, 25 + row);

			Point pointLA1 = Point(192 + col, 13 + row);
			Point pointLA2 = Point(177 + col, 0 + row);
			Point pointLA3 = Point(177 + col, 25 + row);

			Point pointRB1 = Point(193 + col, 14 + row);
			Point pointRB2 = Point(180 + col, 27 + row);
			Point pointRB3 = Point(205 + col, 27 + row);

			Point pointLB1 = Point(193 + col, 189 + row);
			Point pointLB2 = Point(180 + col, 177 + row);
			Point pointLB3 = Point(205 + col, 177 + row);

			Point pointRC1 = Point(193 + col, 191 + row);
			Point pointRC2 = Point(180 + col, 206 + row);
			Point pointRC3 = Point(205 + col, 206 + row);

			Point pointLC1 = Point(193 + col, 371 + row);
			Point pointLC2 = Point(180 + col, 356 + row);
			Point pointLC3 = Point(205 + col, 356 + row);

			Point pointRD1 = Point(14 + col, 372 + row);
			Point pointRD2 = Point(27 + col, 359 + row);
			Point pointRD3 = Point(27 + col, 384 + row);

			Point pointLD1 = Point(192 + col, 372 + row);
			Point pointLD2 = Point(177 + col, 359 + row);
			Point pointLD3 = Point(177 + col, 384 + row);

			Point pointRE1 = Point(13 + col, 191 + row);
			Point pointRE2 = Point(0 + col, 206 + row);
			Point pointRE3 = Point(25 + col, 206 + row);

			Point pointLE1 = Point(13 + col, 371 + row);
			Point pointLE2 = Point(0 + col, 356 + row);
			Point pointLE3 = Point(25 + col, 356 + row);

			Point pointRF1 = Point(13 + col, 14 + row);
			Point pointRF2 = Point(0 + col, 27 + row);
			Point pointRF3 = Point(25 + col, 27 + row);

			Point pointLF1 = Point(13 + col, 189 + row);
			Point pointLF2 = Point(0 + col, 177 + row);
			Point pointLF3 = Point(25 + col, 177 + row);

			Point pointRG1 = Point(14 + col, 190 + row);
			Point pointRG2 = Point(27 + col, 177 + row);
			Point pointRG3 = Point(27 + col, 202 + row);

			Point pointLG1 = Point(192 + col, 190 + row);
			Point pointLG2 = Point(177 + col, 177 + row);
			Point pointLG3 = Point(177 + col, 202 + row);

			array<Point>^ triangleRA = { pointRA1, pointRA2, pointRA3 };
			array<Point>^ triangleLA = { pointLA1, pointLA2, pointLA3 };

			array<Point>^ triangleRB = { pointRB1, pointRB2, pointRB3 };
			array<Point>^ triangleLB = { pointLB1, pointLB2, pointLB3 };

			array<Point>^ triangleRC = { pointRC1, pointRC2, pointRC3 };
			array<Point>^ triangleLC = { pointLC1, pointLC2, pointLC3 };

			array<Point>^ triangleRD = { pointRD1, pointRD2, pointRD3 };
			array<Point>^ triangleLD = { pointLD1, pointLD2, pointLD3 };

			array<Point>^ triangleRE = { pointRE1, pointRE2, pointRE3 };
			array<Point>^ triangleLE = { pointLE1, pointLE2, pointLE3 };

			array<Point>^ triangleRF = { pointRF1, pointRF2, pointRF3 };
			array<Point>^ triangleLF = { pointLF1, pointLF2, pointLF3 };

			array<Point>^ triangleRG = { pointRG1, pointRG2, pointRG3 };
			array<Point>^ triangleLG = { pointLG1, pointLG2, pointLG3 };




			///////////////////////////////////////////////////////////////

			// segment A

			drawEdge(triangleRA, canvas);
			drawHorizontal(27 + col, 0 + row, 150, 25, canvas);
			drawEdge(triangleLA, canvas);

			// segment B

			drawEdge(triangleRB, canvas);
			drawVertical(180 + col, 27 + row, 25, 150, canvas);
			drawEdge(triangleLB, canvas);

			// segment C

			drawEdge(triangleRC, canvas);
			drawVertical(180 + col, 206 + row, 25, 150, canvas);
			drawEdge(triangleLC, canvas);

			// segment D

			drawEdge(triangleRD, canvas);
			drawHorizontal(27 + col, 359 + row, 150, 25, canvas);
			drawEdge(triangleLD, canvas);

			// segment E

			drawEdge(triangleRE, canvas);
			drawVertical(0 + col, 206 + row, 25, 150, canvas);
			drawEdge(triangleLE, canvas);

			// segment F

			drawEdge(triangleRF, canvas);
			drawVertical(0 + col, 27 + row, 25, 150, canvas);
			drawEdge(triangleLF, canvas);

			// segment G

			drawEdge(triangleRG, canvas);
			drawHorizontal(27 + col, 177 + row, 150, 25, canvas);
			drawEdge(triangleLG, canvas);


		}

		/**************************************************************

		NAME: laithesDraw9

		DESCRIPTION: Draws a red LED styled 9

		PRECONDITIONS: Assume programmer knows where he/she wants to place staring coordinates to draw the 9 (col, row)
		laithesDraw9 requires an intialized Graphics canvas to draw its 9.

		POSTCONDITIONS: None

		CALLED BY: countdown

		CALLS: drawEdge, drawHorizontal, drawVertical

		**************************************************************/

		void laithesDraw9(int col, int row, Graphics^ &canvas)
		{
			/*//////////////////////////////////////////////////////////////

			DECLARE LOCAL VARIABLES

			//////////////////////////////////////////////////////////////*/

			// pointRA1 pointLA1 represents 
			// R = right side, L = Left side
			// A = A segment, B = B Segment, C = C Segment, etc
			// 1 = triangle point 1, 2 = triangle point 2, 3 = triangle point 3

			/*
			Each point represents the the triangle on each edge of the


			7 Segment LED Display
			A
			-----
			F |  G  | B
			-----
			E |	    | C
			-----
			D
			*/
			//                     col, row 
			Point pointRA1 = Point(14 + col, 13 + row);
			Point pointRA2 = Point(27 + col, 0 + row);
			Point pointRA3 = Point(27 + col, 25 + row);

			Point pointLA1 = Point(192 + col, 13 + row);
			Point pointLA2 = Point(177 + col, 0 + row);
			Point pointLA3 = Point(177 + col, 25 + row);

			Point pointRB1 = Point(193 + col, 14 + row);
			Point pointRB2 = Point(180 + col, 27 + row);
			Point pointRB3 = Point(205 + col, 27 + row);

			Point pointLB1 = Point(193 + col, 189 + row);
			Point pointLB2 = Point(180 + col, 177 + row);
			Point pointLB3 = Point(205 + col, 177 + row);

			Point pointRC1 = Point(193 + col, 191 + row);
			Point pointRC2 = Point(180 + col, 206 + row);
			Point pointRC3 = Point(205 + col, 206 + row);

			Point pointLC1 = Point(193 + col, 371 + row);
			Point pointLC2 = Point(180 + col, 356 + row);
			Point pointLC3 = Point(205 + col, 356 + row);

			Point pointRD1 = Point(14 + col, 372 + row);
			Point pointRD2 = Point(27 + col, 359 + row);
			Point pointRD3 = Point(27 + col, 384 + row);

			Point pointLD1 = Point(192 + col, 372 + row);
			Point pointLD2 = Point(177 + col, 359 + row);
			Point pointLD3 = Point(177 + col, 384 + row);

			Point pointRE1 = Point(13 + col, 191 + row);
			Point pointRE2 = Point(0 + col, 206 + row);
			Point pointRE3 = Point(25 + col, 206 + row);

			Point pointLE1 = Point(13 + col, 371 + row);
			Point pointLE2 = Point(0 + col, 356 + row);
			Point pointLE3 = Point(25 + col, 356 + row);

			Point pointRF1 = Point(13 + col, 14 + row);
			Point pointRF2 = Point(0 + col, 27 + row);
			Point pointRF3 = Point(25 + col, 27 + row);

			Point pointLF1 = Point(13 + col, 189 + row);
			Point pointLF2 = Point(0 + col, 177 + row);
			Point pointLF3 = Point(25 + col, 177 + row);

			Point pointRG1 = Point(14 + col, 190 + row);
			Point pointRG2 = Point(27 + col, 177 + row);
			Point pointRG3 = Point(27 + col, 202 + row);

			Point pointLG1 = Point(192 + col, 190 + row);
			Point pointLG2 = Point(177 + col, 177 + row);
			Point pointLG3 = Point(177 + col, 202 + row);

			array<Point>^ triangleRA = { pointRA1, pointRA2, pointRA3 };
			array<Point>^ triangleLA = { pointLA1, pointLA2, pointLA3 };

			array<Point>^ triangleRB = { pointRB1, pointRB2, pointRB3 };
			array<Point>^ triangleLB = { pointLB1, pointLB2, pointLB3 };

			array<Point>^ triangleRC = { pointRC1, pointRC2, pointRC3 };
			array<Point>^ triangleLC = { pointLC1, pointLC2, pointLC3 };

			array<Point>^ triangleRD = { pointRD1, pointRD2, pointRD3 };
			array<Point>^ triangleLD = { pointLD1, pointLD2, pointLD3 };

			array<Point>^ triangleRE = { pointRE1, pointRE2, pointRE3 };
			array<Point>^ triangleLE = { pointLE1, pointLE2, pointLE3 };

			array<Point>^ triangleRF = { pointRF1, pointRF2, pointRF3 };
			array<Point>^ triangleLF = { pointLF1, pointLF2, pointLF3 };

			array<Point>^ triangleRG = { pointRG1, pointRG2, pointRG3 };
			array<Point>^ triangleLG = { pointLG1, pointLG2, pointLG3 };




			///////////////////////////////////////////////////////////////

			// segment A

			drawEdge(triangleRA, canvas);
			drawHorizontal(27 + col, 0 + row, 150, 25, canvas);
			drawEdge(triangleLA, canvas);

			// segment B

			drawEdge(triangleRB, canvas);
			drawVertical(180 + col, 27 + row, 25, 150, canvas);
			drawEdge(triangleLB, canvas);

			// segment C

			drawEdge(triangleRC, canvas);
			drawVertical(180 + col, 206 + row, 25, 150, canvas);
			drawEdge(triangleLC, canvas);

			//// segment D

			//drawEdge(triangleRD);
			//drawHorizontal(27 + col, 359 + row, 150, 25);
			//drawEdge(triangleLD);

			//// segment E

			//drawEdge(triangleRE);
			//drawVertical(0 + col, 206 + row, 25, 150);
			//drawEdge(triangleLE);

			// segment F

			drawEdge(triangleRF, canvas);
			drawVertical(0 + col, 27 + row, 25, 150, canvas);
			drawEdge(triangleLF, canvas);

			// segment G

			drawEdge(triangleRG, canvas);
			drawHorizontal(27 + col, 177 + row, 150, 25, canvas);
			drawEdge(triangleLG, canvas);
		}

		/**************************************************************

				NAME: welcome

				DESCRIPTION: Displays the countdown, plays music on a loop, and displays welcome title and description.

				PRECONDITIONS: None

				POSTCONDITIONS: None

				CALLED BY: buttonStart_Click

				CALLS: clear, countdown

		**************************************************************/

		void welcome()
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			Graphics^ canvas = pictureBoxCountdown->CreateGraphics();
			System::Media::SoundPlayer sndPlayer("..//Media/Audio/Music/Red Like Roses (RWBY Music Box Version).wav");

			////////////////////////////////////////////////////////////////////
			
			pictureBoxCountdown->Visible = true;
			countdown(canvas);
			clear(canvas);
			pictureBoxCountdown->SendToBack();


			Threading::Thread::Sleep(1000);
			sndPlayer.PlayLooping();


			labelWelcomeDescription->Text = "You are never out of touch with your family, friends, or business associates" +
				"when you travel to distant heavenly bodies with " + MY_NAME + "'s Intergalactic Travel." +
				" During your flight just register to our internet service to let us know " +
				"when you wish to schedule your web surfing from outer space.";

			labelWelcomeTitle->Visible = true;
			labelWelcomeDescription->Visible = true;
			timerClock->Enabled = true;
			labelDateTime->Visible = true;

			buttonContinue->Visible = true;
			buttonExit->Visible = true;


		}

		/*//////////////////////////////////////////////////////////////

						END CUSTOMED DEFINED FUNCTIONS

		//////////////////////////////////////////////////////////////*/


		/*//////////////////////////////////////////////////////////////

						EVENT DRIVEN DEFINED FUNCTIONS

		//////////////////////////////////////////////////////////////*/


		/**************************************************************

			NAME: buttonClockShow_Click

			DESCRIPTION: Starts the clock slideshow.

		**************************************************************/

	private: System::Void buttonClockShow_Click(System::Object^  sender, System::EventArgs^  e)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			System::Media::SoundPlayer sndPlayer(".../Media/Audio/Music/John Williams - Forward to Time Past.wav");

			Graphics^ canvas = pictureBoxCountdown->CreateGraphics();


			////////////////////////////////////////////////////////////////////


			sndPlayer.PlayLooping();

			pictureBoxCountdown->BringToFront();
			clear(canvas);

			timerClockShow->Enabled = true;

			buttonExitClockShow->Visible = true;
			buttonExitClockShow->BringToFront();








		}
		
		/**************************************************************

			 NAME: buttonContinue_Click

			 DESCRIPTION: Progresses the program based on click.

		**************************************************************/
	private: System::Void buttonContinue_Click(System::Object^  sender, System::EventArgs^  e)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			int hour, minute, second, fontSize = 36;

			static int programProgress = 0;

			String^ accountNumber = "-1";
			String^ password = "Default Password";
			String^ startTime;
			String^ fontName = "Impact";

			////////////////////////////////////////////////////////////////////

			switch (programProgress)
			{
			case 0:
				labelWelcomeDescription->Text = "Please enter your account number and password.";

				labelAccountNumber->Visible = true;
				labelPassword->Visible = true;
				textBoxAccountNumber->Visible = true;
				textBoxPassword->Visible = true;
				labelWelcomeTitle->Visible = false;

				buttonContinue->Text = "Login";

				programProgress = 1;
				break;
			case 1:
				accountNumber = getAccountNumber();
				getPassword(password);

				echoAccountInfo(accountNumber, password);

				labelAccountNumber->Visible = false;
				labelPassword->Visible = false;
				textBoxAccountNumber->Visible = false;
				textBoxPassword->Visible = false;
				buttonContinue->Text = "Continue";

				programProgress = 2;
				break;
			case 2:
				displayNameStartTimeLabels();

				programProgress = 3;
				break;

			case 3:
				name = textBoxAccountNumber->Text;
				startTime = textBoxPassword->Text;

				convertTime(startTime, hour, minute, second);

				labelWelcomeDescription->Text = "Thank you " + name + " for entering " + startTime + ". "
					+ "Enjoy your internet experience starting at " + hour.ToString("D2") + ":" + minute.ToString("D2") + ":" + second.ToString("D2") + ".";

				calcTimeRemaining(hour, minute, second);


				textBoxPassword->Text = "HH:MM:SS";

				timerClock->Enabled = false;

				// Draws clock on the left
				drawClock(hour, minute, second);

				// Draws clock on right with image
				drawClockImage(hour, minute, second);

				// Draws the time between the two clocks
				drawTime(hour, minute, second, fontName, fontSize);

				break;

			default:
				// Default should neer happen
				labelWelcomeDescription->Text = "If you can see this the switch is broken.";
			}
		}

		/**************************************************************

			 NAME: buttonExit_Click

			 DESCRIPTION: Ends the program.


		**************************************************************/

	private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e)
				{
					pictureBoxCountdown->BringToFront();
					farewell();
				}

		/**************************************************************

			 NAME: buttonExitClockShow_Click

			 DESCRIPTION: Exit clock slideshow.


		**************************************************************/

	private: System::Void buttonExitClockShow_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 ////////////////////////////////////////////////////////////////////
				 //
				 //				DECLARE LOCAL VARIABLES/OBJECTS
				 //
				 ////////////////////////////////////////////////////////////////////

				 Graphics^ canvas = pictureBoxCountdown->CreateGraphics();
				 System::Media::SoundPlayer sndPlayer("..//Media/Audio/Music/Red Like Roses (RWBY Music Box Version).wav");

				 ////////////////////////////////////////////////////////////////////


				 timerClockShow->Enabled = false;

				 clear(canvas);
				 pictureBoxCountdown->SendToBack();
				 sndPlayer.PlayLooping();


				 buttonExitClockShow->Visible = false;
			 }


		/**************************************************************

				NAME: buttonStart_Click

				DESCRIPTION: Starts the program.


		**************************************************************/

	private: System::Void buttonStart_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		buttonStart->Visible = false;
		welcome();
		
	}

		/**************************************************************

			 NAME: clockShow_MouseHover

			 DESCRIPTION: Changes button text from Clocks? to Clocks!


		**************************************************************/

	private: System::Void clockShow_MouseHover(System::Object^  sender, System::EventArgs^  e)
	{
		buttonClockShow->Text = "Clocks!";
	}

		/**************************************************************

			 NAME: clockShow_MouseLeave

			 DESCRIPTION: Changes button text from Clocks! to Clocks?

		**************************************************************/

	private: System::Void clockShow_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{
		buttonClockShow->Text = "Clocks?";
	}

	/*private: System::Void pictureBoxCountdown_Paint(Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
				 

				 
	}*/
	  /**************************************************************

				NAME: timerClock_Tick

				DESCRIPTION: Draws a clock with the current time.

	  **************************************************************/

	private: System::Void timerClock_Tick(System::Object^  sender, System::EventArgs^  e) 
{
		////////////////////////////////////////////////////////////////////
		//
		//				DECLARE LOCAL VARIABLES/OBJECTS
		//
		////////////////////////////////////////////////////////////////////

		int hour = DateTime::Now.Hour;
		int minute = DateTime::Now.Minute;
		int second = DateTime::Now.Second;

		////////////////////////////////////////////////////////////////////

	drawClock(hour, minute, second);
}

	 /**************************************************************

				NAME: timerClockShow_Tick

				DESCRIPTION: Draws clock images on a 2 second delay.

	 **************************************************************/

	private: System::Void timerClockShow_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	////////////////////////////////////////////////////////////////////
	//
	//				DECLARE LOCAL VARIABLES/OBJECTS
	//
	////////////////////////////////////////////////////////////////////
	static int index; 

	Graphics^ canvas = pictureBoxCountdown->CreateGraphics();

	Image^ clockImage;

	String^ commonFilePath = ".../Media/Images/";

	array<String^> ^clockPictureArray = { "1366x768_clocks-melt-Salvador-Dali-time-abstract-HD-Wallpaper.jpg",
		"aba405a4e79a0164e75ea6af54b88ce8.jpg",
		"clocks-digital-art-hd-wallpaper-1920x1080-6394.jpg",
		"clocks-prague-czech-republic-fresh-hd-wallpaper-Czech-Republic-HD-free-wallpapers-backgrounds-images-FHD-4k-download-2014-2015-2016.jpg",
		"eyes_clocks_grayscale_monochrome_photomanipulations_2798x1894_wallpaper_Wallpaper_2798x1894_www.wallpaperswa.com.jpg",
		"preview800x500.jpg" };

	////////////////////////////////////////////////////////////////////

	clockImage = Image::FromFile(commonFilePath + clockPictureArray[index]);
	canvas->DrawImage(clockImage, 100, 65, 800, 600);

	index++;
	if (index > 5)
	{
		index = 0;
	}


}

	/**************************************************************

			 NAME: timerDateTime_Tick

			 DESCRIPTION: Displays current date and time in a label.

	**************************************************************/

	private: System::Void timerDateTime_Tick(System::Object^  sender, System::EventArgs^  e)
				{

					labelDateTime->Text = "The current date and time:\n" +
						DateTime::Now.ToString();
				}


//private: System::Void labelWelcomeDescription_TextChanged(System::Object^  sender, System::EventArgs^  e) 
//{
//	int formLengthMidpoint = 1008/2;
//	int labelLengthMidpoint = (labelWelcomeDescription->Width)/2;
//
//	labelWelcomeDescription->Location = System::Drawing::Point( formLengthMidpoint - labelLengthMidpoint, 71 );
//}


	 /*//////////////////////////////////////////////////////////////

				 END EVENT DRIVEN DEFINED FUNCTIONS

	 //////////////////////////////////////////////////////////////*/
};
}