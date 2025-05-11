#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        // Size: 0x608
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Ringmaster_Wheel : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vStartPos; // 0x5b8            
            std::int32_t min_range; // 0x5c4            
            float mesmerize_radius; // 0x5c8            
            float knockback_radius; // 0x5cc            
            source2sdk::server::CountdownTimer m_PathTimer; // 0x5d0            
            uint8_t _pad05e8[0x8]; // 0x5e8
            // m_hPushedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hPushedEntities;
            char m_hPushedEntities[0x18]; // 0x5f0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Ringmaster_Wheel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Ringmaster_Wheel) == 0x608);
    };
};
