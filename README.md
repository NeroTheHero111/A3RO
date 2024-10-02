[![A3-RO-Header.png](https://i.postimg.cc/Z5QVdCSH/A3-RO-Header.png)](https://postimg.cc/TKrV82h5)

Arma 3 Realism Overhaul, 'A3RO' for short, aims to achieve realism in aspects not covered by other modifications as well as improving on existing ones, all the while maintaining the highest possible level of backwards compatibility, featuring native [ACE3](https://github.com/acemod/ACE3) and [ACEAX](https://github.com/jetelain/AceArsenalExtended) Support.  
A3RO Uses [CBA_A3](https://github.com/CBATeam/CBA_A3) for Compatibility.

You can find A3RO available on the Steam Workshop here (Link Follows)

# Core Features
### Complete Overhaul of every single Primary, Sidearm and Launcher
An absurd amount of research went into making sure that Weapons now have the correct Name, Weight, Firemodes, Rate of Fire, Accuracy, Range, Impact, Muzzle Velocity, Zeroing Range and most importantly, Calibre. These changes are applied from the Ammo Config Level throughout the Magazines and finally on the Weapons themselves. Some weapons are unfortunately guesswork as the information is classified or unavailable (to me). Rest assured I did my best to find reasonable values. Firemodes are reflected in the Weapon Texture.

### Complete Overhaul of every single Attachment
The same amount of focus was directed at making sure every single Optic in the game now has the correct Name, Weight, Magnification and/or Zoom-Levels, with new Zeroing Increments added based on Magnification. Zeroing is standardised to 100m by default. Other Rail attachments were also given attention in a similar manner.

### New Weapons and Calibres
Civilian Variants (i.e Semi-Auto) and/or Variants in a different Calibre are added where they exist. From High-Powered Rifles like the ‘Bad News’ in .300 WM or the GM6 in .50 BMG, you now also have Rifles like the MR223 or TR3, perfect for equipping Civilian Oriented Factions.

### New Attachments
Throughout my research, I discovered tons of hidden content thanks to the invaluable information present on the Arma 3 Wiki. I also found some interesting assets on my own. You now have access to the silly DCL120, a fully working SIMCOM Adapter, Flash suppressors and more. (Check the MP5K-PDW ;) )

### Magazine Tracer Overhaul
A few hundred Magazines in new and existing Calibres (I stopped counting) have been added and assigned to their respective Weapons. Now, instead of only some weapons possessing Magazines without Tracers, every single weapon can fire Tracerless, Tracer or IR-DIM Ammo. Depending on Magazine size the Options Full Tracer, Tracer Every 4 or Reload Tracer are available. This was more of a Big Brush Operation. Please let me know if a particular constellation of Calibre and Tracer should or should not exist.

### Weapon Attachment Slot Overhaul
In line with the adjustment of Weapon Calibres, many buggy Slots have been removed, while hidden Slots have been enabled where they make sense, with the additional Audio Configuration set up where required. For example, the M200 Intervention or the Negev NG7 can now mount Suppressors.

### Attachment UI Overhaul
Each Weapon has their Weapon Attachment Positions and Scale adjusted in the Inventory to where the Attachment actually is on the Weapon as opposed to being either slightly off, too big or just hovering above it (This took way too long).

### Inventory Description Overhaul
The Descriptions (and Short Description of Tracer Magazines) have been Revised and added to Weapons, Magazines or Optics that lacked them for consistency. The Optic Descriptions are especially useful as they give information about compatible Calibres.

### Maximum Compatibility
All Changes are made in a way to affect the entire game. I went so far as to edit certain Mission Configs to ensure there would be no clashes between the old and revised weapons. Where Game Limitations prevent a full replacement, a new class was created and the old one hidden to prevent potential Errors when loading older scenarios. This ensures that any modded Faction that I cannot take into account should still work if it uses affected Content (We’re talking of about 4 Assets total)

...and countless other small fixes I forgot to mention.

# Dependencies
### Hard Dependencies
A3RO is dependent on [CBA_A3](https://steamcommunity.com/workshop/filedetails/?id=450814997) to allow maximum Magazine Compatibility between it and other Mods.

### Soft Dependency System
All core content can be played with only CBA_A3 loaded alongside.  

Loading [ACE3](https://steamcommunity.com/workshop/filedetails/?id=463939057) will add all patches to related content from ACE such as ACE Magazines, Weapon Stats and Calibers, while in turn adding said ACE Settings to my own Calibres and new Weapons. Additional Attachment variants are enabled or replaced by my own.  

Loading [ACE3 Arsenal Extended](https://steamcommunity.com/workshop/filedetails/?id=2522638637) will sort all new content accordingly. I also made some changes to Vanilla Items while I was at it.

# Planned Updates
A lot of features I want to implement had to be cut from release due to time constraints. I will continue development at a slower pace.

### Update 1.1 (Q4 2024)
Creator DLC Compatibility
With A3RO loaded, CDLC such as WS or RF will already benefit from some of its changes. Full Support with all of my QOL adjustments applied will follow and are my #1 Priority.

Magazines / Grenades / Crates Rework
The weight of newly added Magazines is currently adjusted to Vanilla Values. A full revision of Magazines, Belts, Throwables and Items is planned, mainly addressing weights, taking into account Ammo and Magazine type. All Changes will be reflected in Arsenal, Crates, Missions and Vehicle Inventories. Right now only necessary changes were made. There will also be a distinction between UGL Ammo between the factions.

Bug Fixes
I am sure I missed a few things in my delirious state making this over the past 2.5 months. Please report any bugs in the Bug Reports Discussion Post or in the Comments.

### Update 1.2 (Q1 2025)
Subsonic Ammo types
Tracer Rework (Timing, Scale, Replacing Unit Magazines)
Weapon Handling Rework (Dexterity and Inertia of all Weapons and Attachments)
Implementing further hidden Vanilla Content I found
Launcher Penetration and Damage Check
Review of Calibres I left mostly untouched
Code Cleanup

### Future Plans
A complete Overhaul of Vehicle Weapons. ACE already did an excellent job but I’m certain my nitpicky self will find many values to adjust and tinker with
RHS and CUP (Big Maybe) Support. Probably as a separate mod.

# Credits
While this is a one-man project, I still would like to credit those whose resources I have used to turn this mod into a reality:

The CBA_A3 Team - Whose Shared Classes allow my Magazine and Attachment Changes to work throughout the Armaverse.  
The ACE3 Team - For their vast and useful Documentation that made it possible for me to create my own Calibres and so much more.    
All Contributors to the Arma Wiki - Without whom I would've missed countless useful game trivia that assisted my artistic direction.  
Drebin052 - For uploading an Icon for the Osprey 45 to the Wiki that I am unable to find myself.

[![20241002042741-1.jpg](https://i.postimg.cc/yY4JkKtR/20241002042741-1.jpg)](https://postimg.cc/mhjZ5vbZ)
