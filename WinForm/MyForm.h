#pragma once
#include "Functions.h"


namespace WinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  n_Text;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  m_Text;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Nmax_Text;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Epsilon_Text;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->n_Text = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->m_Text = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Nmax_Text = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Epsilon_Text = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(409, 67);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(586, 559);
			this->dataGridView1->TabIndex = 0;			
			// 
			// Column1
			// 
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 50;
			// 
			// Column4
			// 
			this->Column4->Frozen = true;
			this->Column4->HeaderText = L"i";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 50;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(457, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(538, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(203, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 72);
			this->button1->TabIndex = 2;
			this->button1->Text = L"СТАРТ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// n_Text
			// 
			this->n_Text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n_Text->Location = System::Drawing::Point(48, 20);
			this->n_Text->Name = L"n_Text";
			this->n_Text->Size = System::Drawing::Size(100, 29);
			this->n_Text->TabIndex = 4;
			this->n_Text->Text = L"100";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(10, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"n=";
			// 
			// m_Text
			// 
			this->m_Text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->m_Text->Location = System::Drawing::Point(48, 55);
			this->m_Text->Name = L"m_Text";
			this->m_Text->Size = System::Drawing::Size(100, 29);
			this->m_Text->TabIndex = 6;
			this->m_Text->Text = L"100";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(5, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"m=";
			// 
			// Nmax_Text
			// 
			this->Nmax_Text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Nmax_Text->Location = System::Drawing::Point(79, 100);
			this->Nmax_Text->Name = L"Nmax_Text";
			this->Nmax_Text->Size = System::Drawing::Size(100, 29);
			this->Nmax_Text->TabIndex = 8;
			this->Nmax_Text->Text = L"500";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(2, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Nmax=";
			// 
			// Epsilon_Text
			// 
			this->Epsilon_Text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Epsilon_Text->Location = System::Drawing::Point(79, 135);
			this->Epsilon_Text->Name = L"Epsilon_Text";
			this->Epsilon_Text->Size = System::Drawing::Size(100, 29);
			this->Epsilon_Text->TabIndex = 10;
			this->Epsilon_Text->Text = L"0,0001";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(41, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 24);
			this->label4->TabIndex = 9;
			this->label4->Text = L"ε=";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(6, 229);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(397, 397);
			this->textBox3->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(264, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 24);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Таблица:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(241, 127);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(77, 28);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"V(x,y)";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(241, 161);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(77, 28);
			this->radioButton2->TabIndex = 14;
			this->radioButton2->Text = L"U(x,y)";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(241, 195);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(140, 28);
			this->radioButton3->TabIndex = 15;
			this->radioButton3->Text = L"|U(x,y)-V(x,y)|";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column2,
					this->Column5
			});
			this->dataGridView2->Location = System::Drawing::Point(409, 67);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(586, 559);
			this->dataGridView2->TabIndex = 16;
			this->dataGridView2->Visible = false;
			// 
			// Column2
			// 
			this->Column2->Frozen = true;
			this->Column2->HeaderText = L"";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 50;
			// 
			// Column5
			// 
			this->Column5->Frozen = true;
			this->Column5->HeaderText = L"i";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 50;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column3,
					this->Column6
			});
			this->dataGridView3->Location = System::Drawing::Point(409, 67);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(586, 559);
			this->dataGridView3->TabIndex = 17;
			this->dataGridView3->Visible = false;
			// 
			// Column3
			// 
			this->Column3->Frozen = true;
			this->Column3->HeaderText = L"";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 50;
			// 
			// Column6
			// 
			this->Column6->Frozen = true;
			this->Column6->HeaderText = L"i";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 50;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(996, 627);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->Epsilon_Text);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Nmax_Text);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->m_Text);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->n_Text);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion	
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		dataGridView1->Visible = false;
		dataGridView2->Visible = true;
		dataGridView3->Visible = false;
	}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	dataGridView1->Visible = true;
	dataGridView2->Visible = false;
	dataGridView3->Visible = false;
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	dataGridView1->Visible = false;
	dataGridView2->Visible = false;
	dataGridView3->Visible = true;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	const int n = Convert::ToInt32(n_Text->Text); //Число узлов по x
	const int m = Convert::ToInt32(m_Text->Text); //Число узлов по y
	int Nmax = Convert::ToInt32(Nmax_Text->Text); //Максимальное число итераций
	double Epsilon = Convert::ToDouble(Epsilon_Text->Text); //Точность
	double h = 1.0 / n, k = 1.0 / m; //Шаги по x и y
	double h2 = 1.0 / (h*h), k2 = 1.0 / (k*k); 
	double A = -2 * (h2 + k2);
	double **v, **f, **u;
	double *x, *y;
	double v_old, v_new;
	double Eps_max = 0.0;
	int p = 0; //Текущее число итераций
	bool flag = false; //Флаг проверки выполнения условия
	char buffer[100];
	double MaxPogr = 0.0;
	string ref = "";

	x = new double[n + 1];
	y = new double[m + 1];
	v = new double*[n + 1];
	f = new double*[n + 1];
	u = new double*[n + 1];

	for (int i = 0; i <= n; i++)
	{
		v[i] = new double[m + 1];
		f[i] = new double[m + 1];
		u[i] = new double[m + 1];
	}

	for (int i = 0; i <= n; i++)  //Заполнение массива x
	{
		x[i] = i*h;
	}

	for (int j = 0; j <= m; j++)  //Заполнение массива y
	{
		y[j] = j*k;
	}

	for (int j = 0; j <= m; j++)            //Заполнение массивов f и u
	{
		for (int i = 0; i <= n; i++)
		{
			f[i][j] = f1(x[i], y[j]);
			u[i][j] = u1(x[i], y[j]);
		}
	}

	for (int j = 0; j <= m; j++)  //Заполнение граничных условий в массив v
	{
		v[0][j] = u1(0, y[j]);
		v[n][j] = u1(1, y[j]);
	}

	for (int i = 0; i <= n; i++)  //Заполнение граничных условий в массив v
	{
		v[i][0] = u1(x[i], 0);
		v[i][m] = u1(x[i], 1);
	}

	for (int j = 1; j < m; j++)    //Нулевое начальное приближение
	{
		for (int i = 1; i < n; i++)
		{
			v[i][j] = 0.0;
		}
	}		

	while (flag == false)       //Метод Зейделя
	{
		Eps_max = 0.0;
		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				v_old = v[i][j];
				v_new = (-1 / A)*(h2*(v[i - 1][j] + v[i + 1][j]) + k2*(v[i][j - 1] + v[i][j + 1]) + f[i][j]);
				if (abs(v_old - v_new) > Eps_max)
				{
					Eps_max = abs(v_old - v_new);
				}
				v[i][j] = v_new;
			}
		}
		p++;
		if ((Eps_max < Epsilon) || (p >= Nmax))
		{
			flag = true;
		}
	}

	dataGridView1->Rows->Clear();               //Очистка таблиц от предыдущих значений
	dataGridView1->Columns->Clear();
	dataGridView2->Rows->Clear();
	dataGridView2->Columns->Clear();
	dataGridView3->Rows->Clear();
	dataGridView3->Columns->Clear();

	dataGridView1->Columns->Add("C1", "");
	dataGridView1->Columns[0]->Width = 50;
	dataGridView1->Columns[0]->Frozen = true;
	dataGridView1->Columns->Add("C2", "i");
	dataGridView1->Columns[1]->Width = 50;
	dataGridView1->Columns[1]->Frozen = true;
	dataGridView2->Columns->Add("C1", "");
	dataGridView2->Columns[0]->Width = 50;
	dataGridView2->Columns[0]->Frozen = true;
	dataGridView2->Columns->Add("C2", "i");
	dataGridView2->Columns[1]->Width = 50;
	dataGridView2->Columns[1]->Frozen = true;
	dataGridView3->Columns->Add("C1", "");
	dataGridView3->Columns[0]->Width = 50;
	dataGridView3->Columns[0]->Frozen = true;
	dataGridView3->Columns->Add("C2", "i");
	dataGridView3->Columns[1]->Width = 50;
	dataGridView3->Columns[1]->Frozen = true;

	for (int i = 0; i <= n; i++)                        //Создание столбцов для таблиц
	{
		sprintf_s(buffer, "%d", i);	
		dataGridView1->Columns->Add(gcnew String(buffer), gcnew String(buffer));		
		dataGridView2->Columns->Add(gcnew String(buffer), gcnew String(buffer));
		dataGridView3->Columns->Add(gcnew String(buffer), gcnew String(buffer));
	}

	dataGridView1->Rows->Add("j", "Y\\X");                //Создание второй строки
	dataGridView2->Rows->Add("j", "Y\\X");
	dataGridView3->Rows->Add("j", "Y\\X");
	dataGridView1->Rows[0]->Frozen = true;
	dataGridView2->Rows[0]->Frozen = true;
	dataGridView3->Rows[0]->Frozen = true;

	for (int i = 0; i <= n; i++)               //Заполнение второй строки
	{
		dataGridView1->Rows[0]->Cells[i + 2]->Value = x[i];
		dataGridView2->Rows[0]->Cells[i + 2]->Value = x[i];
		dataGridView3->Rows[0]->Cells[i + 2]->Value = x[i];
	}
	
	for (int j = 0; j <= m; j++)          //Заполнение первых двух столбцов
	{
		dataGridView1->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView3->Rows->Add();
		for (int i = 0; i <= 1; i++)
		{
			dataGridView1->Rows[j + 1]->Cells[0]->Value = j;
			dataGridView1->Rows[j + 1]->Cells[1]->Value = y[j];
			dataGridView2->Rows[j + 1]->Cells[0]->Value = j;
			dataGridView2->Rows[j + 1]->Cells[1]->Value = y[j];
			dataGridView3->Rows[j + 1]->Cells[0]->Value = j;
			dataGridView3->Rows[j + 1]->Cells[1]->Value = y[j];
			
		}
	}

	for (int j = 0; j <= m; j++)              //Заполнение таблиц значениями
	{
		for (int i = 0; i <= n; i++)
		{
			dataGridView1->Rows[j + 1]->Cells[i + 2]->Value = v[i][j];
			dataGridView2->Rows[j + 1]->Cells[i + 2]->Value = u[i][j];
			dataGridView3->Rows[j + 1]->Cells[i + 2]->Value = abs(u[i][j]-v[i][j]);

			if (abs(u[i][j] - v[i][j]) > MaxPogr)
			{
				MaxPogr = abs(u[i][j] - v[i][j]);
			}
		}
	}

	ref += "Справка\r\n";                               //Вывод справки
	ref += "Использовался метод Зейделя с параметрами Nmax=";
	sprintf_s(buffer, "%d", Nmax);
	ref += buffer;
	ref += ", E=";
	sprintf_s(buffer, "%.6e", Epsilon);
	ref += buffer;
	ref += "\r\n";
	ref += "Сетка по x: n=";
	sprintf_s(buffer, "%d", n);
	ref += buffer;
	ref += ", по y: m=";
	sprintf_s(buffer, "%d", m);
	ref += buffer;
	ref += "\r\n";
	ref += "Пройдено итераций p=";
	sprintf_s(buffer, "%d", p);
	ref += buffer;
	ref += "\r\n";
	ref += "Достигнутая точность Eps=";
	sprintf_s(buffer, "%.6e", Eps_max);
	ref += buffer;
	ref += "\r\n";
	ref += "Максимальная глобальная погрешность |U-V|=";
	sprintf_s(buffer, "%.6e", MaxPogr);
	ref += buffer;
	ref += "\r\n";
	ref += "Используется нулевое начальное приближение";

	textBox3->Text = gcnew String(ref.c_str());

	for (int i = 0; i <= n; i++)
	{
		delete[] v[i];
		delete[] f[i];
		delete[] u[i];
	}
	delete[] x;
	delete[] y;
}
};
}
