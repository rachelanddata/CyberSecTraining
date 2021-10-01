// Add all the includes for the required header files

// Start the main() function with both the parameters
{
	// Initialize the srand() to start the random generator
	// Initialize the player-1 and player-2 points to 0
	// Initialize all other required variables
	// Ask the user for the number of rounds to run the game
	// Call printPlayerPoints() function to print the initial player points which will be 0
	
	// Set up the loop to go through all the rounds one at a time
	{
		// Call the corresponding functions to get the information for this round - type, dice, points
		// Print round number
		// Print current player
	    // Call printRoundInfo() to print the round information
		
		// MAIN GAME LOGIC
		// Write code here to get the main game logic using branches
		// Success: Player-1 (odd player) is the current player and the dice rolled is odd 
		// OR Player-2 (even player) is the current player and the dice rolled is even.
			// Current player gains the points, based on the type of the round (see above). The current player’s turn continues in the next round.
		// Failure: Player-1 (odd player) is the current player and the dice rolled is even 
		// OR Player-2 (even player) is the current player and the dice rolled is odd.
			// Current player incurs penalty of the same number of points, based on the type of the round (see above). In the next round, the current player is changed to the other player.
		// Call printPlayerPoints() to print the player information at the end of the round
	}
	printf("\nGAME OVER!!\n");
	// Compare the final points for player-1 and player-2
	// Print the winner as the one with higher points
	// Return from the main() function to end the program successfully
}