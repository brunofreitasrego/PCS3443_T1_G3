#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm11
	/// </summary>
	public ref class MyForm11 : public System::Windows::Forms::Form
	{
	public:
		MyForm11(void)
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
		~MyForm11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dateColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ExitIDColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  openOSColumn;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  OSIDColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  adressColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  estimatedhoursColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  estimatedMaterialColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  updateStateColumn;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;




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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dateColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ExitIDColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->openOSColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->OSIDColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->adressColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->estimatedhoursColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->estimatedMaterialColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->updateStateColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(249, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(329, 32);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"As Saídas da Equipe";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dateColumn,
					this->ExitIDColumn, this->openOSColumn
			});
			this->dataGridView1->Location = System::Drawing::Point(15, 91);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(275, 455);
			this->dataGridView1->TabIndex = 1;
			// 
			// dateColumn
			// 
			this->dateColumn->HeaderText = L"Data";
			this->dateColumn->Name = L"dateColumn";
			this->dateColumn->Width = 40;
			// 
			// ExitIDColumn
			// 
			this->ExitIDColumn->HeaderText = L"N° da Saída";
			this->ExitIDColumn->Name = L"ExitIDColumn";
			this->ExitIDColumn->Width = 90;
			// 
			// openOSColumn
			// 
			this->openOSColumn->HeaderText = L"";
			this->openOSColumn->Name = L"openOSColumn";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->OSIDColumn,
					this->adressColumn, this->estimatedhoursColumn, this->estimatedMaterialColumn, this->updateStateColumn
			});
			this->dataGridView2->Location = System::Drawing::Point(329, 160);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(521, 386);
			this->dataGridView2->TabIndex = 2;
			// 
			// OSIDColumn
			// 
			this->OSIDColumn->HeaderText = L"N° do OS";
			this->OSIDColumn->Name = L"OSIDColumn";
			this->OSIDColumn->Width = 77;
			// 
			// adressColumn
			// 
			this->adressColumn->HeaderText = L"Localização";
			this->adressColumn->Name = L"adressColumn";
			// 
			// estimatedhoursColumn
			// 
			this->estimatedhoursColumn->HeaderText = L"Número de horas estimadas";
			this->estimatedhoursColumn->Name = L"estimatedhoursColumn";
			// 
			// estimatedMaterialColumn
			// 
			this->estimatedMaterialColumn->HeaderText = L"quantidade de material estimada";
			this->estimatedMaterialColumn->Name = L"estimatedMaterialColumn";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(440, 107);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(320, 29);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Os OS da Saída selectionada";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// updateStateColumn
			// 
			this->updateStateColumn->HeaderText = L"Finalizar o OS";
			this->updateStateColumn->Name = L"updateStateColumn";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(714, 585);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 37);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Voltar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyForm11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(862, 652);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm11";
			this->Text = L"MyForm11";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
