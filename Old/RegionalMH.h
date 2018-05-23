#pragma once

#include "RegionalMF.h"
#include "RegionalMR.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegionalMH
	/// </summary>
	public ref class RegionalMH : public System::Windows::Forms::Form
	{
	public:
		RegionalMH(void)
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
		~RegionalMH()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  Reparos;
	private: System::Windows::Forms::Label^  Finan�as;
	private: System::Windows::Forms::Label^  Previs�o;
	private: System::Windows::Forms::Label^  Gastos;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Label^  gastop;
	private: System::Windows::Forms::Label^  gastoA;






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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Reparos = (gcnew System::Windows::Forms::Label());
			this->Finan�as = (gcnew System::Windows::Forms::Label());
			this->Previs�o = (gcnew System::Windows::Forms::Label());
			this->Gastos = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->gastop = (gcnew System::Windows::Forms::Label());
			this->gastoA = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Location = System::Drawing::Point(3, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Home";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 89);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Finan�as";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegionalMH::MFClick);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(3, 139);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Reparos";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &RegionalMH::MRClick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(3, 483);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 21);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Logout";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(147, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(5, 500);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// Reparos
			// 
			this->Reparos->AutoSize = true;
			this->Reparos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reparos->Location = System::Drawing::Point(210, 46);
			this->Reparos->Name = L"Reparos";
			this->Reparos->Size = System::Drawing::Size(54, 15);
			this->Reparos->TabIndex = 5;
			this->Reparos->Text = L"Reparos";
			// 
			// Finan�as
			// 
			this->Finan�as->AutoSize = true;
			this->Finan�as->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Finan�as->Location = System::Drawing::Point(210, 218);
			this->Finan�as->Name = L"Finan�as";
			this->Finan�as->Size = System::Drawing::Size(57, 15);
			this->Finan�as->TabIndex = 6;
			this->Finan�as->Text = L"Finan�as";
			// 
			// Previs�o
			// 
			this->Previs�o->AutoSize = true;
			this->Previs�o->Location = System::Drawing::Point(228, 249);
			this->Previs�o->Name = L"Previs�o";
			this->Previs�o->Size = System::Drawing::Size(154, 13);
			this->Previs�o->TabIndex = 7;
			this->Previs�o->Text = L"Previs�o de gastos (m�s atual):";
			// 
			// Gastos
			// 
			this->Gastos->AutoSize = true;
			this->Gastos->Location = System::Drawing::Point(228, 275);
			this->Gastos->Name = L"Gastos";
			this->Gastos->Size = System::Drawing::Size(111, 13);
			this->Gastos->TabIndex = 8;
			this->Gastos->Text = L"Gasto at� o momento:";
			// 
			// listView1
			// 
			this->listView1->Location = System::Drawing::Point(213, 72);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(359, 132);
			this->listView1->TabIndex = 9;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// gastop
			// 
			this->gastop->AutoSize = true;
			this->gastop->Location = System::Drawing::Point(388, 249);
			this->gastop->Name = L"gastop";
			this->gastop->Size = System::Drawing::Size(13, 13);
			this->gastop->TabIndex = 10;
			this->gastop->Text = L"0";
			// 
			// gastoA
			// 
			this->gastoA->AutoSize = true;
			this->gastoA->Location = System::Drawing::Point(343, 275);
			this->gastoA->Name = L"gastoA";
			this->gastoA->Size = System::Drawing::Size(13, 13);
			this->gastoA->TabIndex = 11;
			this->gastoA->Text = L"0";
			// 
			// RegionalMH
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(602, 505);
			this->Controls->Add(this->gastoA);
			this->Controls->Add(this->gastop);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->Gastos);
			this->Controls->Add(this->Previs�o);
			this->Controls->Add(this->Finan�as);
			this->Controls->Add(this->Reparos);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"RegionalMH";
			this->Text = L"RegionalMH";
			this->Load += gcnew System::EventHandler(this, &RegionalMH::RegionalMH_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MFClick(System::Object^  sender, System::EventArgs^  e)
	{
		RegionalMF^ window = gcnew RegionalMF();
		window->ShowDialog();
		this->Close();
	}
	private: System::Void MRClick(System::Object^  sender, System::EventArgs^  e)
	{
		RegionalMR^ window = gcnew RegionalMR();
		window->ShowDialog();
		this->Close();
	}
	private: System::Void RegionalMH_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}