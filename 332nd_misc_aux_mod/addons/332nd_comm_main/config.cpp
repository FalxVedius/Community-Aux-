class CfgPatches
{
	class Main_332ndCommAux
	{
		author = "Falx";
		requiredAddons[]=
		{
			"A3_Data_F_Enoch_Loadorder",
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};


class CAWorld;
class RscStandardDisplay;
class RscVignette;
class RscControlsGroupNoScrollbars;
class RscFrame;
class RscText;
class RscPicture;
class RscTitle;
class RscButtonMenu;
class RscHTML;
class RscControlsGroupNoHScrollbars;
class RscListBox;
class RscPictureKeepAspect;
class RscButton;
class RscButtonImages;
class RscShortcutButton;

class RscDisplayStart : RscStandardDisplay 
{
	class controls 
	{
		class LoadingPicture_332nd : RscPicture 
		{
			idc = 1000;

			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\332nd_comm_main\332nd_Banner.paa";
		};
	};
};

class RscDisplayConfigure 
{
	enableDisplay = 1;
};


class RscDisplayMain : RscStandardDisplay 
{
	idd = 0;
	idc = 1;
	enableDisplay = 1;

	text = "\332nd_comm_main\332nd_Banner.paa";

	class RscActiveText;

	class RscActivePicture : RscActiveText
	{
		style = 48;
		color[] = 
		{
				1, 1, 1, 0.5
		};
		colorActive[] = 
		{
				1, 1, 1, 1
		};
	};
	class Spotlight {};

	class controls {
		class Spotlight1 {};
		class Spotlight2 {};
		class Spotlight3 {};
		class BackgroundSpotlightRight {};
		class BackgroundSpotlightLeft {};
		class BackgroundSpotlight {};

		class B_Credits {};

		class ConnectServer : RscButton 
		{
			idc = -1;
			text = "Join the 332nd Legion Discord!";
			style = 2;
			url = "https://discord.gg/EYbu9QzfBN";
			colorBackground[] = { 0, 0, 0, 0.4 };
			colorBackgroundActive[] = { 1,0,0, 0,2 };
			soundEnter[] = { "\332nd_main\ui\Hover_Sound.ogg",0.3,1 };
			soundPush[] = { "\332nd_main\ui\Click_Sound.ogg",0.7,1 };
			borderSize = 0.054;
			colorBorder[] = { 0,0,0,0 };
			x = "SafeZoneXAbs + 0.425 * SafeZoneW";
			y = "1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "12 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";

		};
		class ConnectDiscord : RscButton 
		{
			idc = -1;
			text = "Join the 332nd Legion Discord!";
			style = 2;
			url = "https://discord.gg/EYbu9QzfBN";
			colorBackground[] = { 0, 0, 0, 0.4 };
			colorBackgroundActive[] = { 1,0,0, 0,2 };
			soundEnter[] = { "\332nd_main\ui\Hover_Sound.ogg",0.3,1 };
			soundPush[] = { "\332nd_main\ui\Click_Sound.ogg",0.7,1 };
			borderSize = 0.054;
			colorBorder[] = { 0,0,0,0 };
			x = "SafeZoneXAbs + 0.425 * SafeZoneW";
			y = "1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "12 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";

		};
		class ConnectVK : RscButton 
		{
			idc = -1;
			text = "Join the 332nd Legion Discord!";
			style = 2;
			url = "https://discord.gg/EYbu9QzfBN";
			colorBackground[] = { 0, 0, 0, 0.4 };
			colorBackgroundActive[] = { 1,0,0, 0,2 };
			soundEnter[] = { "\332nd_main\ui\Hover_Sound.ogg",0.3,1 };
			soundPush[] = { "\332nd_main\ui\Click_Sound.ogg",0.7,1 };
			borderSize = 0.054;
			colorBorder[] = { 0,0,0,0 };
			x = "SafeZoneXAbs + 0.425 * SafeZoneW";
			y = "1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "12 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";

		};

	};

	class controlsBackground 
	{
		class LoadingPicture_332nd : RscPicture
		{
			idc = 1;

			colorText[] = { 1,1,1,1 };

			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\332nd_comm_main\332nd_Banner.paa";
		};
	};
};