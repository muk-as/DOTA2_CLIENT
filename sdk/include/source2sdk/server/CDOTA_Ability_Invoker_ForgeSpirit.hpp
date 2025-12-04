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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Invoker_ForgeSpirit : public source2sdk::server::CDOTA_Ability_Invoker_InvokedBase
        {
        public:
            float spirit_damage; // 0x_            
            std::int32_t spirit_mana; // 0x_            
            std::int32_t spirit_armor; // 0x_            
            float spirit_attack_range; // 0x_            
            std::int32_t spirit_hp; // 0x_            
            std::int32_t spirit_level; // 0x_            
            float spirit_duration; // 0x_            
            float armor_per_attack; // 0x_            
            // m_vecSpirits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecSpirits;
            char m_vecSpirits[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Invoker_ForgeSpirit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Invoker_ForgeSpirit) == 0x_);
    };
};
