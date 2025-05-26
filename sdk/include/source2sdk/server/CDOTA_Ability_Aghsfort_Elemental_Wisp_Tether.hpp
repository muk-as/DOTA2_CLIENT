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
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
        #pragma pack(push, 1)
        class CDOTA_Ability_Aghsfort_Elemental_Wisp_Tether : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05c0[0x10]; // 0x5c0
            // metadata: MNetworkEnable
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x5d0            
            Vector m_vProjectileLocation; // 0x5d4            
            bool m_bProjectileActive; // 0x5e0            
            uint8_t _pad05e1[0x3]; // 0x5e1
            std::int32_t latch_distance; // 0x5e4            
            std::int32_t m_iProjectileIndex; // 0x5e8            
            uint8_t _pad05ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Aghsfort_Elemental_Wisp_Tether because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Aghsfort_Elemental_Wisp_Tether) == 0x5f0);
    };
};
