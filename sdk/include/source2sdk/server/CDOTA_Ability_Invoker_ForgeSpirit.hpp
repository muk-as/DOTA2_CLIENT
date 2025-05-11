#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Ability_Invoker_InvokedBase.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x600
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Invoker_ForgeSpirit : public source2sdk::server::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            float spirit_damage; // 0x5c8            
            std::int32_t spirit_mana; // 0x5cc            
            std::int32_t spirit_armor; // 0x5d0            
            float spirit_attack_range; // 0x5d4            
            std::int32_t spirit_hp; // 0x5d8            
            std::int32_t spirit_level; // 0x5dc            
            float spirit_duration; // 0x5e0            
            float armor_per_attack; // 0x5e4            
            // m_vecSpirits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecSpirits;
            char m_vecSpirits[0x18]; // 0x5e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_ForgeSpirit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_ForgeSpirit) == 0x600);
    };
};
