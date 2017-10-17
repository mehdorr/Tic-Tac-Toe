#pragma once

namespace wftictactoeproj1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  a1;
	private: System::Windows::Forms::Button^  a2;
	private: System::Windows::Forms::Button^  a3;
	private: System::Windows::Forms::Button^  b1;
	private: System::Windows::Forms::Button^  b2;
	private: System::Windows::Forms::Button^  b3;
	private: System::Windows::Forms::Button^  c1;
	private: System::Windows::Forms::Button^  c2;
	private: System::Windows::Forms::Button^  c3;
	protected:









	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::Button^  btnNewGame;
	private: System::Windows::Forms::Label^  labTurnCountTxt;
	private: System::Windows::Forms::Label^  labTurnCount;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labLastWinner;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  labXWins;
	private: System::Windows::Forms::Label^  labDraws;
	private: System::Windows::Forms::Label^  labOWins;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->a1 = (gcnew System::Windows::Forms::Button());
			this->a2 = (gcnew System::Windows::Forms::Button());
			this->a3 = (gcnew System::Windows::Forms::Button());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->c1 = (gcnew System::Windows::Forms::Button());
			this->c2 = (gcnew System::Windows::Forms::Button());
			this->c3 = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnNewGame = (gcnew System::Windows::Forms::Button());
			this->labTurnCountTxt = (gcnew System::Windows::Forms::Label());
			this->labTurnCount = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labLastWinner = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labXWins = (gcnew System::Windows::Forms::Label());
			this->labDraws = (gcnew System::Windows::Forms::Label());
			this->labOWins = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// a1
			// 
			this->a1->Font = (gcnew System::Drawing::Font(L"Inconsolata", 45, System::Drawing::FontStyle::Bold));
			this->a1->Location = System::Drawing::Point(12, 12);
			this->a1->Name = L"a1";
			this->a1->Size = System::Drawing::Size(100, 100);
			this->a1->TabIndex = 0;
			this->a1->UseVisualStyleBackColor = true;
			this->a1->Click += gcnew System::EventHandler(this, &mainForm::btnClick_tttLogic);
			this->a1->MouseEnter += gcnew System::EventHandler(this, &mainForm::btnEnter_ttt);
			this->a1->MouseLeave += gcnew System::EventHandler(this, &mainForm::btnLeave_ttt);
			// 
			// a2
			// 
			this->a2->Font = (gcnew System::Drawing::Font(L"Inconsolata", 45, System::Drawing::FontStyle::Bold));
			this->a2->Location = System::Drawing::Point(118, 12);
			this->a2->Name = L"a2";
			this->a2->Size = System::Drawing::Size(100, 100);
			this->a2->TabIndex = 1;
			this->a2->UseVisualStyleBackColor = true;
			this->a2->Click += gcnew System::EventHandler(this, &mainForm::btnClick_tttLogic);
			this->a2->MouseEnter += gcnew System::EventHandler(this, &mainForm::btnEnter_ttt);
			this->a2->MouseLeave += gcnew System::EventHandler(this, &mainForm::btnLeave_ttt);
			// 
			// a3
			// 
			this->a3->Font = (gcnew System::Drawing::Font(L"Inconsolata", 45, System::Drawing::FontStyle::Bold));
			this->a3->Location = System::Drawing::Point(224, 12);
			this->a3->Name = L"a3";
			this->a3->Size = System::Drawing::Size(100, 100);
			this->a3->TabIndex = 2;
			this->a3->UseVisualStyleBackColor = true;
			this->a3->Click += gcnew System::EventHandler(this, &mainForm::btnClick_tttLogic);
			this->a3->MouseEnter += gcnew System::EventHandler(this, &mainForm::btnEnter_ttt);
			this->a3->MouseLeave += gcnew System::EventHandler(this, &mainForm::btnLeave_ttt);
			// 
			// b1
			// 
			this->b1->Font = (gcnew System::Drawing::Font(L"Inconsolata", 45, System::Drawing::FontStyle::Bold));
			this->b1->Location = System::Drawing::Point(12, 118);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(100, 100);
			this->b1->TabIndex = 3;
			this->b1->UseVisualStyleBackColor = true;
			this->b1->Click += gcnew System::EventHandler(this, &mainForm::btnClick_tttLogic);
			this->b1->MouseEnter += gcnew System::EventHandler(this, &mainForm::btnEnter_ttt);
			this->b1->MouseLeave += gcnew System::EventHandler(this, &mainForm::btnLeave_ttt);
			// 
			// b2
			// 
			this->b2->Font = (gcnew System::Drawing::Font(L"Inconsolata", 45, System::Drawing::FontStyle::Bold));
			this->b2->Location = System::Drawing::Point(118, 118);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(100, 100);
			this->b2->TabIndex = 4;
			this->b2->UseVisualStyleBackColor = true;
			this->b2->Click += gcnew System::EventHandler(this, &mainForm::btnClick_tttLogic);
			this->b2->MouseEnter += gcnew System::EventHandler(this, &mainForm::btnEnter_ttt);
			this->b2->MouseLeave += gcnew System::EventHandler(this, &mainForm::btnLeave_ttt);
			// 
			// b3
			// 
			this->b3->Font = (gcnew System::Drawing::Font(L"Inconsolata", 45, System::Drawing::FontStyle::Bold));
			this->b3->Location = System::Drawing::Point(224, 118);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(100, 100);
			this->b3->TabIndex = 5;
			this->b3->UseVisualStyleBackColor = true;
			this->b3->Click += gcnew System::EventHandler(this, &mainForm::btnClick_tttLogic);
			this->b3->MouseEnter += gcnew System::EventHandler(this, &mainForm::btnEnter_ttt);
			this->b3->MouseLeave += gcnew System::EventHandler(this, &mainForm::btnLeave_ttt);
			// 
			// c1
			// 
			this->c1->Font = (gcnew System::Drawing::Font(L"Inconsolata", 45, System::Drawing::FontStyle::Bold));
			this->c1->Location = System::Drawing::Point(12, 224);
			this->c1->Name = L"c1";
			this->c1->Size = System::Drawing::Size(100, 100);
			this->c1->TabIndex = 6;
			this->c1->UseVisualStyleBackColor = true;
			this->c1->Click += gcnew System::EventHandler(this, &mainForm::btnClick_tttLogic);
			this->c1->MouseEnter += gcnew System::EventHandler(this, &mainForm::btnEnter_ttt);
			this->c1->MouseLeave += gcnew System::EventHandler(this, &mainForm::btnLeave_ttt);
			// 
			// c2
			// 
			this->c2->Font = (gcnew System::Drawing::Font(L"Inconsolata", 45, System::Drawing::FontStyle::Bold));
			this->c2->Location = System::Drawing::Point(118, 224);
			this->c2->Name = L"c2";
			this->c2->Size = System::Drawing::Size(100, 100);
			this->c2->TabIndex = 7;
			this->c2->UseVisualStyleBackColor = true;
			this->c2->Click += gcnew System::EventHandler(this, &mainForm::btnClick_tttLogic);
			this->c2->MouseEnter += gcnew System::EventHandler(this, &mainForm::btnEnter_ttt);
			this->c2->MouseLeave += gcnew System::EventHandler(this, &mainForm::btnLeave_ttt);
			// 
			// c3
			// 
			this->c3->Font = (gcnew System::Drawing::Font(L"Inconsolata", 45, System::Drawing::FontStyle::Bold));
			this->c3->Location = System::Drawing::Point(224, 224);
			this->c3->Name = L"c3";
			this->c3->Size = System::Drawing::Size(100, 100);
			this->c3->TabIndex = 8;
			this->c3->UseVisualStyleBackColor = true;
			this->c3->Click += gcnew System::EventHandler(this, &mainForm::btnClick_tttLogic);
			this->c3->MouseEnter += gcnew System::EventHandler(this, &mainForm::btnEnter_ttt);
			this->c3->MouseLeave += gcnew System::EventHandler(this, &mainForm::btnLeave_ttt);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Inconsolata", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnExit->Location = System::Drawing::Point(249, 346);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 9;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &mainForm::btnExit_Click);
			// 
			// btnNewGame
			// 
			this->btnNewGame->Font = (gcnew System::Drawing::Font(L"Inconsolata", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnNewGame->Location = System::Drawing::Point(12, 346);
			this->btnNewGame->Name = L"btnNewGame";
			this->btnNewGame->Size = System::Drawing::Size(75, 23);
			this->btnNewGame->TabIndex = 10;
			this->btnNewGame->Text = L"New Game";
			this->btnNewGame->UseVisualStyleBackColor = true;
			this->btnNewGame->Click += gcnew System::EventHandler(this, &mainForm::btnNewGame_Click);
			// 
			// labTurnCountTxt
			// 
			this->labTurnCountTxt->AutoSize = true;
			this->labTurnCountTxt->Font = (gcnew System::Drawing::Font(L"Inconsolata", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labTurnCountTxt->Location = System::Drawing::Point(116, 343);
			this->labTurnCountTxt->Name = L"labTurnCountTxt";
			this->labTurnCountTxt->Size = System::Drawing::Size(71, 12);
			this->labTurnCountTxt->TabIndex = 11;
			this->labTurnCountTxt->Text = L"Turn Count:";
			// 
			// labTurnCount
			// 
			this->labTurnCount->AutoSize = true;
			this->labTurnCount->Font = (gcnew System::Drawing::Font(L"Inconsolata", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labTurnCount->Location = System::Drawing::Point(187, 341);
			this->labTurnCount->Name = L"labTurnCount";
			this->labTurnCount->Size = System::Drawing::Size(14, 15);
			this->labTurnCount->TabIndex = 12;
			this->labTurnCount->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Inconsolata", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(116, 357);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 12);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Last Winner:";
			// 
			// labLastWinner
			// 
			this->labLastWinner->AutoSize = true;
			this->labLastWinner->Font = (gcnew System::Drawing::Font(L"Inconsolata", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labLastWinner->Location = System::Drawing::Point(189, 357);
			this->labLastWinner->Name = L"labLastWinner";
			this->labLastWinner->Size = System::Drawing::Size(29, 12);
			this->labLastWinner->TabIndex = 14;
			this->labLastWinner->Text = L"None";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Inconsolata", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(12, 327);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 12);
			this->label2->TabIndex = 15;
			this->label2->Text = L"No. of X wins:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Inconsolata", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(118, 327);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 12);
			this->label3->TabIndex = 16;
			this->label3->Text = L"No. of Draws:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Inconsolata", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(225, 327);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 12);
			this->label4->TabIndex = 17;
			this->label4->Text = L"No. of O wins:";
			// 
			// labXWins
			// 
			this->labXWins->AutoSize = true;
			this->labXWins->Font = (gcnew System::Drawing::Font(L"Inconsolata", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labXWins->Location = System::Drawing::Point(101, 327);
			this->labXWins->Name = L"labXWins";
			this->labXWins->Size = System::Drawing::Size(11, 12);
			this->labXWins->TabIndex = 18;
			this->labXWins->Text = L"0";
			// 
			// labDraws
			// 
			this->labDraws->AutoSize = true;
			this->labDraws->Font = (gcnew System::Drawing::Font(L"Inconsolata", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labDraws->Location = System::Drawing::Point(207, 327);
			this->labDraws->Name = L"labDraws";
			this->labDraws->Size = System::Drawing::Size(11, 12);
			this->labDraws->TabIndex = 19;
			this->labDraws->Text = L"0";
			// 
			// labOWins
			// 
			this->labOWins->AutoSize = true;
			this->labOWins->Font = (gcnew System::Drawing::Font(L"Inconsolata", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labOWins->Location = System::Drawing::Point(311, 327);
			this->labOWins->Name = L"labOWins";
			this->labOWins->Size = System::Drawing::Size(11, 12);
			this->labOWins->TabIndex = 20;
			this->labOWins->Text = L"0";
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(334, 381);
			this->Controls->Add(this->labOWins);
			this->Controls->Add(this->labDraws);
			this->Controls->Add(this->labXWins);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labLastWinner);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labTurnCount);
			this->Controls->Add(this->labTurnCountTxt);
			this->Controls->Add(this->btnNewGame);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->c3);
			this->Controls->Add(this->c2);
			this->Controls->Add(this->c1);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->a3);
			this->Controls->Add(this->a2);
			this->Controls->Add(this->a1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tic-Tac-Toe";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//used variables
		bool turn = true; //if true, then it's players "X" turn, if false, it's players "Y" turn..
		bool playerWon = false; //for checkWinner() method
		int turnCount = 0; //for checking for draws
		int oWins = 0, xWins = 0, draws = 0; //for displaying information about the no. of wins

	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	private: System::Void btnClick_tttLogic(System::Object^  sender, System::EventArgs^  e) {
		Button ^btnPressed = safe_cast<Button^>(sender);
		if (turn == true) {
			btnPressed->Text = "X";
			btnPressed->Enabled = false;
			turn = false;
		}
		else {
			btnPressed->Text = "O";
			btnPressed->Enabled = false;
			turn = true;
		}
		turnCount++;
		labTurnCount->Text = Convert::ToString(turnCount);
		checkWinner();
	}
			 
	private: System::Void checkWinner() {
		//horizontal checks for wins
		if ((a1->Text == a2->Text) && (a2->Text == a3->Text) && (!a1->Enabled)) {
			playerWon = true;
		}
		else if ((b1->Text == b2->Text) && (b2->Text == b3->Text) && (!b1->Enabled)) {
			playerWon = true;
		}
		else if ((c1->Text == c2->Text) && (c2->Text == c3->Text) && (!c1->Enabled)) {
			playerWon = true;
		}

		//vertical checks for wins
		if ((a1->Text == b1->Text) && (b1->Text == c1->Text) && (!a1->Enabled)) {
			playerWon = true;
		}
		else if ((a2->Text == b2->Text) && (b2->Text == c2->Text) && (!a2->Enabled)) {
			playerWon = true;
		}
		else if ((a3->Text == b3->Text) && (b3->Text == c3->Text) && (!a3->Enabled)) {
			playerWon = true;
		}

		//diagonal checks for wins
		if ((a1->Text == b2->Text) && (b2->Text == c3->Text) && (!a1->Enabled)) {
			playerWon = true;
		}
		else if ((c1->Text == b2->Text) && (b2->Text == a3->Text) && (!c1->Enabled)) {
			playerWon = true;
		}

		if (playerWon) {
			disableBoard();
			String ^winner = "null";
			if (turn) {
				winner = "O";
				oWins++;
				labOWins->Text = Convert::ToString(oWins);
			}
			else {
				winner = "X";
				xWins++;
				labXWins->Text = Convert::ToString(xWins);
			}
			labLastWinner->Text = winner;
			MessageBox::Show("Player that used " + winner + " wins!");
		}
		else {
			if (turnCount == 9) {
				disableBoard();
				MessageBox::Show("It's a draw!");
				labLastWinner->Text = "Draw!";
				draws++;
				labDraws->Text = Convert::ToString(draws);
			}
		}
	}

	/*disableBoard() method - check if the control is a button, cast it as a button (create reference) if it is,
	then for each button on the form disable the button; leave the New Game and Exit buttons enabled*/
	private: System::Void disableBoard() {
		for each (Control ^c in Controls) {
			if (c->GetType() == Button::typeid) {
				Button ^b = safe_cast<Button^>(c);
				b->Enabled = false;
				btnExit->Enabled = true;
				btnNewGame->Enabled = true;
			}
		}
	}

	private: System::Void btnNewGame_Click(System::Object^  sender, System::EventArgs^  e) {
		turn = true;
		turnCount = 0;
		labTurnCount->Text = Convert::ToString(turnCount);
		playerWon = false;
		for each (Control ^c in Controls) {
			if (c->GetType() == Button::typeid) {
				Button ^b = safe_cast<Button^>(c);
				b->Enabled = true;
				btnExit->Text = "Exit";
				btnNewGame->Text = "New Game";
				b->Text = "";
			}
		}
	}
	private: System::Void btnEnter_ttt(System::Object^  sender, System::EventArgs^  e) {
		Button ^btnHover = safe_cast<Button^>(sender);
		if (btnHover->Enabled) {
			if (turn) {
				btnHover->Text = "X";
			}
			else {
				btnHover->Text = "O";
			}
		}
	}
	private: System::Void btnLeave_ttt(System::Object^  sender, System::EventArgs^  e) {
		Button ^btnHover = safe_cast<Button^>(sender);
		if (btnHover->Enabled) {
			btnHover->Text = "";
		}
	}
};
}
