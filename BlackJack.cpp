#include "BlackJack.h"

namespace GoldenLuck {

    void BlackJack::startGame() {
        dealInitialCards();
        displayHands(false); // Show only one of the dealer's cards initially
        playerTurn();
        dealerTurn();
        determineWinner();
    }

    void BlackJack::dealInitialCards() {
        for (int i = 0; i < 2; ++i) {
            playerHand->Add(deck->dealCard());
            dealerHand->Add(deck->dealCard());
        }
    }

    void BlackJack::playerTurn() {
        // Burada oyuncunun hamleleri yap�labilir (�rne�in: hit or stand)
    }

    void BlackJack::dealerTurn() {
        // Burada da��t�c�n�n hamleleri yap�labilir (�rne�in: belirli kurallara g�re hit or stand)
    }

    void BlackJack::displayHands(bool showAll) {
        // Oyuncu ve da��t�c� elini g�ster
        // showAll parametresini kullanarak da��t�c�n�n kartlar�n�n gizli olup olmad���n� belirleyin
    }

    void BlackJack::determineWinner() {
        // Ellere dayanarak kazanan� belirle
        // playerHand ve dealerHand'i kar��la�t�rarak kazanan� se�in
    }

    // ... Di�er etkinlik i�levleri ve implementasyonlar
}
