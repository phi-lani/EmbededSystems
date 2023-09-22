#pragma once
#include <stdio.h>
#include <stdlib.h>  // For dynamic memory allocation
#include <string> 
#include <iostream>
#include <cstdlib>
#include <msclr/marshal_cppstd.h>

#include"MyForm1.h"

namespace EmbededSystems {
	int ID = 1000;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		String^ incomingData;
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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btnExit;

	private: System::Windows::Forms::Button^ btnConnect;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnHistory;



	private: System::Windows::Forms::GroupBox^ groupBox2;






	private: System::Windows::Forms::TextBox^ guiStatus;

	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::Timer^ readTimer;
	private: System::Windows::Forms::Button^ btnRead;
	private: System::Windows::Forms::TextBox^ txtDate;
	private: System::Windows::Forms::TextBox^ txtStatus;
	private: System::Windows::Forms::TextBox^ txtTemp;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;











	private: System::ComponentModel::IContainer^ components;









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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtDate = (gcnew System::Windows::Forms::TextBox());
			this->txtStatus = (gcnew System::Windows::Forms::TextBox());
			this->txtTemp = (gcnew System::Windows::Forms::TextBox());
			this->btnHistory = (gcnew System::Windows::Forms::Button());
			this->guiStatus = (gcnew System::Windows::Forms::TextBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->readTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnRead = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->btnExit);
			this->groupBox1->Controls->Add(this->btnConnect);
			this->groupBox1->Location = System::Drawing::Point(751, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 188);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"COM Port Configuration";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Baud Rate";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"COM Port";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(71, 48);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(71, 20);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(122, 21);
			this->comboBox1->TabIndex = 2;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Red;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(101, 144);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(92, 36);
			this->btnExit->TabIndex = 1;
			this->btnExit->Text = L"EXIT";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// btnConnect
			// 
			this->btnConnect->BackColor = System::Drawing::Color::Green;
			this->btnConnect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConnect->Location = System::Drawing::Point(5, 144);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(90, 36);
			this->btnConnect->TabIndex = 0;
			this->btnConnect->Text = L"CONNECT";
			this->btnConnect->UseVisualStyleBackColor = false;
			this->btnConnect->Click += gcnew System::EventHandler(this, &MyForm::btnConnect_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(374, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(371, 187);
			this->panel1->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Window;
			this->groupBox2->Controls->Add(this->txtDate);
			this->groupBox2->Controls->Add(this->txtStatus);
			this->groupBox2->Controls->Add(this->txtTemp);
			this->groupBox2->Location = System::Drawing::Point(3, 8);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(365, 176);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Incoming Data";
			// 
			// txtDate
			// 
			this->txtDate->Location = System::Drawing::Point(66, 113);
			this->txtDate->Multiline = true;
			this->txtDate->Name = L"txtDate";
			this->txtDate->ReadOnly = true;
			this->txtDate->Size = System::Drawing::Size(235, 41);
			this->txtDate->TabIndex = 3;
			this->txtDate->Text = L"Date";
			this->txtDate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(66, 66);
			this->txtStatus->Multiline = true;
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->ReadOnly = true;
			this->txtStatus->Size = System::Drawing::Size(235, 41);
			this->txtStatus->TabIndex = 2;
			this->txtStatus->Text = L"Status";
			this->txtStatus->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtTemp
			// 
			this->txtTemp->Location = System::Drawing::Point(66, 19);
			this->txtTemp->Multiline = true;
			this->txtTemp->Name = L"txtTemp";
			this->txtTemp->ReadOnly = true;
			this->txtTemp->Size = System::Drawing::Size(235, 41);
			this->txtTemp->TabIndex = 0;
			this->txtTemp->Text = L"Temperature";
			this->txtTemp->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			
			// 
			// btnHistory
			// 
			this->btnHistory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHistory->Location = System::Drawing::Point(374, 206);
			this->btnHistory->Name = L"btnHistory";
			this->btnHistory->Size = System::Drawing::Size(182, 34);
			this->btnHistory->TabIndex = 3;
			this->btnHistory->Text = L"View History";
			this->btnHistory->UseVisualStyleBackColor = true;
			this->btnHistory->Click += gcnew System::EventHandler(this, &MyForm::btnHistory_Click);
			// 
			// guiStatus
			// 
			this->guiStatus->BackColor = System::Drawing::Color::Red;
			this->guiStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guiStatus->Location = System::Drawing::Point(751, 212);
			this->guiStatus->Multiline = true;
			this->guiStatus->Name = L"guiStatus";
			this->guiStatus->Size = System::Drawing::Size(200, 20);
			this->guiStatus->TabIndex = 5;
			this->guiStatus->Text = L"DISCONNECTED";
			this->guiStatus->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM4";
			this->serialPort1->ReadTimeout = 23;
			this->serialPort1->WriteTimeout = 30;
			// 
			// readTimer
			// 
			this->readTimer->Interval = 500;
			this->readTimer->Tick += gcnew System::EventHandler(this, &MyForm::readTimer_Tick);
			// 
			// btnRead
			// 
			this->btnRead->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRead->Location = System::Drawing::Point(562, 206);
			this->btnRead->Name = L"btnRead";
			this->btnRead->Size = System::Drawing::Size(183, 34);
			this->btnRead->TabIndex = 6;
			this->btnRead->Text = L"Start Read";
			this->btnRead->UseVisualStyleBackColor = true;
			this->btnRead->Click += gcnew System::EventHandler(this, &MyForm::btnRead_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(356, 228);
			this->dataGridView1->TabIndex = 7;
			
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"temperature";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 70;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"time";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"date";
			this->Column4->Name = L"Column4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(963, 277);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnRead);
			this->Controls->Add(this->guiStatus);
			this->Controls->Add(this->btnHistory);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	array<Object^>^ arrayObj = SerialPort::GetPortNames();
	this->comboBox1->Items->AddRange(arrayObj);
	
	array<Object^>^ baudRate = { 9600, 57600,115200 };
	this->comboBox2->Items->AddRange(baudRate);
	

}
	private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e) {
		bool conError;
		if (this->comboBox1->SelectedIndex != -1 && this->comboBox2->SelectedIndex != -1 ) {
			try
			{
				if (!(this->serialPort1->IsOpen))
				{
			
				this->serialPort1->PortName = comboBox1->Text;
				this->serialPort1->BaudRate = Int32::Parse(comboBox2->Text);
				readTimer->Enabled = false;
				this->serialPort1->Open();
				guiStatus->Text = "CONNECTED";
				guiStatus->BackColor= System::Drawing::Color::Green;
				
				}
			}
			catch (UnauthorizedAccessException^) { conError = true; }
			catch (System::IO::IOException^) { conError = true; }
			catch (ArgumentException^) { conError = true; }
			if (conError) MessageBox::Show(this, "Could not open COM port. Port could be in use!");
		}
		else {
			MessageBox::Show("Please select all COM Port settings");
		}
	}


private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->serialPort1->Close();
	guiStatus->Text = "DISCONNECTED";
	guiStatus->BackColor = System::Drawing::Color::Red;
}
private: System::Void btnHistory_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm1^ obj1=gcnew MyForm1();
	obj1->ShowDialog();
}
private: System::Void btnRead_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!(serialPort1->IsOpen)) {
		serialPort1->Open();
	}

	readTimer->Enabled = true;
	serialPort1->DiscardInBuffer();
	serialPort1->DiscardOutBuffer();
	
}
private: System::Void readTimer_Tick(System::Object^ sender, System::EventArgs^ e) {



	if (this->serialPort1->IsOpen) {
		try
		{
			String^ DBconn = "Data Source=localhost\\sqlexpress;Initial Catalog=SmartDB;Integrated Security=True";
			SqlConnection sqlConn(DBconn);
			sqlConn.Open();
			int temp;

			//Find a way to convert the incoming into float and change the "Status Bar" accordingly.
			System::String^ incomingString = serialPort1->ReadExisting();
			
			//std::string nativeString = msclr::interop::marshal_as<std::string>(incomingString);
			

			if (temp <= 18) {
				txtStatus->Text="Heater On!";
				txtStatus->BackColor = System::Drawing::Color::Red;
			}
			else if (temp >= 32) {
				txtStatus->Text = "Fan On";
				txtStatus->BackColor = System::Drawing::Color::Orange;
			}
			else {
				txtStatus->Text = "Fan & Heater OFF";
				txtStatus->BackColor = System::Drawing::Color::Green;
			}

		
			//Constructing a query string and executing the query to insert values into the database.
			//String^ sqlQuery = "INSERT INTO TempReadings(temperature, time, date) VALUES (@temperature, @time, @date)";
			String^ sqlQuery = "DELETE FROM TempReadings";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@temperature",temp);
			command.Parameters->AddWithValue("@time", DateTime::Now);
			command.Parameters->AddWithValue("@date", DateTime::Now);
			command.ExecuteNonQuery();

			//Formatting the DateTime to a String^ in order to display it on the GUI.
			System::DateTime dateTime = DateTime::Now;
			System::String^ dateTimeString = dateTime.ToString();
			System::String^ dateOnly = dateTime.ToString("yyyy-MM-dd");
			System::String^ timeOnly = dateTime.ToString("HH:mm");
			System::String ^ temparature = incomingString->ToString();

			txtTemp->Text = temparature;
			txtDate->Text = dateTimeString;
		

			//Pushing the values into the GUI data grid view.
			dataGridView1->Rows->Add(ID++,temp,timeOnly,dateOnly);
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to connect to database", e->Message);
		}
	}

}



};
}
