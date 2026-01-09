class CfgPatches
{
  class Template
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={ "DZ_Data", "DZ_Scripts" };
  };
};

class CfgMods
{
  class Template
  {
    dir="Template";
    hideName=0;
    hidePicture=0;
    extra=0;
    name="Template";
    picture="Template/data/picture.paa";
    logoSmall="Template/data/logoSmall.paa";
    logo="Template/data/logo.paa";
    logoOver="Template/data/logoOver.paa";
    action="https://steamcommunity.com/sharedfiles/filedetails/?id=SteamFileId";
    credits="SteamName";
    author="SteamName";
    authorID="SteamId";
    version="1.0";
    type="mod";
    dependencies[]={ "Game", "World", "Mission" };
    class defs
    {
      class imageSets
      {
        files[]={ "Template/gui/template.imageset" };
      };
      class engineScriptModule
      {
        value="";
        files[]={ "Template/scripts/1_core" };
      };
      class gameScriptModule
      {
        value="";
        files[]={"Template/scripts/3_game"};
      };
      class worldScriptModule
      {
        value="";
        files[]={"Template/scripts/4_world"};
      };
      class missionScriptModule
      {
        value="";
        files[]={"Template/scripts/5_mission"};
      };
    }
  };
};

class CfgSoundShaders
{
  class Template_SoundShaders
  {
    samples[] = { { "Template/dz/sounds/template", 1 } };
    range = 100;
    volume = 6;
  };
};

class CfgSoundSets
{
  class Template_SoundSet
  {
    soundShaders[] = { "Template_SoundShaders" };
  };
};
