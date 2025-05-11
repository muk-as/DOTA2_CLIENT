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
        // Size: 0x5d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "float m_flLongestShackleDuration"
        #pragma pack(push, 1)
        class CDOTA_Ability_ShadowShaman_Shackles : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            float m_flLongestShackleDuration; // 0x5b8            
            uint8_t _pad05bc[0x4]; // 0x5bc
            // m_Victims has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_Victims;
            char m_Victims[0x18]; // 0x5c0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_ShadowShaman_Shackles because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_ShadowShaman_Shackles) == 0x5d8);
    };
};
