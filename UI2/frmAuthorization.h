#pragma once

namespace UI2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class frmAuthorization : public System::Windows::Forms::Form
	{
		#pragma region Kernel
		public:		frmAuthorization(void) { InitializeComponent(); }
		protected: ~frmAuthorization()	   { if (components) delete components; }

	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblHead;
	private: System::Windows::Forms::PictureBox^ ptrChewack;
	private: System::Windows::Forms::PictureBox^ ptrCheewackBig;
	private: System::Windows::Forms::Button^ btnBack;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: CLUI::cluiTextBox^ cluiTextBox2;
	private: System::Windows::Forms::Label^ lblEmail;

	private: CLUI::cluiTextBox^ cluiTextBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ llblLogin;
	private: System::Windows::Forms::Label^ label1;
	private: CLUI::cluiTextBox^ cluiTextBox4;








	protected:
	private:	System::ComponentModel::Container^ components;
		#pragma region Kernel

		#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmAuthorization::typeid));
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblHead = (gcnew System::Windows::Forms::Label());
			this->ptrChewack = (gcnew System::Windows::Forms::PictureBox());
			this->ptrCheewackBig = (gcnew System::Windows::Forms::PictureBox());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->cluiTextBox2 = (gcnew CLUI::cluiTextBox());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->cluiTextBox3 = (gcnew CLUI::cluiTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->llblLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cluiTextBox4 = (gcnew CLUI::cluiTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrChewack))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrCheewackBig))->BeginInit();
			this->SuspendLayout();
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblName->Location = System::Drawing::Point(30, 370);
			this->lblName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(40, 16);
			this->lblName->TabIndex = 1;
			this->lblName->Text = L"Name";
			// 
			// lblHead
			// 
			this->lblHead->AutoSize = true;
			this->lblHead->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHead->Location = System::Drawing::Point(143, 56);
			this->lblHead->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblHead->Name = L"lblHead";
			this->lblHead->Size = System::Drawing::Size(76, 23);
			this->lblHead->TabIndex = 2;
			this->lblHead->Text = L"Sign Up";
			// 
			// ptrChewack
			// 
			this->ptrChewack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ptrChewack.Image")));
			this->ptrChewack->Location = System::Drawing::Point(21, 158);
			this->ptrChewack->Name = L"ptrChewack";
			this->ptrChewack->Size = System::Drawing::Size(100, 100);
			this->ptrChewack->TabIndex = 3;
			this->ptrChewack->TabStop = false;
			// 
			// ptrCheewackBig
			// 
			this->ptrCheewackBig->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ptrCheewackBig->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ptrCheewackBig.Image")));
			this->ptrCheewackBig->Location = System::Drawing::Point(212, 98);
			this->ptrCheewackBig->Name = L"ptrCheewackBig";
			this->ptrCheewackBig->Size = System::Drawing::Size(165, 285);
			this->ptrCheewackBig->TabIndex = 4;
			this->ptrCheewackBig->TabStop = false;
			// 
			// btnBack
			// 
			this->btnBack->FlatAppearance->BorderSize = 0;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack.Image")));
			this->btnBack->Location = System::Drawing::Point(19, 61);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(10, 18);
			this->btnBack->TabIndex = 1;
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &frmAuthorization::btnBack_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(0, 643);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(377, 82);
			this->textBox1->TabIndex = 6;
			// 
			// cluiTextBox2
			// 
			this->cluiTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->cluiTextBox2->BorderRadius = 10;
			this->cluiTextBox2->ColorEnterBack = System::Drawing::Color::Tomato;
			this->cluiTextBox2->ColorEnterBord = System::Drawing::Color::White;
			this->cluiTextBox2->ColorEnterText = System::Drawing::Color::White;
			this->cluiTextBox2->ColorLeaveBack = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->cluiTextBox2->ColorLeaveBord = System::Drawing::Color::Gray;
			this->cluiTextBox2->ColorLeaveText = System::Drawing::Color::White;
			this->cluiTextBox2->ColorWrongBack = System::Drawing::Color::LightCoral;
			this->cluiTextBox2->ColorWrongBord = System::Drawing::Color::Red;
			this->cluiTextBox2->ColorWrongText = System::Drawing::Color::Black;
			this->cluiTextBox2->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cluiTextBox2->ForeColor = System::Drawing::Color::White;
			this->cluiTextBox2->Location = System::Drawing::Point(33, 402);
			this->cluiTextBox2->Name = L"cluiTextBox2";
			this->cluiTextBox2->PasswordBox = false;
			this->cluiTextBox2->PasswordChar = '*';
			this->cluiTextBox2->PlaceHolder = L"Vishal Soni";
			this->cluiTextBox2->ShowPassword = false;
			this->cluiTextBox2->Size = System::Drawing::Size(320, 36);
			this->cluiTextBox2->TabIndex = 8;
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblEmail->Location = System::Drawing::Point(30, 464);
			this->lblEmail->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(36, 16);
			this->lblEmail->TabIndex = 7;
			this->lblEmail->Text = L"Email";
			// 
			// cluiTextBox3
			// 
			this->cluiTextBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->cluiTextBox3->BorderRadius = 10;
			this->cluiTextBox3->ColorEnterBack = System::Drawing::Color::Tomato;
			this->cluiTextBox3->ColorEnterBord = System::Drawing::Color::White;
			this->cluiTextBox3->ColorEnterText = System::Drawing::Color::White;
			this->cluiTextBox3->ColorLeaveBack = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->cluiTextBox3->ColorLeaveBord = System::Drawing::Color::Gray;
			this->cluiTextBox3->ColorLeaveText = System::Drawing::Color::White;
			this->cluiTextBox3->ColorWrongBack = System::Drawing::Color::LightCoral;
			this->cluiTextBox3->ColorWrongBord = System::Drawing::Color::Red;
			this->cluiTextBox3->ColorWrongText = System::Drawing::Color::Black;
			this->cluiTextBox3->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cluiTextBox3->ForeColor = System::Drawing::Color::White;
			this->cluiTextBox3->Location = System::Drawing::Point(33, 495);
			this->cluiTextBox3->Name = L"cluiTextBox3";
			this->cluiTextBox3->PasswordBox = false;
			this->cluiTextBox3->PasswordChar = '*';
			this->cluiTextBox3->PlaceHolder = L"Enter your Email ID";
			this->cluiTextBox3->ShowPassword = false;
			this->cluiTextBox3->Size = System::Drawing::Size(320, 36);
			this->cluiTextBox3->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(73, 741);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 19);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Already have an account\?";
			// 
			// llblLogin
			// 
			this->llblLogin->AutoSize = true;
			this->llblLogin->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llblLogin->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->llblLogin->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->llblLogin->Location = System::Drawing::Point(249, 741);
			this->llblLogin->Name = L"llblLogin";
			this->llblLogin->Size = System::Drawing::Size(48, 19);
			this->llblLogin->TabIndex = 12;
			this->llblLogin->TabStop = true;
			this->llblLogin->Text = L"Login";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(30, 559);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 16);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Password";
			// 
			// cluiTextBox4
			// 
			this->cluiTextBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->cluiTextBox4->BorderRadius = 10;
			this->cluiTextBox4->ColorEnterBack = System::Drawing::Color::Tomato;
			this->cluiTextBox4->ColorEnterBord = System::Drawing::Color::White;
			this->cluiTextBox4->ColorEnterText = System::Drawing::Color::White;
			this->cluiTextBox4->ColorLeaveBack = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->cluiTextBox4->ColorLeaveBord = System::Drawing::Color::Gray;
			this->cluiTextBox4->ColorLeaveText = System::Drawing::Color::White;
			this->cluiTextBox4->ColorWrongBack = System::Drawing::Color::LightCoral;
			this->cluiTextBox4->ColorWrongBord = System::Drawing::Color::Red;
			this->cluiTextBox4->ColorWrongText = System::Drawing::Color::Black;
			this->cluiTextBox4->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cluiTextBox4->ForeColor = System::Drawing::Color::White;
			this->cluiTextBox4->Location = System::Drawing::Point(33, 587);
			this->cluiTextBox4->Name = L"cluiTextBox4";
			this->cluiTextBox4->PasswordBox = true;
			this->cluiTextBox4->PasswordChar = '*';
			this->cluiTextBox4->PlaceHolder = L"Enter yout password";
			this->cluiTextBox4->ShowPassword = false;
			this->cluiTextBox4->Size = System::Drawing::Size(320, 36);
			this->cluiTextBox4->TabIndex = 15;
			// 
			// frmAuthorization
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->ClientSize = System::Drawing::Size(376, 812);
			this->Controls->Add(this->cluiTextBox4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->llblLogin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cluiTextBox3);
			this->Controls->Add(this->cluiTextBox2);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->ptrCheewackBig);
			this->Controls->Add(this->ptrChewack);
			this->Controls->Add(this->lblHead);
			this->Controls->Add(this->lblName);
			this->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmAuthorization";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmAuthorization";
			this->Load += gcnew System::EventHandler(this, &frmAuthorization::frmAuthorization_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmAuthorization::frmAuthorization_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrChewack))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrCheewackBig))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion

		#pragma region Voids

	private: 
		System::Void frmAuthorization_Load(System::Object^ sender, System::EventArgs^ e) {
			//
		}
		System::Void frmAuthorization_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
			path->FillMode = System::Drawing::Drawing2D::FillMode::Alternate;
			int r = 30; int w = this->Width; int h = this->Height;
			
			path->StartFigure();
			path->AddArc(0,   0,   r, r, 180, 90);  path->AddArc(w - r, 0,   r, r, 270, 90);
			path->AddArc(w-r, h-r, r, r,   0, 90);	path->AddArc(0,     h-r, r, r,  90, 90);
			path->CloseFigure();

			this->Region = gcnew Drawing::Region(path);
		}

		System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
			Close();
		}

		#pragma endregion

	
	

	};
}
