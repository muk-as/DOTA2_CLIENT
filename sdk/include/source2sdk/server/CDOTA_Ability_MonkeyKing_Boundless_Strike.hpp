#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
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
        class CDOTA_Ability_MonkeyKing_Boundless_Strike : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float strike_cast_range; // 0x5b8            
            float strike_radius; // 0x5bc            
            std::int32_t spring_channel_pct; // 0x5c0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5c4            
            bool m_bIsAltCastState; // 0x5c8            
            uint8_t _pad05c9[0x7]; // 0x5c9
            // struckEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_BaseNPC*> struckEntities;
            char struckEntities[0x18]; // 0x5d0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_MonkeyKing_Boundless_Strike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_MonkeyKing_Boundless_Strike) == 0x5e8);
    };
};
