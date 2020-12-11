#pragma once

namespace ProjectTracker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;





	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(313, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"View";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(851, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Create a Project";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(856, 446);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 38);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Insert";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(856, 67);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(238, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(856, 124);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(238, 22);
			this->textBox3->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(856, 404);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(238, 22);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(856, 282);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(238, 89);
			this->textBox6->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(297, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 25);
			this->label1->TabIndex = 14;
			this->label1->Text = L"View a Project";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(766, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 17);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Project Id:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(740, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 17);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Project Name:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(724, 172);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 17);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Capstone Name:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(734, 282);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 17);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Project Details:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(747, 404);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 17);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Project Date:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(32, 172);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(686, 319);
			this->dataGridView1->TabIndex = 20;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(101, 127);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 39);
			this->button3->TabIndex = 21;
			this->button3->Text = L"View All";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(32, 63);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(303, 21);
			this->radioButton1->TabIndex = 22;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Database and Web Programming Capstone";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(341, 63);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(212, 21);
			this->radioButton2->TabIndex = 23;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Office Professional Capstone";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(559, 63);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(144, 21);
			this->radioButton3->TabIndex = 24;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Network Capstone";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(856, 172);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(303, 21);
			this->radioButton4->TabIndex = 25;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Database and Web Programming Capstone";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(856, 210);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(212, 21);
			this->radioButton5->TabIndex = 26;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Office Professional Capstone";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(856, 246);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(144, 21);
			this->radioButton6->TabIndex = 27;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Network Capstone";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(998, 446);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 38);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Clear";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(516, 127);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(119, 39);
			this->button5->TabIndex = 29;
			this->button5->Text = L"View Students";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1201, 524);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Project Tracking";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//View Selected class button functions
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
					 try {
				 //Database connection information
				 String^ connectionInfo = "datasource=localhost;port=3306;username=root;password=admin;database=capstone";
				 MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);

				 if (radioButton1->Checked == true)
				 {
				 //Database query and table creation for database capstone
				 MySqlDataAdapter^ da = gcnew MySqlDataAdapter("SELECT * FROM projects WHERE capstone_name = 'Database and Web Programming Capstone'", conn);
				 DataTable^ dt = gcnew DataTable();
				 da->Fill(dt);
				 bindingSource1->DataSource = dt;
				 dataGridView1->DataSource = bindingSource1;
				 }

				 else if (radioButton2->Checked == true)
				 {
					  //Database query and table creation for office capstone
				 MySqlDataAdapter^ da = gcnew MySqlDataAdapter("SELECT * FROM projects WHERE capstone_name = 'Office Professional Capstone'", conn);
				 DataTable^ dt = gcnew DataTable();
				 da->Fill(dt);
				 bindingSource1->DataSource = dt;
				 dataGridView1->DataSource = bindingSource1;
				 }

				  else if (radioButton3->Checked == true)
				 {
					  //Database query and table creation for network capstone
				 MySqlDataAdapter^ da = gcnew MySqlDataAdapter("SELECT * FROM projects WHERE capstone_name = 'Network Capstone'", conn);
				 DataTable^ dt = gcnew DataTable();
				 da->Fill(dt);
				 bindingSource1->DataSource = dt;
				 dataGridView1->DataSource = bindingSource1;
				 }

				  else
				 {
					 MessageBox::Show("No options selected.\nPlease select a capstone option or select 'View All' to view all the projects.");
				 }
			 }
			 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
			}
			 }

		 //Insert Button Functions
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Database connection information
				 String^ connectionInfo = "datasource=localhost;port=3306;username=root;password=admin;database=capstone";
				 MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
				 MySqlDataReader^ dataReader;

				 try{
					 //Get all information from textboxes and create variables
					 int projectId = Int32::Parse(textBox2->Text);
					 String^ projectName = textBox3->Text;
					 String^ projectDetails = textBox6->Text;
					 String^ projectDate = textBox5->Text;
					 
					 //Get radio button selection and create project
					 if (radioButton4->Checked == true)
					 {
						 String^ capstoneName = "Database and Web Programming Capstone";
						 MySqlCommand^ cmd = gcnew MySqlCommand("insert into projects values("+projectId+", '"+projectName+"', '"+projectDetails+"', '"+capstoneName+"', '"+projectDate+"')", conn);
						 conn->Open();
					 dataReader = cmd->ExecuteReader();
					 MessageBox::Show("New project created");
					 }

					 else if (radioButton5->Checked == true)
					 {
						 String^ capstoneName = "Office Professional Capstone";
						 MySqlCommand^ cmd = gcnew MySqlCommand("insert into projects values("+projectId+", '"+projectName+"', '"+projectDetails+"', '"+capstoneName+"', '"+projectDate+"')", conn);
						 conn->Open();
					 dataReader = cmd->ExecuteReader();
					 MessageBox::Show("New project created");
					 }

					 else if (radioButton6->Checked == true)
					 {
						 String^ capstoneName = "Network Capstone";
						 MySqlCommand^ cmd = gcnew MySqlCommand("insert into projects values("+projectId+", '"+projectName+"', '"+projectDetails+"', '"+capstoneName+"', '"+projectDate+"')", conn);
						 conn->Open();
					 dataReader = cmd->ExecuteReader();
					 MessageBox::Show("New project created");
					 }

					 //Close database connection
					 conn->Close();
				 }

				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }
		 }

private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 //View A Project
			 //No Functions
		 }

		 //View All Button Functions
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 try {
				 //Connect to the database
				 String^ connectionInfo = "datasource=localhost;port=3306;username=root;password=admin;database=capstone";
				 MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);

				 //Database query and table creation
				 MySqlDataAdapter^ da = gcnew MySqlDataAdapter("SELECT * FROM projects", conn);
				 DataTable^ dt = gcnew DataTable();
				 da->Fill(dt);
				 bindingSource1->DataSource = dt;
				 dataGridView1->DataSource = bindingSource1;
			 }
			 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
			}
		 }

		 //Clear Button Functions
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text = "";
			 textBox3->Text = "";
			 textBox6->Text = "";
			 textBox5->Text = "";
		 }

		 //View Students Button Functions
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			  try {
				 //Connect to the database
				 String^ connectionInfo = "datasource=localhost;port=3306;username=root;password=admin;database=capstone";
				 MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);

				 //Database query and table creation
				 MySqlDataAdapter^ da = gcnew MySqlDataAdapter("SELECT * FROM students", conn);
				 DataTable^ dt = gcnew DataTable();
				 da->Fill(dt);
				 bindingSource1->DataSource = dt;
				 dataGridView1->DataSource = bindingSource1;
			 }
			 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
			}
		 }
};
}