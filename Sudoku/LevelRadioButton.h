#pragma once
#include <string>

enum GameLevel {Easy, Medium, Hard};

ref class LevelRadioButton : public System::Windows::Forms::RadioButton
{
public :GameLevel level;
	   public:	static GameLevel commonLevel;
public: static void SetCommonLevel(GameLevel);
	  static System::String^ GetCommonLevel()
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
	  }
};