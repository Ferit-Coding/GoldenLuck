#pragma once
#include "Deck.h"
#include "Hand.h"
#include <vector>
#include <iostream>

namespace GoldenLuck {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BlackJack
	/// </summary>
	public ref class BlackJack : public System::Windows::Forms::Form
	{
	public:
		BlackJack(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Hand^ userHand;
		Hand^ dealerHand;
		Deck^ deck;
	private: System::Windows::Forms::Button^ btnHit;
	private: System::Windows::Forms::Button^ btnStay;
	private: System::Windows::Forms::Panel^ pnlGame;
	private: System::Windows::Forms::Button^ btnStart;








	public:

	public:

	public:


		int bet;
		void initializeGame();
		void dealHiddenCard(Hand^ hand);
		void dealCard(Hand^ hand);
		int reduceDealerAce();
		int reduceUserAce();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BlackJack()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnHit = (gcnew System::Windows::Forms::Button());
			this->btnStay = (gcnew System::Windows::Forms::Button());
			this->pnlGame = (gcnew System::Windows::Forms::Panel());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnHit
			// 
			this->btnHit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->btnHit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnHit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHit->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->btnHit->FlatAppearance->BorderSize = 0;
			this->btnHit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnHit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHit->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnHit->Location = System::Drawing::Point(278, 548);
			this->btnHit->Name = L"btnHit";
			this->btnHit->Size = System::Drawing::Size(110, 70);
			this->btnHit->TabIndex = 0;
			this->btnHit->Text = L"Hit";
			this->btnHit->UseVisualStyleBackColor = false;
			// 
			// btnStay
			// 
			this->btnStay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->btnStay->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnStay->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnStay->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->btnStay->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnStay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStay->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnStay->Location = System::Drawing::Point(546, 548);
			this->btnStay->Name = L"btnStay";
			this->btnStay->Size = System::Drawing::Size(110, 70);
			this->btnStay->TabIndex = 1;
			this->btnStay->Text = L"Stay";
			this->btnStay->UseVisualStyleBackColor = false;
			// 
			// pnlGame
			// 
			this->pnlGame->Location = System::Drawing::Point(12, 12);
			this->pnlGame->Name = L"pnlGame";
			this->pnlGame->Size = System::Drawing::Size(920, 530);
			this->pnlGame->TabIndex = 2;
			// 
			// btnStart
			// 
			this->btnStart->BackColor = System::Drawing::Color::Teal;
			this->btnStart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnStart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnStart->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->btnStart->FlatAppearance->BorderSize = 0;
			this->btnStart->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnStart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStart->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnStart->Location = System::Drawing::Point(27, 548);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(110, 70);
			this->btnStart->TabIndex = 3;
			this->btnStart->Text = L"Start";
			this->btnStart->UseVisualStyleBackColor = false;
			this->btnStart->Click += gcnew System::EventHandler(this, &BlackJack::btnStart_Click);
			// 
			// BlackJack
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(203)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->ClientSize = System::Drawing::Size(944, 681);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->pnlGame);
			this->Controls->Add(this->btnStay);
			this->Controls->Add(this->btnHit);
			this->Name = L"BlackJack";
			this->Text = L"BlackJack";
			this->Load += gcnew System::EventHandler(this, &BlackJack::BlackJack_Load);
			this->ResumeLayout(false);

		}
		void loadDealerCardImages()
		{
			if (dealerHand->getHiddenCard() == nullptr) {
				array<PictureBox^>^ cardPictureBoxes1 = gcnew array<PictureBox^>(dealerHand->getHand()->Count);

				// PictureBox kontrollerine resim atanmas�
				for (int i = 0; i < dealerHand->getHand()->Count; i++)
				{
					cardPictureBoxes1[i] = gcnew PictureBox();
					cardPictureBoxes1[i]->SizeMode = PictureBoxSizeMode::Zoom; // Resmi PictureBox boyutuna s��acak �ekilde ayarlar
					cardPictureBoxes1[i]->Location = Point(i * 110, 10); // PictureBox'lar�n konumu
					cardPictureBoxes1[i]->Size = System::Drawing::Size(110, 154); // PictureBox'lar�n boyutu
					cardPictureBoxes1[i]->Image = Image::FromFile("cards\\" + dealerHand->getHand()[i]->getRank() + "-" + dealerHand->getHand()[i]->getSuit() + ".png"); // Resmi PictureBox'a atar
					pnlGame->Controls->Add(cardPictureBoxes1[i]); // PictureBox'lar� pnlGame panele ekler
				}
			}
			else {
				PictureBox^ cardPictureBox1 = gcnew PictureBox();
				cardPictureBox1->SizeMode = PictureBoxSizeMode::Zoom; // Resmi PictureBox boyutuna s��acak �ekilde ayarlar
				cardPictureBox1->Location = Point(0 * 110, 10); // PictureBox'lar�n konumu
				cardPictureBox1->Size = System::Drawing::Size(110, 154); // PictureBox'lar�n boyutu
				cardPictureBox1->Image = Image::FromFile("cards\\BACK.png"); // Resmi PictureBox'a atar
				pnlGame->Controls->Add(cardPictureBox1); // PictureBox'lar� pnlGame panele ekler

				// A��k kart
				PictureBox^ cardPictureBox2 = gcnew PictureBox();
				cardPictureBox2->SizeMode = PictureBoxSizeMode::Zoom; // Resmi PictureBox boyutuna s��acak �ekilde ayarlar
				cardPictureBox2->Location = Point(1 * 110, 10); // PictureBox'lar�n konumu
				cardPictureBox2->Size = System::Drawing::Size(110, 154); // PictureBox'lar�n boyutu
				cardPictureBox2->Image = Image::FromFile("cards\\" + dealerHand->getHand()[0]->getRank() + "-" + dealerHand->getHand()[0]->getSuit() + ".png"); // Resmi PictureBox'a atar
				pnlGame->Controls->Add(cardPictureBox2); // PictureBox'lar� pnlGame panele ekler
			}

		}
		void loadUserCardImages()
		{

			array<PictureBox^>^ cardPictureBoxes2 = gcnew array<PictureBox^>(userHand->getHand()->Count);

			// PictureBox kontrollerine resim atanmas�
			for (int i = 0; i < userHand->getHand()->Count; i++)
			{
				cardPictureBoxes2[i] = gcnew PictureBox();
				cardPictureBoxes2[i]->SizeMode = PictureBoxSizeMode::Zoom; // Resmi PictureBox boyutuna s��acak �ekilde ayarlar
				cardPictureBoxes2[i]->Location = Point(i * 110, 366); // PictureBox'lar�n konumu
				cardPictureBoxes2[i]->Size = System::Drawing::Size(110, 154); // PictureBox'lar�n boyutu
				cardPictureBoxes2[i]->Image = Image::FromFile("cards\\" + userHand->getHand()[i]->getRank() + "-" + userHand->getHand()[i]->getSuit() + ".png"); // Resmi PictureBox'a atar
				pnlGame->Controls->Add(cardPictureBoxes2[i]); // PictureBox'lar� pnlGame panele ekler

			}

		}


#pragma endregion
	private: System::Void BlackJack_Load(System::Object^ sender, System::EventArgs^ e) {

		

	}

	private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e) {
		initializeGame();
		loadDealerCardImages();
		loadUserCardImages();
	}
};
}
