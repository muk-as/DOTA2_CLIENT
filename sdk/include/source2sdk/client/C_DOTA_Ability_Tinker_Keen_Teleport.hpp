#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Tinker_Keen_Teleport : public client::C_DOTABaseAbility
    {
    public:
        int32_t creep_teleport_level; // 0x5d8        
        int32_t hero_teleport_level; // 0x5dc        
        float outpost_channel_time; // 0x5e0        
        float jungle_outpost_channel_time; // 0x5e4        
        // m_hTeleportTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTeleportTarget;
        char m_hTeleportTarget[0x4]; // 0x5e8        
        client::ParticleIndex_t m_nFXOrigin; // 0x5ec        
        client::ParticleIndex_t m_nFXDestination; // 0x5f0        
        Vector m_vDestination; // 0x5f4        
        int32_t m_iMinDistance; // 0x600        
        float m_flBaseTeleportTime; // 0x604        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Tinker_Keen_Teleport because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Tinker_Keen_Teleport) == 0x608);
};
