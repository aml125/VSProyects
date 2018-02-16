#pragma once

void division_entera(int dividendo, int divisor, int *cociente, int *resto);


namespace Ejemplo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		public:
			Form1(void)
			{
				InitializeComponent();
				//
				//TODO: agregar código de constructor aquí
				//
			}

		protected:
			/// <summary>
			/// Limpiar los recursos que se estén usando.
			/// </summary>
			~Form1()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Label^  label1;
		private: System::Windows::Forms::Label^  label2;
		private: System::Windows::Forms::Label^  label3;
		private: System::Windows::Forms::Label^  label4;
		private: System::Windows::Forms::TextBox^  textBox1;
		private: System::Windows::Forms::TextBox^  textBox2;
		private: System::Windows::Forms::TextBox^  textBox3;
		private: System::Windows::Forms::TextBox^  textBox4;
		private: System::Windows::Forms::Label^  label5;
		private: System::Windows::Forms::Button^  button1;
		protected:

		private:
			/// <summary>
			/// Variable del diseñador necesaria.
			/// </summary>
			System::ComponentModel::Container ^components;

	#pragma region Windows Form Designer generated code
			/// <summary>
			/// Método necesario para admitir el Diseñador. No se puede modificar
			/// el contenido de este método con el editor de código.
			/// </summary>
			void InitializeComponent(void)
			{
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				this->textBox4 = (gcnew System::Windows::Forms::TextBox());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->SuspendLayout();
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Location = System::Drawing::Point(47, 61);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(55, 13);
				this->label1->TabIndex = 0;
				this->label1->Text = L"Dividendo";
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Location = System::Drawing::Point(47, 90);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(39, 13);
				this->label2->TabIndex = 1;
				this->label2->Text = L"Divisor";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Location = System::Drawing::Point(47, 167);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(49, 13);
				this->label3->TabIndex = 2;
				this->label3->Text = L"Cociente";
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Location = System::Drawing::Point(47, 204);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(35, 13);
				this->label4->TabIndex = 3;
				this->label4->Text = L"Resto";
				// 
				// textBox1
				// 
				this->textBox1->Location = System::Drawing::Point(118, 58);
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(100, 20);
				this->textBox1->TabIndex = 4;
				// 
				// textBox2
				// 
				this->textBox2->Location = System::Drawing::Point(118, 87);
				this->textBox2->Name = L"textBox2";
				this->textBox2->Size = System::Drawing::Size(100, 20);
				this->textBox2->TabIndex = 5;
				// 
				// textBox3
				// 
				this->textBox3->Location = System::Drawing::Point(118, 164);
				this->textBox3->Name = L"textBox3";
				this->textBox3->Size = System::Drawing::Size(100, 20);
				this->textBox3->TabIndex = 6;
				// 
				// textBox4
				// 
				this->textBox4->Location = System::Drawing::Point(118, 201);
				this->textBox4->Name = L"textBox4";
				this->textBox4->Size = System::Drawing::Size(100, 20);
				this->textBox4->TabIndex = 7;
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label5->Location = System::Drawing::Point(27, 9);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(233, 13);
				this->label5->TabIndex = 8;
				this->label5->Text = L"DIVISIÓN ENTERA DE DOS NÚMEROS";
				// 
				// button1
				// 
				this->button1->Location = System::Drawing::Point(118, 113);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(75, 23);
				this->button1->TabIndex = 9;
				this->button1->Text = L"Calcular";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
				// 
				// Form1
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(284, 261);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->label5);
				this->Controls->Add(this->textBox4);
				this->Controls->Add(this->textBox3);
				this->Controls->Add(this->textBox2);
				this->Controls->Add(this->textBox1);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label1);
				this->Name = L"Form1";
				this->Text = L"Form1";
				this->ResumeLayout(false);
				this->PerformLayout();

			}


	#pragma endregion
		private: System::Void button1_Click(System::Object^  sender,
			System::EventArgs^  e) {
			int a = 0;
			int b = 0;
			int c = 0;
			int r = 0;
			a = Convert::ToInt32(this->textBox1->Text);
			b = Convert::ToInt32(this->textBox2->Text);
			division_entera(a, b, &c, &r);
			this->textBox3->Text = Convert::ToString(c);
			this->textBox4->Text = Convert::ToString(r);
		}
	};
}

void division_entera(int dividendo, int divisor, int *cociente, int *resto)
{
	int lcociente = 0;
	int lresto = 0;
	__asm
	{
		mov ebx, dividendo; Almacena en EBX el dividendo
		mov ecx, divisor; Almacena en ECX el divisor
		mov edx, lcociente; Inicializa EDX a cero
		mov eax, ebx; Inicializa EAX con el dividendo
		bucle :
		cmp eax, ecx; Si resto < divisor, finaliza el bucle
			js fin
			inc edx; Incrementa el cociente
			sub eax, ecx; resto = restoanterior - divisor
			jmp bucle
			fin :
		mov lcociente, edx
			mov lresto, eax
	}
	*cociente = lcociente;
	*resto = lresto;
}