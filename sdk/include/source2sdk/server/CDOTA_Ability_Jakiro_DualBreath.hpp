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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Jakiro_DualBreath : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // m_hHitHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitHeroes;
            char m_hHitHeroes[0x18]; // 0x5c0            
            bool m_bGrantedGem; // 0x5d8            
            uint8_t _pad05d9[0x17];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Jakiro_DualBreath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Jakiro_DualBreath) == 0x5f0);
    };
};
