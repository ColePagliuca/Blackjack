## Hello! This is a small project I am working on to get used to Git, Github, and practice my C coding.

In this project I am coding the game Blackjack (often called 21) which is a classic casino card game. 
The primary objective is simple: beat the dealer's hand by getting a point total as close to 21 as possible without going over.

##Rules and Actionss
* **Card Values:** Number cards (2–10) are worth their face value. All face cards (Jack, Queen, King) are worth 10 points. Aces are uniquely flexible and can be counted as either 1 point or 11 points, whichever benefits the hand more.
* **The Deal:** The round begins with both the player and the dealer receiving two cards. The player's cards are visible, but the dealer keeps one card hidden (the "hole card") until the player finishes their turn.
* **Player Actions:** On your turn, you must decide how to play your hand:
  * **Hit:** Request another card to increase your total.
  * **Stand:** Keep your current hand and end your turn.
* **Busting:** If you choose to hit and your total exceeds 21, you "bust" and immediately lose the round, regardless of what the dealer has.
* **The Dealer's Turn:** Once you stand, the dealer reveals their hidden card. Unlike the player, the dealer has no free will; they must follow strict casino rules, typically forced to keep hitting until their total reaches at least 17.
* **Winning the Round:** You win if your final total is higher than the dealer's without exceeding 21, or if the dealer busts. If you and the dealer end up with the exact same total, the round is a "push" (a tie), and no one wins.
