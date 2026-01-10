[h1]Template:[/h1]
- DayZ Mod Template

[u]Contains:[/u]
- A template.

[h2]INSTALLATION:[/h2]
[i]Install this mod like any other mod.[/i]
[b]* Make sure the .bikey has been copied into your server keys folder.[/b]
[list]
[*]Copy the included types folder in to your mission db folder.
[*]Open the included cfgeconomycore.xml file, copy the text where marked (shown below).
[*]Paste it at the end, but before the closing </economycore> tag, of your core economy file.
[/list]
[code]
  <!-- COPY BETWEEN HERE -->
  <!-- additional types -->
  <ce folder="db/types">
    <!-- Isle of The Dead -->
    <file name="Template.xml" type="types" />
    <!-- more additional type files... -->
  </ce>
  <!-- COPY BETWEEN HERE -->
</economycore>
[/code]

[b]NOTES:[/b]
- TemplateType is included in the types file for easier management.
- If you uncomment it, please comment out the one in your types.xml file.

[h2]GITHUB:[/h2]
[url=https://github.com/IsleOfTheDead/Template]https://github.com/IsleOfTheDead/Template[/url]

[h2]CONTACT:[/h2]
[url=https://discord.gg/isleofthedead][img]https://raw.githubusercontent.com/IsleOfTheDead/.github/main/images/discord.png[/img][/url]

[h2]LEGAL:[/h2]
[b]REPACKING IS ALLOWED.[/b]
Copyright ©2025-2026 Isle of The Dead. All Rights Reserved.
This item is not authorized for posting on Steam, except under the Steam account [url=https://steamcommunity.com/id/SteamId]SteamName[/url]
