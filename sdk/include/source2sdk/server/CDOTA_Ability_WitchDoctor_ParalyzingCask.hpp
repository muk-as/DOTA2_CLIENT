#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_WitchDoctor_ParalyzingCask : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_iBounces; // 0x5c0            
            std::int32_t bounces; // 0x5c4            
            std::int32_t bounce_bonus_damage; // 0x5c8            
            uint8_t _pad05cc[0x4]; // 0x5cc
            // m_vecHitHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitHeroes;
            char m_vecHitHeroes[0x18]; // 0x5d0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_WitchDoctor_ParalyzingCask because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_WitchDoctor_ParalyzingCask) == 0x5e8);
    };
};
