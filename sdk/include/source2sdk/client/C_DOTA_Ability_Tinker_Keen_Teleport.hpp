#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Tinker_Keen_Teleport : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t creep_teleport_level; // 0x5b0            
            std::int32_t hero_teleport_level; // 0x5b4            
            float outpost_channel_time; // 0x5b8            
            float jungle_outpost_channel_time; // 0x5bc            
            // m_hTeleportTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTeleportTarget;
            char m_hTeleportTarget[0x4]; // 0x5c0            
            source2sdk::client::ParticleIndex_t m_nFXOrigin; // 0x5c4            
            source2sdk::client::ParticleIndex_t m_nFXDestination; // 0x5c8            
            Vector m_vDestination; // 0x5cc            
            std::int32_t m_iMinDistance; // 0x5d8            
            float m_flBaseTeleportTime; // 0x5dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Tinker_Keen_Teleport because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Tinker_Keen_Teleport) == 0x5e0);
    };
};
