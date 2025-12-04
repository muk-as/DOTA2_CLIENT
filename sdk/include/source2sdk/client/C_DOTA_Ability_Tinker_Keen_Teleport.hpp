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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Tinker_Keen_Teleport : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t creep_teleport_level; // 0x_            
            std::int32_t hero_teleport_level; // 0x_            
            float outpost_channel_time; // 0x_            
            float jungle_outpost_channel_time; // 0x_            
            // m_hTeleportTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTeleportTarget;
            char m_hTeleportTarget[0x_]; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXOrigin; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXDestination; // 0x_            
            VectorWS m_vDestination; // 0x_            
            std::int32_t m_iMinDistance; // 0x_            
            float m_flBaseTeleportTime; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Tinker_Keen_Teleport because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Tinker_Keen_Teleport) == 0x_);
    };
};
