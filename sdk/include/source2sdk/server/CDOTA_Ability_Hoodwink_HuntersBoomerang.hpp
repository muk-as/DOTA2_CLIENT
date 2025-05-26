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
        // Size: 0x608
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Hoodwink_HuntersBoomerang : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t radius; // 0x5c0            
            std::int32_t speed; // 0x5c4            
            std::int32_t damage; // 0x5c8            
            float mark_duration; // 0x5cc            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x5d0            
            uint8_t _pad05d4[0x4]; // 0x5d4
            // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEntities;
            char m_vecHitEntities[0x18]; // 0x5d8            
            uint8_t _pad05f0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Hoodwink_HuntersBoomerang because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Hoodwink_HuntersBoomerang) == 0x608);
    };
};
