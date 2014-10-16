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
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->pictureBoxCountdown = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCountdown))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonStart
			// 
			this->buttonStart->BackColor = System::Drawing::Color::Transparent;
			this->buttonStart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStart->Location = System::Drawing::Point(431, 679);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(75, 23);
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
			this->pictureBoxCountdown->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBoxCountdown_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 730);
			this->Controls->Add(this->pictureBoxCountdown);
			this->Controls->Add(this->buttonStart);
			this->Name = L"MyForm";
			this->Text = L"Program 1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCountdown))->EndInit();
			this->ResumeLayout(false);

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

		/**************************************************************

		NAME:			clear

		DESCRIPTION:	clears the drawing canvas and sets the color to black

		CALLED BY: countdown
		buttonSubmit_click

		CALLS: None

		**************************************************************/

		void clear(Graphics^ canvas)
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

			//canvas = this->CreateGraphics();

			Brush^ drawBrush = gcnew Drawing::SolidBrush(System::Drawing::Color::Red);

			///////////////////////////////////////////////////////////////

			canvas->FillRectangle(drawBrush, col, row, length, width);
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

		///////////////////////////////////////////////////////////////

		/*//////////////////////////////////////////////////////////////

		EVENT-DRIVEN FUNCTIONS

		//////////////////////////////////////////////////////////////*/

	private: System::Void buttonStart_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//countdown();

				 static int first = 0;


					 Graphics^ canvas = pictureBoxCountdown->CreateGraphics();

					 /* Brush^ greenBrush = gcnew Drawing::SolidBrush(Drawing::Color::Green);

					 canvas->FillRectangle(greenBrush, 0, 0, 20, 10);*/

					 pictureBoxCountdown->Visible = true;

					 countdown(canvas);


	}

	private: System::Void pictureBoxCountdown_Paint(Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
				 

				 
	}
	};
}
