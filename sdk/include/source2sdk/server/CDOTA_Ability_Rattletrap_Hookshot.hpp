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
        class CDOTA_Ability_Rattletrap_Hookshot : public source2sdk::server::CDOTABaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5c0            
            Vector m_vProjectileVelocity; // 0x5c4            
            bool m_bRetract; // 0x5d0            
            uint8_t _pad05d1[0x17]; // 0x5d1
            // m_hSourceCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSourceCaster;
            char m_hSourceCaster[0x4]; // 0x5e8            
            uint8_t _pad05ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Rattletrap_Hookshot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Rattletrap_Hookshot) == 0x5f0);
    };
};
