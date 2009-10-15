/*
 * This file is automatically generated from source/art-data.txt via
 * util/art-data.pl.  Do not directly edit this file, but rather change
 * art-data.txt.
 */

#include "AppHdr.h"
#include "tiledef-unrand.h"

#include "artefact.h"
#include "tiledef-main.h"
#include "tiledef-player.h"

int unrandart_to_tile(int unrand)
{
    switch (unrand)
    {
    case UNRAND_SINGING_SWORD:     return TILE_UNRAND_SINGING_SWORD;
    case UNRAND_TROG:              return TILE_UNRAND_TROG;
    case UNRAND_VARIABILITY:       return TILE_UNRAND_VARIABILITY;
    case UNRAND_PRUNE:             return TILE_UNRAND_PRUNE;
    case UNRAND_POWER:             return TILE_UNRAND_POWER;
    case UNRAND_OLGREB:            return TILE_UNRAND_OLGREB;
    case UNRAND_WUCAD_MU:          return TILE_UNRAND_WUCAD_MU;
    case UNRAND_VAMPIRES_TOOTH:    return TILE_UNRAND_VAMPIRES_TOOTH;
    case UNRAND_CURSES:            return TILE_UNRAND_CURSES;
    case UNRAND_TORMENT:           return TILE_UNRAND_TORMENT;
    case UNRAND_ZONGULDROK:        return TILE_UNRAND_ZONGULDROK;
    case UNRAND_CEREBOV:           return TILE_UNRAND_CEREBOV;
    case UNRAND_DISPATER:          return TILE_UNRAND_DISPATER;
    case UNRAND_ASMODEUS:          return TILE_UNRAND_ASMODEUS;
    case UNRAND_BLOODBANE:         return TILE_UNRAND_BLOODBANE;
    case UNRAND_FLAMING_DEATH:     return TILE_UNRAND_FLAMING_DEATH;
    case UNRAND_BRILLIANCE:        return TILE_UNRAND_BRILLIANCE;
    case UNRAND_LEECH:             return TILE_UNRAND_LEECH;
    case UNRAND_CHILLY_DEATH:      return TILE_UNRAND_CHILLY_DEATH;
    case UNRAND_MORG:              return TILE_UNRAND_MORG;
    case UNRAND_FINISHER:          return TILE_UNRAND_FINISHER;
    case UNRAND_PUNK:              return TILE_UNRAND_PUNK;
    case UNRAND_KRISHNA:           return TILE_UNRAND_KRISHNA;
    case UNRAND_SKULLCRUSHER:      return TILE_UNRAND_SKULLCRUSHER;
    case UNRAND_GUARD:             return TILE_UNRAND_GUARD;
    case UNRAND_JIHAD:             return TILE_UNRAND_JIHAD;
    case UNRAND_HELLFIRE:          return TILE_UNRAND_HELLFIRE;
    case UNRAND_DOOM_KNIGHT:       return TILE_UNRAND_DOOM_KNIGHT;
    case UNRAND_EOS:               return TILE_UNRAND_EOS;
    case UNRAND_BOTONO:            return TILE_UNRAND_BOTONO;
    case UNRAND_OCTOPUS_KING:      return TILE_UNRAND_OCTOPUS_KING;
    case UNRAND_ARGA:              return TILE_UNRAND_ARGA;
    case UNRAND_ELEMENTAL_STAFF:   return TILE_UNRAND_ELEMENTAL_STAFF;
    case UNRAND_SNIPER:            return TILE_UNRAND_SNIPER;
    case UNRAND_PIERCER:           return TILE_UNRAND_PIERCER;
    case UNRAND_BLOWGUN_ASSASSIN:  return TILE_UNRAND_BLOWGUN_ASSASSIN;
    case UNRAND_WYRMBANE:          return TILE_UNRAND_WYRMBANE;
    case UNRAND_SPRIGGANS_KNIFE:   return TILE_UNRAND_SPRIGGANS_KNIFE;
    case UNRAND_PLUTONIUM_SWORD:   return TILE_UNRAND_PLUTONIUM_SWORD;
    case UNRAND_UNDEADHUNTER:      return TILE_UNRAND_UNDEADHUNTER;
    case UNRAND_SERPENT_SCOURGE:   return TILE_UNRAND_SERPENT_SCOURGE;
    case UNRAND_ACCURACY:          return TILE_UNRAND_ACCURACY;
    case UNRAND_CRYSTAL_SPEAR:     return TILE_UNRAND_CRYSTAL_SPEAR;
    case UNRAND_IGNORANCE:         return TILE_UNRAND_IGNORANCE;
    case UNRAND_AUGMENTATION:      return TILE_UNRAND_AUGMENTATION;
    case UNRAND_THIEF:             return TILE_UNRAND_THIEF;
    case UNRAND_BULLSEYE:          return TILE_UNRAND_BULLSEYE;
    case UNRAND_DYROVEPREVA:       return TILE_UNRAND_DYROVEPREVA;
    case UNRAND_BEAR_SPIRIT:       return TILE_UNRAND_BEAR_SPIRIT;
    case UNRAND_MISFORTUNE:        return TILE_UNRAND_MISFORTUNE;
    case UNRAND_FLASH:             return TILE_UNRAND_FLASH;
    case UNRAND_BOOTS_ASSASSIN:    return TILE_UNRAND_BOOTS_ASSASSIN;
    case UNRAND_LEAR:              return TILE_UNRAND_LEAR;
    case UNRAND_ZHOR:              return TILE_UNRAND_ZHOR;
    case UNRAND_SALAMANDER:        return TILE_UNRAND_SALAMANDER;
    case UNRAND_WAR:               return TILE_UNRAND_WAR;
    case UNRAND_RESISTANCE:        return TILE_UNRAND_RESISTANCE;
    case UNRAND_FOLLY:             return TILE_UNRAND_FOLLY;
    case UNRAND_MAXWELL:           return TILE_UNRAND_MAXWELL;
    case UNRAND_DRAGONMASK:        return TILE_UNRAND_DRAGONMASK;
    case UNRAND_NIGHT:             return TILE_UNRAND_NIGHT;
    case UNRAND_DRAGON_KING:       return TILE_UNRAND_DRAGON_KING;
    case UNRAND_ALCHEMIST:         return TILE_UNRAND_ALCHEMIST;
    case UNRAND_FENCERS_GLOVES:    return TILE_UNRAND_FENCERS_GLOVES;
    case UNRAND_STARLIGHT:         return TILE_UNRAND_STARLIGHT;
    case UNRAND_RATSKIN_CLOAK:     return TILE_UNRAND_RATSKIN_CLOAK;
    case UNRAND_AIR:               return TILE_UNRAND_AIR;
    case UNRAND_SHADOWS:           return TILE_UNRAND_SHADOWS;
    case UNRAND_CEKUGOB:           return TILE_UNRAND_CEKUGOB;
    case UNRAND_FOUR_WINDS:        return TILE_UNRAND_FOUR_WINDS;
    case UNRAND_BLOODLUST:         return TILE_UNRAND_BLOODLUST;
    case UNRAND_SHAOLIN:           return TILE_UNRAND_SHAOLIN;
    case UNRAND_ROBUSTNESS:        return TILE_UNRAND_ROBUSTNESS;
    case UNRAND_MAGE:              return TILE_UNRAND_MAGE;
    case UNRAND_SHIELDING:         return TILE_UNRAND_SHIELDING;
    default: return -1;
    }
}

