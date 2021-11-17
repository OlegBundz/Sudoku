#pragma once
#include <string>

enum GameLevel {Easy= 46, Medium = 51, Hard = 56};

ref class LevelRadioButton : public System::Windows::Forms::RadioButton
{
	public :GameLevel level;
	public:	static GameLevel commonLevel=Easy;
	public: static void SetCommonLevel(GameLevel);
	public: static GameLevel GetCommonLevel();
	 
	 /* static System::String^ GetCommonLevel()
	  {
		  switch (commonLevel)
		  {
		  case Easy: return "Easy";
			  break;
		  case Medium: return "Medium";
			  break;
		  case Hard: return "Hard";
			  break;
		  default:
			  break;
		  }
	  }*/
};