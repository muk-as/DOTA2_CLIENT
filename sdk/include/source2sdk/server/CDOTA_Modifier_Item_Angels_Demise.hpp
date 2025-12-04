#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTABaseAbility;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Angels_Demise : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_health; // 0x_            
            std::int32_t bonus_mana; // 0x_            
            float bonus_mana_regen; // 0x_            
            float bonus_spell_damage; // 0x_            
            float slow_duration; // 0x_            
            std::int32_t bonus_all_stats; // 0x_            
            // vecActivatedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTABaseAbility*> vecActivatedAbilities;
            char vecActivatedAbilities[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Angels_Demise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Angels_Demise) == 0x_);
    };
};