int unrandart_to_doll_tile(int unrand)
{
    switch (unrand)
    {
    // ARM
    case UNRAND_WAR:               return TILEP_ARM_GLOVE_BLACK;
    case UNRAND_FENCERS_GLOVES:    return TILEP_ARM_GLOVE_WHITE;
    // BODY
    case UNRAND_AUGMENTATION:      return TILEP_BODY_ROBE_WHITE_BLUE;
    case UNRAND_MISFORTUNE:        return TILEP_BODY_ROBE_MISFORTUNE;
    case UNRAND_LEAR:              return TILEP_BODY_LEARS_CHAIN_MAIL;
    case UNRAND_ZHOR:              return TILEP_BODY_ZHOR;
    case UNRAND_SALAMANDER:        return TILEP_BODY_LEATHER_RED;
    case UNRAND_FOLLY:             return TILEP_BODY_ROBE_RED2;
    case UNRAND_MAXWELL:           return TILEP_BODY_MAXWELL;
    case UNRAND_NIGHT:             return TILEP_BODY_ROBE_OF_NIGHT;
    case UNRAND_DRAGON_KING:       return TILEP_BODY_DRAGONARM_GOLD;
    // BOOTS
    case UNRAND_BOOTS_ASSASSIN:    return TILEP_BOOTS_MIDDLE_GRAY;
    // CLOAK
    case UNRAND_THIEF:             return TILEP_CLOAK_BLACK;
    case UNRAND_FLASH:             return TILEP_CLOAK_RED;
    case UNRAND_STARLIGHT:         return TILEP_CLOAK_WHITE;
    case UNRAND_RATSKIN_CLOAK:     return TILEP_CLOAK_RATSKIN_CLOAK;
    // HAND1
    case UNRAND_SINGING_SWORD:     return TILEP_HAND1_SINGING_SWORD;
    case UNRAND_TROG:              return TILEP_HAND1_AXE_TROG;
    case UNRAND_VARIABILITY:       return TILEP_HAND1_MACE_OF_VARIABILITY;
    case UNRAND_PRUNE:             return TILEP_HAND1_GLAIVE_OF_PRUNE;
    case UNRAND_POWER:             return TILEP_HAND1_SWORD_OF_POWER;
    case UNRAND_OLGREB:            return TILEP_HAND1_OLGREB;
    case UNRAND_WUCAD_MU:          return TILEP_HAND1_WUCAD_MU;
    case UNRAND_VAMPIRES_TOOTH:    return TILEP_HAND1_VAMPIRES_TOOTH;
    case UNRAND_CURSES:            return TILEP_HAND1_FINISHER;
    case UNRAND_TORMENT:           return TILEP_HAND1_MACE_RUBY;
    case UNRAND_ZONGULDROK:        return TILEP_HAND1_ZONGULDROK;
    case UNRAND_CEREBOV:           return TILEP_HAND1_SWORD_TWIST;
    case UNRAND_DISPATER:          return TILEP_HAND1_DISPATER;
    case UNRAND_ASMODEUS:          return TILEP_HAND1_ASMODEUS;
    case UNRAND_BLOODBANE:         return TILEP_HAND1_BLOODBANE;
    case UNRAND_FLAMING_DEATH:     return TILEP_HAND1_FLAMING_DEATH;
    case UNRAND_BRILLIANCE:        return TILEP_HAND1_MACE_OF_BRILLIANCE;
    case UNRAND_LEECH:             return TILEP_HAND1_LEECH;
    case UNRAND_CHILLY_DEATH:      return TILEP_HAND1_CHILLY_DEATH;
    case UNRAND_MORG:              return TILEP_HAND1_MORG;
    case UNRAND_FINISHER:          return TILEP_HAND1_FINISHER;
    case UNRAND_PUNK:              return TILEP_HAND1_PUNK;
    case UNRAND_KRISHNA:           return TILEP_HAND1_KRISHNA;
    case UNRAND_SKULLCRUSHER:      return TILEP_HAND1_GIANT_CLUB_SLANT;
    case UNRAND_GUARD:             return TILEP_HAND1_GLAIVE_OF_THE_GUARD;
    case UNRAND_JIHAD:             return TILEP_HAND1_JIHAD;
    case UNRAND_HELLFIRE:          return TILEP_HAND1_FIERY_DEVIL;
    case UNRAND_DOOM_KNIGHT:       return TILEP_HAND1_DOOM_KNIGHT;
    case UNRAND_EOS:               return TILEP_HAND1_EOS;
    case UNRAND_BOTONO:            return TILEP_HAND1_BOTONO;
    case UNRAND_OCTOPUS_KING:      return TILEP_HAND1_TRIDENT_OCTOPUS_KING;
    case UNRAND_ARGA:              return TILEP_HAND1_ARGA;
    case UNRAND_ELEMENTAL_STAFF:   return TILEP_HAND1_ELEMENTAL_STAFF;
    case UNRAND_SNIPER:            return TILEP_HAND1_SNIPER;
    case UNRAND_PIERCER:           return TILEP_HAND1_GREAT_BOW;
    case UNRAND_BLOWGUN_ASSASSIN:  return TILEP_HAND1_BLOWGUN;
    case UNRAND_WYRMBANE:          return TILEP_HAND1_WYRMBANE;
    case UNRAND_SPRIGGANS_KNIFE:   return TILEP_HAND1_SPRIGGANS_KNIFE;
    case UNRAND_PLUTONIUM_SWORD:   return TILEP_HAND1_PLUTONIUM_SWORD;
    case UNRAND_UNDEADHUNTER:      return TILEP_HAND1_UNDEADHUNTER;
    case UNRAND_SERPENT_SCOURGE:   return TILEP_HAND1_SERPENT_SCOURGE;
    case UNRAND_ACCURACY:          return TILEP_HAND1_KNIFE_OF_ACCURACY;
    case UNRAND_CRYSTAL_SPEAR:     return TILEP_HAND1_CRYSTAL_SPEAR;
    // HAND2
    case UNRAND_IGNORANCE:         return TILEP_HAND2_SHIELD_OF_IGNORANCE;
    case UNRAND_BULLSEYE:          return TILEP_HAND2_BULLSEYE;
    case UNRAND_RESISTANCE:        return TILEP_HAND2_SHIELD_OF_RESISTANCE;
    // HELM
    case UNRAND_DYROVEPREVA:       return TILEP_HELM_DYROVEPREVA;
    case UNRAND_BEAR_SPIRIT:       return TILEP_HELM_BEAR;
    case UNRAND_DRAGONMASK:        return TILEP_HELM_ART_DRAGONHELM;
    case UNRAND_ALCHEMIST:         return TILEP_HELM_TURBAN_PURPLE;
    default: return -1;
    }
}

