/**************************************************************
***************************************************************
***************************************************************

ID INFORMATION

Programmers			:			Laithe Marshall
Assignment #		:   		Program 1
Assignment Name		:	    	GUI Quirky Programming
Course # and Title	:	    	CISC 192 - C++
Class Meeting Time	:	    	MW 9:35 - 12:45
Instructor			:	    	Professor Forman
Hours			   	:			25
Difficulty			:	    	5
Completion Date		:	    	October/5/2014
Project Name		:  	    	TA1_5GGF

***************************************************************
***************************************************************
CUSTOM DEFINED FUNCTIONS


***************************************************************
***************************************************************
EVENT-DRIVEN FUNCTIONS


***************************************************************
***************************************************************
PROGRAM DESCRIPTION


***************************************************************
***************************************************************

CREDITS

Acknowledge those who helped you and whom you helped
Remember the “triangle of learning”

Thanks for assistance and inspiration from:

Professor Forman, Cplusplus.com, Stackoverflow.com
Learncpp.com Carlos

Thanks for the opportunity to assist and inspire:

NA

***************************************************************
***************************************************************

MEDIA

"Mystic Mountain" Hubble Space Telescope Image
http://www.spacetelescope.org/static/archives/images/large/heic1007a.jpg

Rocket Blast Off
http://www.youtube.com/watch?v=MmJ41X0B8xw

Spaceship Image
http://www.wallpaperup.com/uploads/wallpapers/2013/02/18/41732/b4aa40fc46eb69f8f601f74544c92b60.jpg

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
			this->pictureBoxCountdown->Dock = System::Windows::Forms::DockStyle::Fill;
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
			this->labelWelcomeDescription->Size = System::Drawing::Size(581, 135);
			this->labelWelcomeDescription->TabIndex = 4;
			this->labelWelcomeDescription->Text = resources->GetString(L"labelWelcomeDescription.Text");
			this->labelWelcomeDescription->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelWelcomeDescription->Visible = false;
			// 
			// buttonContinue
			// 
			this->buttonContinue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->buttonContinue->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonContinue->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonContinue->ForeColor = System::Drawing::Color::White;
			this->buttonContinue->Location = System::Drawing::Point(324, 352);
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
			this->buttonExit->Location = System::Drawing::Point(564, 352);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 730);
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

		String^ name;

		///////////////////////////////////////////////////////////////



		/*//////////////////////////////////////////////////////////////

		CUSTOM DEFINED FUNCTIONS

		//////////////////////////////////////////////////////////////*/

		void calcHourCoords(int hour, int minute, double &xHour, double &yHour)
		{
			double pi = Math::PI;

			double hAngle = ((hour * 30) + (minute * 0.5)) * (pi / 180);

			xHour = 150 + (Math::Sin(hAngle) * 60);
			yHour = 150 - (Math::Cos(hAngle) * 60);

		}

		void calcMinuteCoords(int minute, double &xMinute, double &yMinute)
		{
			const double &pi = Math::PI;

			double mAngle = (6 * minute) * (pi / 180);

			xMinute = 150 + (Math::Sin(mAngle) * 100);
			yMinute = 150 - (Math::Cos(mAngle) * 100);
		}

		void calcSecondCoords(int second, double &xSecond, double &ySecond)
		{
			const double &pi = Math::PI;

			double sAngle = (6 * second) * (pi / 180);

			xSecond = 150 + (Math::Sin(sAngle) * 110);
			ySecond = 150 - (Math::Cos(sAngle) * 110);
		}

		/**************************************************************

		NAME:			clear

		DESCRIPTION:	clears the drawing canvas and sets the color to black

		CALLED BY: countdown
		buttonSubmit_click

		CALLS: None

		**************************************************************/

		void clear(Graphics^ &canvas)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			Image^ spaceImage = Image::FromFile("...//Images//Hd-Wallpapers-Space-51.jpg");

			////////////////////////////////////////////////////////////////////



			//canvas->Clear(Color::Transparent);

			canvas->DrawImage(spaceImage, 0, 0, 1008, 730); // 1024-16 = 1008, 768-730 = 38 may be useful for stretching images manually

		}

		void convertTime(String^ &stime, int &hour, int &minute, int &second)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			int time, remainder;

			////////////////////////////////////////////////////////////////////

			Int32::TryParse(stime, time);

			hour = time / 10000;
			remainder = time % 10000;
			minute = remainder / 100;
			second = remainder % 100;

			

		}

		/**************************************************************

		NAME:			countdown

		DESCRIPTION:	displays a counts down from 9 to 0 by drawing red numerals
		based on a 7 segment LED display

		CALLED BY: buttonSubmit_click

		CALLS: clear
		laithesDraw9
		laithesDraw8
		laithesDraw7
		laithesDraw6
		laithesDraw5
		laithesDraw4
		laithesDraw3
		laithesDraw2
		laithesDraw1
		laithesDraw0

		**************************************************************/

		void countdown(Graphics^ &canvas)
		{
			
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

			laithesDraw1(400, 100, canvas);
			Threading::Thread::Sleep(1000);
			clear(canvas);

			laithesDraw0(400, 100, canvas);
			Threading::Thread::Sleep(1000);
			clear(canvas);
		}

		void displayNameStartTimeLabels()
		{
			labelWelcomeDescription->Text = "Please enter your name and your start time. \n Start time format: hhmmss \n (0-23 hour) (0-59 minute) (0-59 second)";


			labelAccountNumber->Visible = true;
			labelAccountNumber->Text = "Name";

			textBoxAccountNumber->Text = "Please enter your name.";
			textBoxAccountNumber->Visible = true;

			labelPassword->Visible = true;
			labelPassword->Text = "Start time";

			textBoxPassword->Visible = true;
			textBoxPassword->PasswordChar::set(0);
			textBoxPassword->Text = "Please enter your start time.";

			buttonContinue->Text = "Submit";
		}

		void drawClock(int &hour, int &minute, int &second)
		{
			// local variables

			double xHour = 0, yHour = 0, xMinute = 0, yMinute = 0, xSecond = 0, ySecond = 0;

			Brush^ drawBrushBlack = gcnew Drawing::SolidBrush(System::Drawing::Color::Black);
			Brush^ drawBrushWhite = gcnew Drawing::SolidBrush(System::Drawing::Color::White);
			Brush^ drawBrushGreen = gcnew Drawing::SolidBrush(System::Drawing::Color::Green);

			Pen^ drawPenBlack = gcnew Drawing::Pen(System::Drawing::Color::Black, 4); //bug found if width is odd hour 00 will align, but not hour 12
			Pen^ drawPenPurple = gcnew Drawing::Pen(System::Drawing::Color::Purple, 4);
			Pen^ drawPenRed = gcnew Drawing::Pen(System::Drawing::Color::Red, 2);
			Pen^ drawPenOrange = gcnew Drawing::Pen(System::Drawing::Color::Orange, 6);
			Drawing::Font^ drawFont = gcnew Drawing::Font("Times New Roman", 14);

			Graphics^  canvas = pictureBoxDrawnClock->CreateGraphics();

			//

			canvas->FillEllipse(drawBrushBlack, 0, 0, 300, 300);
			canvas->FillEllipse(drawBrushWhite, 5, 5, 290, 290);

			//canvas->FillEllipse(drawBrushWhite, 230, 230, 30, 30);

			/*for (int d = 0; d < 360; d += 6) TODO Draw clock ticks for each minute and draw 1,2,4,5,7,8,10,11 on the clock
			{
				static int x1 = 0, y1 = 0, x2 = 0, y2 = 0;


				canvas->DrawLine(drawPen, x1 + 245, y1 - 10, x2 + 245, y2 - 20);
				x1 += 6;
				y1 -= 6;
			}*/

			canvas->DrawLine(drawPenBlack, 150, 5, 150, 295); //vertical line used for spacing of numbers on the drawn clock
			canvas->DrawLine(drawPenBlack, 5, 150, 295, 150); //horizontal line

			// Draws the numbers of the clock

			canvas->DrawString("12", drawFont, drawBrushBlack, 137, 6);
			canvas->DrawString("3", drawFont, drawBrushBlack, 280, 139);
			canvas->DrawString("6", drawFont, drawBrushBlack, 142, 270);
			canvas->DrawString("9", drawFont, drawBrushBlack, 5, 138);

			calcHourCoords(hour, minute, xHour, yHour);

			calcMinuteCoords(minute, xMinute, yMinute);

			calcSecondCoords(second, xSecond, ySecond);

			//Draws the Hour, Minute, and Second hand

			canvas->DrawLine(drawPenPurple, 150, 150, xMinute, yMinute);
			canvas->DrawLine(drawPenOrange, 150, 150, xHour, yHour);
			canvas->DrawLine(drawPenRed, 150, 150, xSecond, ySecond);

			
		}

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

		void drawHorizontal(int col, int row, int length, int width, Graphics^ &canvas)
		{
			/*//////////////////////////////////////////////////////////////

			DECLARE LOCAL VARIABLES

			//////////////////////////////////////////////////////////////*/

			//canvas = this->CreateGraphics();

			Brush^ drawBrush = gcnew Drawing::SolidBrush(System::Drawing::Color::Red);

			///////////////////////////////////////////////////////////////

			canvas->FillRectangle(drawBrush, col, row, length, width);
		}

		void drawVertical(int col, int row, int length, int width, Graphics^ &canvas)
		{
			/*//////////////////////////////////////////////////////////////

			DECLARE LOCAL VARIABLES

			//////////////////////////////////////////////////////////////*/

		

			Brush^ drawBrush = gcnew Drawing::SolidBrush(System::Drawing::Color::Red);

			///////////////////////////////////////////////////////////////

			canvas->FillRectangle(drawBrush, col, row, length, width);
		}

		void echoAccountInfo(String^ accountNumber, String^ password)
		{
			labelWelcomeDescription->Text = "Thank you for entering the account #: " + accountNumber
											+ " and the password: " + password + ".";
		}

		String^ getAccountNumber()
		{
			return textBoxAccountNumber->Text;
		}

		void getPassword(String^ &password)
		{
			password = textBoxPassword->Text;
		}

		

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

		void welcome()
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			Graphics^ canvas = pictureBoxCountdown->CreateGraphics();

			////////////////////////////////////////////////////////////////////
			
			pictureBoxCountdown->Visible = true;
			//countdown(canvas);
			pictureBoxCountdown->Visible = false;

			labelWelcomeTitle->Visible = true;
			labelWelcomeDescription->Visible = true;
			labelDateTime->Visible = true;

			buttonContinue->Visible = true;
			buttonExit->Visible = true;


		}

		///////////////////////////////////////////////////////////////

		/*//////////////////////////////////////////////////////////////

		EVENT-DRIVEN FUNCTIONS

		//////////////////////////////////////////////////////////////*/

	private: System::Void buttonStart_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		buttonStart->Visible = false;
		welcome();
		
	}

	/*private: System::Void pictureBoxCountdown_Paint(Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
				 

				 
	}*/
	private: System::Void timerDateTime_Tick(System::Object^  sender, System::EventArgs^  e) 
	{

		labelDateTime->Text = "The current date and time:\n" +
			DateTime::Now.ToString();
	}

private: System::Void buttonContinue_Click(System::Object^  sender, System::EventArgs^  e) 
{
	////////////////////////////////////////////////////////////////////
	//
	//				DECLARE LOCAL VARIABLES/OBJECTS
	//
	////////////////////////////////////////////////////////////////////

	int hour, minute, second;

	static int programProgress = 2;

	String^ accountNumber = "-1";
	String^ password = "Default Password";
	String^ startTime;

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
						+ "Enjoy your internet experience starting at " + hour + ":" + minute + ":" + second + ".";

			drawClock(hour, minute, second);

			break;
		case 4:

			break;
	}
}
private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Close();
}
};
}
